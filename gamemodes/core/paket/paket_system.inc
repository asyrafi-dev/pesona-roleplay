#include <YSI_Coding\y_hooks>

#define COLOR_RED      0xFF0000FF
#define COLOR_GREEN    0x33AA33FF
#define COLOR_YELLOW   0xFFFF00FF
#define COLOR_ORANGE   0xFFA500FF
#define COLOR_GREY     0xAFAFAFFF

#define MAX_PACKAGE_LOCATIONS 5

#define PACKAGE_COOLDOWN 60000
// timer package coldown nya 1 menit kalian bisa ubah sesuka hati kalian

new bool:PackageExists;
new PackagePickup;
new PackageCarrier = INVALID_PLAYER_ID;

new Float:PackagePos[3];

new bool:PlayerCarryPackage[MAX_PLAYERS];

new IllegalPackageMoney = 25000;

new Float:IllegalPackageSpawn[MAX_PACKAGE_LOCATIONS][3] =
{
    { -537.12, -1478.11, 9.2 },
    { -694.55, -2221.90, 25.1 },
    { -1123.22, -1627.51, 76.3 },
    { -363.77, -2870.22, 58.0 },
    { -811.44, -1933.11, 90.4 }
};

new Float:IllegalSellPos[3] =
{
    -2167.55,
    -2378.88,
    30.6
};

stock SpawnIllegalPackage()
{
    if(PackageExists)
        return 1;

    new rand = random(MAX_PACKAGE_LOCATIONS);

    PackagePos[0] = IllegalPackageSpawn[rand][0];
    PackagePos[1] = IllegalPackageSpawn[rand][1];
    PackagePos[2] = IllegalPackageSpawn[rand][2];

    PackagePickup = CreatePickup(
        1279,
        1,
        PackagePos[0],
        PackagePos[1],
        PackagePos[2],
        -1
    );

    PackageExists = true;

    SendClientMessageToAll(COLOR_ORANGE,
    "[ILEGAL] Sebuah paket ilegal muncul di area hutan.");

    return 1;
}

forward RespawnIllegalPackage();
public RespawnIllegalPackage()
{
    SpawnIllegalPackage();

    SendClientMessageToAll(COLOR_YELLOW,
    "[ILEGAL] Paket ilegal telah telah muncul.");

    return 1;
}

CMD:pakethelp(playerid, params[])
{
    SendClientMessage(playerid, COLOR_YELLOW,
    "===== ILLEGAL PACKAGE SYSTEM =====");

    SendClientMessage(playerid, COLOR_GREY,
    "/caripaket - Mencari lokasi paket ilegal");

    SendClientMessage(playerid, COLOR_GREY,
    "Ambil paket lalu jual ke tempat tersembunyi.");

    SendClientMessage(playerid, COLOR_GREY,
    "Jika mati, paket akan jatuh dan bisa direbut player lain.");

    return 1;
}

CMD:findpaket(playerid, params[])
{
    if(PackageCarrier != INVALID_PLAYER_ID)
    {
        new Float:x, Float:y, Float:z;

        GetPlayerPos(PackageCarrier, x, y, z);

        SetPlayerCheckpoint(playerid, x, y, z, 5.0);

        SendClientMessage(playerid, COLOR_ORANGE,
        "[ILEGAL] Paket sedang dibawa seseorang, lokasi telah ditandai.");

        return 1;
    }

    if(PackageExists)
    {
        SetPlayerCheckpoint(
            playerid,
            PackagePos[0],
            PackagePos[1],
            PackagePos[2],
            5.0
        );

        SendClientMessage(playerid, COLOR_GREEN,
        "[ILEGAL] Lokasi paket berhasil ditandai.");

        return 1;
    }

    return SendClientMessage(playerid, COLOR_RED,
    "[ILEGAL] Saat ini belum ada paket ilegal.");

    return 1;
}

