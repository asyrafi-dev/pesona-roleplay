#include <YSI_Coding\y_hooks>

#define MAX_HUNTERS         50
#define BOUNTY_DURATION     (20 * 60)   // 20 menit (detik)
#define CATCH_DISTANCE      1.5         // meter
#define CHECKPOINT_INTERVAL 60          // detik
#define DEBUG_DURATION      (5 * 60)    // 5 menit (mode debug)
#define DIALOG_BOUNTYHELP   5500

#define COLOR_RED         0xFF0000FF
#define COLOR_YELLOW      0xFFFF00FF
#define COLOR_ORANGE      0xFFA500FF
#define COLOR_GREY        0xAFAFAFFF
#define COLOR_GREEN       0x33AA33FF

enum BountyData {
    bool:bActive,
    iTarget,
    iAmount,
    iTimer,
    iTimeLeft,
    iHunterCount,
    iHunters[MAX_HUNTERS]
}
new Bounty[BountyData];

new bool:IsHunter[MAX_PLAYERS];

new gBountyTimer    = -1;   // countdown
new gArrowTimer     = -1;   // update arrow tiap detik
new gCpTimer        = -1;   // update checkpoint tiap 60 detik

forward BountyCountdown();
forward BountyArrowUpdate();
forward BountyCheckpointUpdate();
forward OnBountyTimeout();

stock AddHunter(playerid) {
    if (Bounty[iHunterCount] >= MAX_HUNTERS) return false;
    Bounty[iHunters][Bounty[iHunterCount]] = playerid;
    Bounty[iHunterCount]++;
    IsHunter[playerid] = true;
    return true;
}

stock RemoveHunter(playerid) {
    for (new i = 0; i < Bounty[iHunterCount]; i++) {
        if (Bounty[iHunters][i] == playerid) {
            Bounty[iHunters][i] = Bounty[iHunters][Bounty[iHunterCount] - 1];
            Bounty[iHunterCount]--;
            IsHunter[playerid] = false;

            SetPlayerMarkerForPlayer(playerid, Bounty[iTarget], 0);
            DisablePlayerCheckpoint(playerid);
            return true;
        }
    }
    return false;
}

stock ClearAllHunters() {
    for (new i = 0; i < Bounty[iHunterCount]; i++) {
        new h = Bounty[iHunters][i];
        IsHunter[h] = false;
        SetPlayerMarkerForPlayer(h, Bounty[iTarget], 0);
        DisablePlayerCheckpoint(h);
    }
    Bounty[iHunterCount] = 0;
}

stock UpdateArrowForHunter(hunterID) {
    if (!IsPlayerConnected(Bounty[iTarget])) return;
    new Float:tx, Float:ty, Float:tz;
    GetPlayerPos(Bounty[iTarget], tx, ty, tz);
    SetPlayerMarkerForPlayer(hunterID, Bounty[iTarget], 0xFF0000FF);
    SetPlayerCheckpoint(hunterID, tx, ty, tz, 2.0);
}

stock StopBountySystem() {
    if (gBountyTimer != -1)  { KillTimer(gBountyTimer);  gBountyTimer  = -1; }
    if (gArrowTimer != -1)   { KillTimer(gArrowTimer);   gArrowTimer   = -1; }
    if (gCpTimer != -1)      { KillTimer(gCpTimer);       gCpTimer      = -1; }
    ClearAllHunters();
    Bounty[bActive]      = false;
    Bounty[iTarget]      = INVALID_PLAYER_ID;
    Bounty[iAmount]      = 0;
    Bounty[iTimeLeft]    = 0;
    Bounty[iHunterCount] = 0;
}

stock FormatTime(seconds, dest[], len) {
    format(dest, len, "%02d:%02d", seconds / 60, seconds % 60);
}

public BountyCountdown() {
    if (!Bounty[bActive]) return;
    Bounty[iTimeLeft]--;
    if (Bounty[iTimeLeft] <= 0) {
        OnBountyTimeout();
    }
}

public BountyArrowUpdate() {
    if (!Bounty[bActive]) return;
    if (!IsPlayerConnected(Bounty[iTarget])) {
        // Target disconnect → reset
        SendClientMessageToAll(COLOR_RED, "[BOUNTY] Target disconnect! Sistem di-reset.");
        StopBountySystem();
        return;
    }
    for (new i = 0; i < Bounty[iHunterCount]; i++) {
        new h = Bounty[iHunters][i];
        if (IsPlayerConnected(h)) {
            new Float:tx, Float:ty, Float:tz;
            GetPlayerPos(Bounty[iTarget], tx, ty, tz);
            SetPlayerMarkerForPlayer(h, Bounty[iTarget], 0xFF0000FF);
        }
    }
}

public BountyCheckpointUpdate() {
    if (!Bounty[bActive]) return;
    if (!IsPlayerConnected(Bounty[iTarget])) return;
    new Float:tx, Float:ty, Float:tz;
    GetPlayerPos(Bounty[iTarget], tx, ty, tz);
    for (new i = 0; i < Bounty[iHunterCount]; i++) {
        new h = Bounty[iHunters][i];
        if (IsPlayerConnected(h)) {
            SetPlayerCheckpoint(h, tx, ty, tz, 2.0);
        }
    }
}

public OnBountyTimeout() {
    if (!Bounty[bActive]) return;
    // Uang diberikan ke target karena tidak tertangkap
    new targetID = Bounty[iTarget];
    new amount   = Bounty[iAmount];
    new name[MAX_PLAYER_NAME];
    GetPlayerName(targetID, name, sizeof(name));

    new msg[128];
    format(msg, sizeof(msg), "[BOUNTY] Waktu habis! %s berhasil lolos dan mendapat $%d!", name, amount);
    SendClientMessageToAll(COLOR_YELLOW, msg);

    if (IsPlayerConnected(targetID)) {
        GivePlayerMoney(targetID, amount);
    }
    StopBountySystem();
}

CMD:setbounty(playerid, params[]) {
    if(AccountData[playerid][pAdmin] < 5)
        return SendClientMessage(playerid, COLOR_RED, "[ERROR] Kamu bukan admin.");

    new targetID, amount;
    if (sscanf(params, "ii", targetID, amount))
        return SendClientMessage(playerid, COLOR_YELLOW, "Penggunaan: /setbounty [playerid] [amount]");

    if (!IsPlayerConnected(targetID))
        return SendClientMessage(playerid, COLOR_RED, "[ERROR] Player tidak ditemukan.");

    if (amount < 1000)
        return SendClientMessage(playerid, COLOR_RED, "[ERROR] Hadiah minimum $1,000.");

    if (Bounty[bActive])
        return SendClientMessage(playerid, COLOR_RED, "[ERROR] Bounty sudah aktif. Hentikan dulu dengan /stopbounty.");

    Bounty[bActive]      = true;
    Bounty[iTarget]      = targetID;
    Bounty[iAmount]      = amount;
    Bounty[iTimeLeft]    = BOUNTY_DURATION;
    Bounty[iHunterCount] = 0;

    gBountyTimer = SetTimer("BountyCountdown",     1000,  true);
    gArrowTimer  = SetTimer("BountyArrowUpdate",   1000,  true);
    gCpTimer     = SetTimer("BountyCheckpointUpdate", CHECKPOINT_INTERVAL * 1000, true);

    new targetName[MAX_PLAYER_NAME], adminName[MAX_PLAYER_NAME];
    GetPlayerName(targetID,  targetName, sizeof(targetName));
    GetPlayerName(playerid,  adminName,  sizeof(adminName));

    new msg[160];
    format(msg, sizeof(msg),
        "[BOUNTY] *** BOUNTY AKTIF! *** Target: %s | Hadiah: $%d | Waktu: 20 menit. Ketik /joinbounty untuk berburu!",
        targetName, amount);
    SendClientMessageToAll(COLOR_ORANGE, msg);

    SendClientMessage(targetID, COLOR_RED, "[BOUNTY] Kamu dijadikan target bounty! Bertahan selama 20 menit untuk mendapat hadiahnya.");
    return 1;
}

CMD:stopbounty(playerid, params[]) {
    if(AccountData[playerid][pAdmin] < 5)
        return SendClientMessage(playerid, COLOR_RED, "[ERROR] Kamu bukan admin.");

    if (!Bounty[bActive])
        return SendClientMessage(playerid, COLOR_RED, "[ERROR] Tidak ada bounty yang aktif.");

    StopBountySystem();
    SendClientMessageToAll(COLOR_YELLOW, "[BOUNTY] Bounty dihentikan paksa oleh admin.");
    return 1;
}