CMD:sellpaket(playerid, params[])
{
    if(!PlayerCarryPackage[playerid])
        return SendClientMessage(playerid, COLOR_RED,
        "[ILEGAL] Kamu tidak membawa paket ilegal.");

    if(!IsPlayerInRangeOfPoint(playerid,
    5.0,
    IllegalSellPos[0],
    IllegalSellPos[1],
    IllegalSellPos[2]))
    {
        return SendClientMessage(playerid, COLOR_RED,
        "[ILEGAL] Kamu tidak berada di tempat jual paket.");
    }

    DisablePlayerCheckpoint(playerid);

    PlayerCarryPackage[playerid] = false;
    PackageCarrier = INVALID_PLAYER_ID;

    GivePlayerMoney(playerid, IllegalPackageMoney);

    new str[144];

    format(str, sizeof(str),
    "[ILEGAL] Ada yang sudah berhasil menjual paket ilegal seharga $%d.",
    GetName(playerid),
    IllegalPackageMoney);

    SendClientMessageToAll(COLOR_ORANGE, str);

    SetTimer("RespawnIllegalPackage", PACKAGE_COOLDOWN, false);

    SendClientMessageToAll(COLOR_ORANGE,
    "[ILEGAL] Paket ilegal berikutnya akan muncul dalam beberapa menit kedepan.");

    return 1;
}

public OnPlayerPickUpPickup(playerid, pickupid)
{
    if(pickupid == PackagePickup)
    {
        DestroyPickup(PackagePickup);

        PackagePickup = -1;

        PackageExists = false;

        PackageCarrier = playerid;
        PlayerCarryPackage[playerid] = true;

        DisablePlayerCheckpoint(playerid);

        SendClientMessage(playerid, COLOR_GREEN,
        "[ILEGAL] Kamu berhasil merebut paket ilegal.");

        SendClientMessage(playerid, COLOR_YELLOW,
        "Pergi ke tempat jual rahasia lalu gunakan /jualpaket.");

        SetPlayerCheckpoint(
            playerid,
            IllegalSellPos[0],
            IllegalSellPos[1],
            IllegalSellPos[2],
            5.0
        );

        new str[144];
        format(str, sizeof(str),
        "[ILEGAL] %s membawa paket ilegal.",
        GetName(playerid));

        SendClientMessageToAll(COLOR_ORANGE, str);
    }
    return 1;
}

hook OnPlayerEnterCheckpoint(playerid)
{
    if(PlayerCarryPackage[playerid])
    {
        if(IsPlayerInRangeOfPoint(playerid,
        5.0,
        IllegalSellPos[0],
        IllegalSellPos[1],
        IllegalSellPos[2]))
        {
            SendClientMessage(playerid, COLOR_YELLOW,
            "[ILEGAL] Gunakan /sellpaket untuk menjual paket.");
        }
    }
    return 1;
}

hook OnPlayerDeath(playerid, killerid, reason)
{
    if(PlayerCarryPackage[playerid])
    {
        new Float:x, Float:y, Float:z;
        GetPlayerPos(playerid, x, y, z);

        PlayerCarryPackage[playerid] = false;
        PackageCarrier = INVALID_PLAYER_ID;

        PackagePickup = CreatePickup(1279, 1, x, y, z, -1);

        PackagePos[0] = x;
        PackagePos[1] = y;
        PackagePos[2] = z;

        PackageExists = true;

        SendClientMessageToAll(COLOR_RED,
        "[ILEGAL] Pembawa paket mati, paket jatuh dan bisa direbut kembali.");

        foreach(new i : Player)
        {
            SetPlayerCheckpoint(i,
            PackagePos[0],
            PackagePos[1],
            PackagePos[2],
            5.0);
        }
    }
    return 1;
}

hook OnPlayerDisconnect(playerid, reason)
{
    if(PlayerCarryPackage[playerid])
    {
        new Float:x, Float:y, Float:z;

        GetPlayerPos(playerid, x, y, z);

        PackagePickup = CreatePickup(1279, 1, x, y, z, -1);

        PackagePos[0] = x;
        PackagePos[1] = y;
        PackagePos[2] = z;

        PackageExists = true;

        PlayerCarryPackage[playerid] = false;
        PackageCarrier = INVALID_PLAYER_ID;

        SendClientMessageToAll(COLOR_RED,
        "[ILEGAL] Pembawa paket keluar server, paket jatuh.");
    }
    return 1;
}

forward UpdateIllegalPackageTracker();
public UpdateIllegalPackageTracker()
{
    if(PackageCarrier != INVALID_PLAYER_ID)
    {
        new Float:x, Float:y, Float:z;

        GetPlayerPos(PackageCarrier, x, y, z);

        foreach(new i : Player)
        {
            if(i != PackageCarrier)
            {
                SetPlayerCheckpoint(i, x, y, z, 5.0);
            }
        }
    }
    return 1;
}

hook OnGameModeInit()
{
    SpawnIllegalPackage();
    SetTimer("UpdateIllegalPackageTracker", 3000, true);
    return 1;
}