CMD:debugbounty(playerid, params[]) {
    if(AccountData[playerid][pAdmin] < 5)
        return SendClientMessage(playerid, COLOR_RED, "[ERROR] Kamu bukan admin.");

    if (Bounty[bActive])
        return SendClientMessage(playerid, COLOR_RED, "[ERROR] Bounty sudah aktif.");

    Bounty[bActive]      = true;
    Bounty[iTarget]      = playerid;
    Bounty[iAmount]      = 50000;
    Bounty[iTimeLeft]    = DEBUG_DURATION;
    Bounty[iHunterCount] = 0;

    gBountyTimer = SetTimer("BountyCountdown",        1000, true);
    gArrowTimer  = SetTimer("BountyArrowUpdate",      1000, true);
    gCpTimer     = SetTimer("BountyCheckpointUpdate", CHECKPOINT_INTERVAL * 1000, true);

    new name[MAX_PLAYER_NAME];
    GetPlayerName(playerid, name, sizeof(name));

    new msg[128];
    format(msg, sizeof(msg), "[BOUNTY-DEBUG] %s mengaktifkan debug bounty (5 menit, $50,000).", name);
    SendClientMessageToAll(COLOR_GREY, msg);
    return 1;
}

CMD:joinbounty(playerid, params[]) {
    if (!Bounty[bActive])
        return SendClientMessage(playerid, COLOR_RED, "[BOUNTY] Tidak ada bounty yang aktif saat ini.");

    if (playerid == Bounty[iTarget])
        return SendClientMessage(playerid, COLOR_RED, "[BOUNTY] Kamu adalah target bounty!");

    if (IsHunter[playerid])
        return SendClientMessage(playerid, COLOR_RED, "[BOUNTY] Kamu sudah bergabung sebagai hunter.");

    if (Bounty[iHunterCount] >= MAX_HUNTERS)
        return SendClientMessage(playerid, COLOR_RED, "[BOUNTY] Slot hunter penuh (max 50).");

    AddHunter(playerid);
    UpdateArrowForHunter(playerid);

    new targetName[MAX_PLAYER_NAME];
    GetPlayerName(Bounty[iTarget], targetName, sizeof(targetName));

    new msg[128];
    format(msg, sizeof(msg), "[BOUNTY] Kamu bergabung sebagai hunter! Cari %s dan tangkap dalam jarak 1.5m lalu ketik /catchbounty.", targetName);
    SendClientMessage(playerid, COLOR_GREEN, msg);
    return 1;
}

CMD:leavebounty(playerid, params[]) {
    if (!IsHunter[playerid])
        return SendClientMessage(playerid, COLOR_RED, "[BOUNTY] Kamu bukan hunter aktif.");

    RemoveHunter(playerid);
    SendClientMessage(playerid, COLOR_YELLOW, "[BOUNTY] Kamu keluar dari hunt. Arrow & checkpoint dihapus.");
    return 1;
}

CMD:catchbounty(playerid, params[]) {
    if (!Bounty[bActive])
        return SendClientMessage(playerid, COLOR_RED, "[BOUNTY] Tidak ada bounty yang aktif.");

    if (!IsHunter[playerid])
        return SendClientMessage(playerid, COLOR_RED, "[BOUNTY] Kamu bukan hunter. Ketik /joinbounty dulu.");

    new targetID = Bounty[iTarget];
    if (!IsPlayerConnected(targetID))
        return SendClientMessage(playerid, COLOR_RED, "[BOUNTY] Target tidak ditemukan.");

    new Float:hx, Float:hy, Float:hz, Float:tx, Float:ty, Float:tz;
    GetPlayerPos(playerid, hx, hy, hz);
    GetPlayerPos(targetID, tx, ty, tz);
    new Float:dist = floatsqroot((hx-tx)*(hx-tx) + (hy-ty)*(hy-ty) + (hz-tz)*(hz-tz));

    if (dist > CATCH_DISTANCE) {
        new msg[80];
        format(msg, sizeof(msg), "[BOUNTY] Kamu terlalu jauh! Jarak: %.1fm (harus <= 1.5m).", dist);
        return SendClientMessage(playerid, COLOR_RED, msg);
    }

    new hunterName[MAX_PLAYER_NAME], targetName[MAX_PLAYER_NAME];
    GetPlayerName(playerid, hunterName, sizeof(hunterName));
    GetPlayerName(targetID, targetName, sizeof(targetName));

    GivePlayerMoney(playerid, Bounty[iAmount]);

    new msg[160];
    format(msg, sizeof(msg),
        "[BOUNTY] *** %s berhasil menangkap %s dan mendapat hadiah $%d! ***",
        hunterName, targetName, Bounty[iAmount]);
    SendClientMessageToAll(COLOR_GREEN, msg);

    StopBountySystem();
    return 1;
}

CMD:bountystatus(playerid, params[]) {
    if (!Bounty[bActive])
        return SendClientMessage(playerid, COLOR_RED, "[BOUNTY] Tidak ada bounty yang aktif saat ini.");

    new targetName[MAX_PLAYER_NAME];
    GetPlayerName(Bounty[iTarget], targetName, sizeof(targetName));

    new timeStr[8];
    FormatTime(Bounty[iTimeLeft], timeStr, sizeof(timeStr));

    new msg[256];

    if (IsHunter[playerid] && IsPlayerConnected(Bounty[iTarget])) {
        new Float:hx, Float:hy, Float:hz, Float:tx, Float:ty, Float:tz;
        GetPlayerPos(playerid, hx, hy, hz);
        GetPlayerPos(Bounty[iTarget], tx, ty, tz);
        new Float:dist = floatsqroot((hx-tx)*(hx-tx) + (hy-ty)*(hy-ty) + (hz-tz)*(hz-tz));
        format(msg, sizeof(msg),
            "[BOUNTY STATUS] Target: %s | Hadiah: $%d | Waktu: %s | Jarak: %.1fm | Hunters: %d/%d",
            targetName, Bounty[iAmount], timeStr, dist, Bounty[iHunterCount], MAX_HUNTERS);
    } else {
        format(msg, sizeof(msg),
            "[BOUNTY STATUS] Target: %s | Hadiah: $%d | Waktu: %s | Hunters: %d/%d",
            targetName, Bounty[iAmount], timeStr, Bounty[iHunterCount], MAX_HUNTERS);
    }
    SendClientMessage(playerid, COLOR_YELLOW, msg);
    return 1;
}

CMD:bountyhelp(playerid, params[])
{
    new info[2048];

    strcat(info, "{FFFFFF}Selamat datang di {FF0000}Bounty System{FFFFFF}!\n\n");

    strcat(info, "{FF8C00}Cara Kerja:\n");
    strcat(info, "{FFFFFF}1. Admin set bounty ke player target\n");
    strcat(info, "2. Player gunakan /joinbounty untuk memburu\n");
    strcat(info, "3. Arrow & checkpoint otomatis aktif\n");
    strcat(info, "4. Dekati target lalu gunakan /catchbounty\n");
    strcat(info, "5. Dapatkan hadiah uang\n\n");

    strcat(info, "{FF8C00}Command Staff:\n");
    strcat(info, "{FF0000}/setbounty [playerid] [amount]\n");
    strcat(info, "{FFFFFF}Set bounty target\n\n");

    strcat(info, "{FF0000}/stopbounty\n");
    strcat(info, "{FFFFFF}Stop bounty aktif\n\n");

    strcat(info, "{FF0000}/debugbounty\n");
    strcat(info, "{FFFFFF}Test mode bounty\n\n");

    strcat(info, "{FF8C00}Command Player:\n");
    strcat(info, "{FF0000}/joinbounty\n");
    strcat(info, "{FFFFFF}Gabung jadi hunter\n\n");

    strcat(info, "{FF0000}/leavebounty\n");
    strcat(info, "{FFFFFF}Keluar dari hunt\n\n");

    strcat(info, "{FF0000}/catchbounty\n");
    strcat(info, "{FFFFFF}Tangkap target bounty\n\n");

    strcat(info, "{FF0000}/bountystatus\n");
    strcat(info, "{FFFFFF}Lihat status bounty\n\n");

    ShowPlayerDialog(
        playerid,
        DIALOG_BOUNTYHELP,
        DIALOG_STYLE_MSGBOX,
        "Bounty System",
        info,
        "Tutup",
        ""
    );

    return 1;
}

hook OnPlayerDisconnect(playerid, reason) {
    if (Bounty[bActive]) {
        if (playerid == Bounty[iTarget]) {
            SendClientMessageToAll(COLOR_RED, "[BOUNTY] Target disconnect! Bounty sistem di-reset.");
            StopBountySystem();
        } else if (IsHunter[playerid]) {
            RemoveHunter(playerid);
        }
    }
    IsHunter[playerid] = false;
    return 1;
}

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[]) {
    if (dialogid == DIALOG_BOUNTYHELP) return 1;
    return 0;
}

hook OnGameModeInit() {
    Bounty[bActive]      = false;
    Bounty[iTarget]      = INVALID_PLAYER_ID;
    Bounty[iAmount]      = 0;
    Bounty[iTimeLeft]    = 0;
    Bounty[iHunterCount] = 0;
    return 1;
}
