#include <YSI_Coding\y_hooks>
#define hud_transparant 100
#define hud_transparant_blue 1097458070   

new Text: PLAYERINFOTD[29];
new PlayerText: PONLINE[MAX_PLAYERS];
new PlayerText: PID[MAX_PLAYERS];
new PlayerText: CASH[MAX_PLAYERS];
new PlayerText: BANK[MAX_PLAYERS];
new PlayerText: JOB[MAX_PLAYERS];
new PlayerText: GANGS[MAX_PLAYERS];
new TextdrawUpdateTimer[MAX_PLAYERS];
hook OnPlayerConnect(playerid)
{
	CreatePStatsTD(playerid);
	return 1;
}
hook OnGameModeInit()
{
	CreateStatsTD();
	return 1;
}
/*hook OnPlayerSpawn(playerid)
{
	ShowStatsTD(playerid);         // Menampilkan textdraw HUD
	return 1;
}
hook OnPlayerDisconnect(playerid, reason)
{
    if (TextdrawUpdateTimer[playerid])
    {
        KillTimer(TextdrawUpdateTimer[playerid]);
        TextdrawUpdateTimer[playerid] = 0;
    }
    return 1;
}*/

CreateStatsTD()
{
    PLAYERINFOTD[0] = TextDrawCreate(604.000, 142.000, "_");
    TextDrawTextSize(PLAYERINFOTD[0], 21.000, 26.000);
    TextDrawAlignment(PLAYERINFOTD[0], 1);
    TextDrawColor(PLAYERINFOTD[0], -377187329);
    TextDrawSetShadow(PLAYERINFOTD[0], 0);
    TextDrawSetOutline(PLAYERINFOTD[0], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[0], 0);
    TextDrawFont(PLAYERINFOTD[0], 5);
    TextDrawSetProportional(PLAYERINFOTD[0], 0);
    TextDrawSetPreviewModel(PLAYERINFOTD[0], 2751);
    TextDrawSetPreviewRot(PLAYERINFOTD[0], -90.000, 0.000, 30.000, 1.000);
    TextDrawSetPreviewVehCol(PLAYERINFOTD[0], 0, 0);

    PLAYERINFOTD[1] = TextDrawCreate(600.000, 161.000, "_");
    TextDrawTextSize(PLAYERINFOTD[1], 29.000, 33.000);
    TextDrawAlignment(PLAYERINFOTD[1], 1);
    TextDrawColor(PLAYERINFOTD[1], -121714538);
    TextDrawSetShadow(PLAYERINFOTD[1], 0);
    TextDrawSetOutline(PLAYERINFOTD[1], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[1], 0);
    TextDrawFont(PLAYERINFOTD[1], 5);
    TextDrawSetProportional(PLAYERINFOTD[1], 0);
    TextDrawSetPreviewModel(PLAYERINFOTD[1], 2751);
    TextDrawSetPreviewRot(PLAYERINFOTD[1], -90.000, 0.000, 30.000, 1.000);
    TextDrawSetPreviewVehCol(PLAYERINFOTD[1], 0, 0);

    PLAYERINFOTD[2] = TextDrawCreate(604.000, 165.000, "_");
    TextDrawTextSize(PLAYERINFOTD[2], 21.000, 26.000);
    TextDrawAlignment(PLAYERINFOTD[2], 1);
    TextDrawColor(PLAYERINFOTD[2], -377187329);
    TextDrawSetShadow(PLAYERINFOTD[2], 0);
    TextDrawSetOutline(PLAYERINFOTD[2], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[2], 0);
    TextDrawFont(PLAYERINFOTD[2], 5);
    TextDrawSetProportional(PLAYERINFOTD[2], 0);
    TextDrawSetPreviewModel(PLAYERINFOTD[2], 2751);
    TextDrawSetPreviewRot(PLAYERINFOTD[2], -90.000, 0.000, 30.000, 1.000);
    TextDrawSetPreviewVehCol(PLAYERINFOTD[2], 0, 0);

    PLAYERINFOTD[3] = TextDrawCreate(600.000, 185.000, "_");
    TextDrawTextSize(PLAYERINFOTD[3], 29.000, 33.000);
    TextDrawAlignment(PLAYERINFOTD[3], 1);
    TextDrawColor(PLAYERINFOTD[3], -121583466);
    TextDrawSetShadow(PLAYERINFOTD[3], 0);
    TextDrawSetOutline(PLAYERINFOTD[3], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[3], 0);
    TextDrawFont(PLAYERINFOTD[3], 5);
    TextDrawSetProportional(PLAYERINFOTD[3], 0);
    TextDrawSetPreviewModel(PLAYERINFOTD[3], 2751);
    TextDrawSetPreviewRot(PLAYERINFOTD[3], -90.000, 0.000, 30.000, 1.000);
    TextDrawSetPreviewVehCol(PLAYERINFOTD[3], 0, 0);

    PLAYERINFOTD[4] = TextDrawCreate(604.000, 189.000, "_");
    TextDrawTextSize(PLAYERINFOTD[4], 21.000, 26.000);
    TextDrawAlignment(PLAYERINFOTD[4], 1);
    TextDrawColor(PLAYERINFOTD[4], -377187329);
    TextDrawSetShadow(PLAYERINFOTD[4], 0);
    TextDrawSetOutline(PLAYERINFOTD[4], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[4], 0);
    TextDrawFont(PLAYERINFOTD[4], 5);
    TextDrawSetProportional(PLAYERINFOTD[4], 0);
    TextDrawSetPreviewModel(PLAYERINFOTD[4], 2751);
    TextDrawSetPreviewRot(PLAYERINFOTD[4], -90.000, 0.000, 30.000, 1.000);
    TextDrawSetPreviewVehCol(PLAYERINFOTD[4], 0, 0);

    PLAYERINFOTD[5] = TextDrawCreate(600.000, 209.000, "_");
    TextDrawTextSize(PLAYERINFOTD[5], 29.000, 33.000);
    TextDrawAlignment(PLAYERINFOTD[5], 1);
    TextDrawColor(PLAYERINFOTD[5], -121780074);
    TextDrawSetShadow(PLAYERINFOTD[5], 0);
    TextDrawSetOutline(PLAYERINFOTD[5], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[5], 0);
    TextDrawFont(PLAYERINFOTD[5], 5);
    TextDrawSetProportional(PLAYERINFOTD[5], 0);
    TextDrawSetPreviewModel(PLAYERINFOTD[5], 2751);
    TextDrawSetPreviewRot(PLAYERINFOTD[5], -90.000, 0.000, 30.000, 1.000);
    TextDrawSetPreviewVehCol(PLAYERINFOTD[5], 0, 0);

    PLAYERINFOTD[6] = TextDrawCreate(604.000, 213.000, "_");
    TextDrawTextSize(PLAYERINFOTD[6], 21.000, 26.000);
    TextDrawAlignment(PLAYERINFOTD[6], 1);
    TextDrawColor(PLAYERINFOTD[6], -377187329);
    TextDrawSetShadow(PLAYERINFOTD[6], 0);
    TextDrawSetOutline(PLAYERINFOTD[6], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[6], 0);
    TextDrawFont(PLAYERINFOTD[6], 5);
    TextDrawSetProportional(PLAYERINFOTD[6], 0);
    TextDrawSetPreviewModel(PLAYERINFOTD[6], 2751);
    TextDrawSetPreviewRot(PLAYERINFOTD[6], -90.000, 0.000, 30.000, 1.000);
    TextDrawSetPreviewVehCol(PLAYERINFOTD[6], 0, 0);

    PLAYERINFOTD[7] = TextDrawCreate(600.000, 233.000, "_");
    TextDrawTextSize(PLAYERINFOTD[7], 29.000, 33.000);
    TextDrawAlignment(PLAYERINFOTD[7], 1);
    TextDrawColor(PLAYERINFOTD[7], -121715306);
    TextDrawSetShadow(PLAYERINFOTD[7], 0);
    TextDrawSetOutline(PLAYERINFOTD[7], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[7], 0);
    TextDrawFont(PLAYERINFOTD[7], 5);
    TextDrawSetProportional(PLAYERINFOTD[7], 0);
    TextDrawSetPreviewModel(PLAYERINFOTD[7], 2751);
    TextDrawSetPreviewRot(PLAYERINFOTD[7], -90.000, 0.000, 30.000, 1.000);
    TextDrawSetPreviewVehCol(PLAYERINFOTD[7], 0, 0);

    PLAYERINFOTD[8] = TextDrawCreate(604.000, 237.000, "_");
    TextDrawTextSize(PLAYERINFOTD[8], 21.000, 26.000);
    TextDrawAlignment(PLAYERINFOTD[8], 1);
    TextDrawColor(PLAYERINFOTD[8], -377187329);
    TextDrawSetShadow(PLAYERINFOTD[8], 0);
    TextDrawSetOutline(PLAYERINFOTD[8], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[8], 0);
    TextDrawFont(PLAYERINFOTD[8], 5);
    TextDrawSetProportional(PLAYERINFOTD[8], 0);
    TextDrawSetPreviewModel(PLAYERINFOTD[8], 2751);
    TextDrawSetPreviewRot(PLAYERINFOTD[8], -90.000, 0.000, 30.000, 1.000);
    TextDrawSetPreviewVehCol(PLAYERINFOTD[8], 0, 0);

    PLAYERINFOTD[9] = TextDrawCreate(600.000, 257.000, "_");
    TextDrawTextSize(PLAYERINFOTD[9], 29.000, 33.000);
    TextDrawAlignment(PLAYERINFOTD[9], 1);
    TextDrawColor(PLAYERINFOTD[9], -121846890);
    TextDrawSetShadow(PLAYERINFOTD[9], 0);
    TextDrawSetOutline(PLAYERINFOTD[9], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[9], 0);
    TextDrawFont(PLAYERINFOTD[9], 5);
    TextDrawSetProportional(PLAYERINFOTD[9], 0);
    TextDrawSetPreviewModel(PLAYERINFOTD[9], 2751);
    TextDrawSetPreviewRot(PLAYERINFOTD[9], -90.000, 0.000, 30.000, 1.000);
    TextDrawSetPreviewVehCol(PLAYERINFOTD[9], 0, 0);

    PLAYERINFOTD[10] = TextDrawCreate(604.000, 261.000, "_");
    TextDrawTextSize(PLAYERINFOTD[10], 21.000, 26.000);
    TextDrawAlignment(PLAYERINFOTD[10], 1);
    TextDrawColor(PLAYERINFOTD[10], -377187329);
    TextDrawSetShadow(PLAYERINFOTD[10], 0);
    TextDrawSetOutline(PLAYERINFOTD[10], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[10], 0);
    TextDrawFont(PLAYERINFOTD[10], 5);
    TextDrawSetProportional(PLAYERINFOTD[10], 0);
    TextDrawSetPreviewModel(PLAYERINFOTD[10], 2751);
    TextDrawSetPreviewRot(PLAYERINFOTD[10], -90.000, 0.000, 30.000, 1.000);
    TextDrawSetPreviewVehCol(PLAYERINFOTD[10], 0, 0);

    PLAYERINFOTD[11] = TextDrawCreate(600.000, 138.000, "_");
    TextDrawTextSize(PLAYERINFOTD[11], 29.000, 33.000);
    TextDrawAlignment(PLAYERINFOTD[11], 1);
    TextDrawColor(PLAYERINFOTD[11], -121583210);
    TextDrawSetShadow(PLAYERINFOTD[11], 0);
    TextDrawSetOutline(PLAYERINFOTD[11], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[11], 0);
    TextDrawFont(PLAYERINFOTD[11], 5);
    TextDrawSetProportional(PLAYERINFOTD[11], 0);
    TextDrawSetPreviewModel(PLAYERINFOTD[11], 2751);
    TextDrawSetPreviewRot(PLAYERINFOTD[11], -90.000, 0.000, 30.000, 1.000);
    TextDrawSetPreviewVehCol(PLAYERINFOTD[11], 0, 0);

    PLAYERINFOTD[12] = TextDrawCreate(610.000, 158.000, "LD_BEAT:chit");
    TextDrawTextSize(PLAYERINFOTD[12], 6.000, 4.000);
    TextDrawAlignment(PLAYERINFOTD[12], 1);
    TextDrawColor(PLAYERINFOTD[12], 2147418367);
    TextDrawSetShadow(PLAYERINFOTD[12], 0);
    TextDrawSetOutline(PLAYERINFOTD[12], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[12], 255);
    TextDrawFont(PLAYERINFOTD[12], 4);
    TextDrawSetProportional(PLAYERINFOTD[12], 1);

    PLAYERINFOTD[13] = TextDrawCreate(614.000, 156.000, "LD_BEAT:chit");
    TextDrawTextSize(PLAYERINFOTD[13], 6.000, 4.000);
    TextDrawAlignment(PLAYERINFOTD[13], 1);
    TextDrawColor(PLAYERINFOTD[13], 2147418367);
    TextDrawSetShadow(PLAYERINFOTD[13], 0);
    TextDrawSetOutline(PLAYERINFOTD[13], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[13], 255);
    TextDrawFont(PLAYERINFOTD[13], 4);
    TextDrawSetProportional(PLAYERINFOTD[13], 1);

    PLAYERINFOTD[14] = TextDrawCreate(615.000, 152.000, "LD_BEAT:chit");
    TextDrawTextSize(PLAYERINFOTD[14], 4.000, 4.000);
    TextDrawAlignment(PLAYERINFOTD[14], 1);
    TextDrawColor(PLAYERINFOTD[14], 2147418367);
    TextDrawSetShadow(PLAYERINFOTD[14], 0);
    TextDrawSetOutline(PLAYERINFOTD[14], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[14], 255);
    TextDrawFont(PLAYERINFOTD[14], 4);
    TextDrawSetProportional(PLAYERINFOTD[14], 1);

    PLAYERINFOTD[15] = TextDrawCreate(611.000, 155.000, "LD_BEAT:chit");
    TextDrawTextSize(PLAYERINFOTD[15], 4.000, 4.000);
    TextDrawAlignment(PLAYERINFOTD[15], 1);
    TextDrawColor(PLAYERINFOTD[15], 2147418367);
    TextDrawSetShadow(PLAYERINFOTD[15], 0);
    TextDrawSetOutline(PLAYERINFOTD[15], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[15], 255);
    TextDrawFont(PLAYERINFOTD[15], 4);
    TextDrawSetProportional(PLAYERINFOTD[15], 1);

    PLAYERINFOTD[16] = TextDrawCreate(611.000, 179.000, "LD_BEAT:chit");
    TextDrawTextSize(PLAYERINFOTD[16], 9.000, 6.000);
    TextDrawAlignment(PLAYERINFOTD[16], 1);
    TextDrawColor(PLAYERINFOTD[16], -1);
    TextDrawSetShadow(PLAYERINFOTD[16], 0);
    TextDrawSetOutline(PLAYERINFOTD[16], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[16], 255);
    TextDrawFont(PLAYERINFOTD[16], 4);
    TextDrawSetProportional(PLAYERINFOTD[16], 1);

    PLAYERINFOTD[17] = TextDrawCreate(613.000, 174.000, "LD_BEAT:chit");
    TextDrawTextSize(PLAYERINFOTD[17], 5.000, 6.000);
    TextDrawAlignment(PLAYERINFOTD[17], 1);
    TextDrawColor(PLAYERINFOTD[17], -1);
    TextDrawSetShadow(PLAYERINFOTD[17], 0);
    TextDrawSetOutline(PLAYERINFOTD[17], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[17], 255);
    TextDrawFont(PLAYERINFOTD[17], 4);
    TextDrawSetProportional(PLAYERINFOTD[17], 1);

    PLAYERINFOTD[18] = TextDrawCreate(615.000, 199.000, "$");
    TextDrawLetterSize(PLAYERINFOTD[18], 0.200, 1.098);
    TextDrawAlignment(PLAYERINFOTD[18], 2);
    TextDrawColor(PLAYERINFOTD[18], -1);
    TextDrawSetShadow(PLAYERINFOTD[18], 0);
    TextDrawSetOutline(PLAYERINFOTD[18], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[18], 150);
    TextDrawFont(PLAYERINFOTD[18], 1);
    TextDrawSetProportional(PLAYERINFOTD[18], 1);

    PLAYERINFOTD[19] = TextDrawCreate(611.000, 226.000, "LD_SPAC:white");
    TextDrawTextSize(PLAYERINFOTD[19], 8.000, 5.000);
    TextDrawAlignment(PLAYERINFOTD[19], 1);
    TextDrawColor(PLAYERINFOTD[19], -1);
    TextDrawSetShadow(PLAYERINFOTD[19], 0);
    TextDrawSetOutline(PLAYERINFOTD[19], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[19], 255);
    TextDrawFont(PLAYERINFOTD[19], 4);
    TextDrawSetProportional(PLAYERINFOTD[19], 1);

    PLAYERINFOTD[20] = TextDrawCreate(616.000, 227.000, "LD_BEAT:chit");
    TextDrawTextSize(PLAYERINFOTD[20], 3.000, 3.000);
    TextDrawAlignment(PLAYERINFOTD[20], 1);
    TextDrawColor(PLAYERINFOTD[20], -12254977);
    TextDrawSetShadow(PLAYERINFOTD[20], 0);
    TextDrawSetOutline(PLAYERINFOTD[20], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[20], 255);
    TextDrawFont(PLAYERINFOTD[20], 4);
    TextDrawSetProportional(PLAYERINFOTD[20], 1);

    PLAYERINFOTD[21] = TextDrawCreate(611.000, 250.000, "LD_SPAC:white");
    TextDrawTextSize(PLAYERINFOTD[21], 8.000, 5.000);
    TextDrawAlignment(PLAYERINFOTD[21], 1);
    TextDrawColor(PLAYERINFOTD[21], -1);
    TextDrawSetShadow(PLAYERINFOTD[21], 0);
    TextDrawSetOutline(PLAYERINFOTD[21], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[21], 255);
    TextDrawFont(PLAYERINFOTD[21], 4);
    TextDrawSetProportional(PLAYERINFOTD[21], 1);

    PLAYERINFOTD[22] = TextDrawCreate(615.000, 242.000, "o");
    TextDrawLetterSize(PLAYERINFOTD[22], 0.230, 1.098);
    TextDrawAlignment(PLAYERINFOTD[22], 2);
    TextDrawColor(PLAYERINFOTD[22], -1);
    TextDrawSetShadow(PLAYERINFOTD[22], 0);
    TextDrawSetOutline(PLAYERINFOTD[22], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[22], 150);
    TextDrawFont(PLAYERINFOTD[22], 1);
    TextDrawSetProportional(PLAYERINFOTD[22], 1);

    PLAYERINFOTD[23] = TextDrawCreate(612.000, 275.000, "LD_BEAT:chit");
    TextDrawTextSize(PLAYERINFOTD[23], 6.000, 5.000);
    TextDrawAlignment(PLAYERINFOTD[23], 1);
    TextDrawColor(PLAYERINFOTD[23], -16776961);
    TextDrawSetShadow(PLAYERINFOTD[23], 0);
    TextDrawSetOutline(PLAYERINFOTD[23], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[23], 255);
    TextDrawFont(PLAYERINFOTD[23], 4);
    TextDrawSetProportional(PLAYERINFOTD[23], 1);

    PLAYERINFOTD[24] = TextDrawCreate(609.000, 276.000, "LD_BEAT:chit");
    TextDrawTextSize(PLAYERINFOTD[24], 6.000, 5.000);
    TextDrawAlignment(PLAYERINFOTD[24], 1);
    TextDrawColor(PLAYERINFOTD[24], -16776961);
    TextDrawSetShadow(PLAYERINFOTD[24], 0);
    TextDrawSetOutline(PLAYERINFOTD[24], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[24], 255);
    TextDrawFont(PLAYERINFOTD[24], 4);
    TextDrawSetProportional(PLAYERINFOTD[24], 1);

    PLAYERINFOTD[25] = TextDrawCreate(615.000, 276.000, "LD_BEAT:chit");
    TextDrawTextSize(PLAYERINFOTD[25], 6.000, 5.000);
    TextDrawAlignment(PLAYERINFOTD[25], 1);
    TextDrawColor(PLAYERINFOTD[25], -16776961);
    TextDrawSetShadow(PLAYERINFOTD[25], 0);
    TextDrawSetOutline(PLAYERINFOTD[25], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[25], 255);
    TextDrawFont(PLAYERINFOTD[25], 4);
    TextDrawSetProportional(PLAYERINFOTD[25], 1);

    PLAYERINFOTD[26] = TextDrawCreate(613.000, 272.000, "LD_BEAT:chit");
    TextDrawTextSize(PLAYERINFOTD[26], 4.000, 4.000);
    TextDrawAlignment(PLAYERINFOTD[26], 1);
    TextDrawColor(PLAYERINFOTD[26], -16776961);
    TextDrawSetShadow(PLAYERINFOTD[26], 0);
    TextDrawSetOutline(PLAYERINFOTD[26], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[26], 255);
    TextDrawFont(PLAYERINFOTD[26], 4);
    TextDrawSetProportional(PLAYERINFOTD[26], 1);

    PLAYERINFOTD[27] = TextDrawCreate(610.000, 273.000, "LD_BEAT:chit");
    TextDrawTextSize(PLAYERINFOTD[27], 4.000, 4.000);
    TextDrawAlignment(PLAYERINFOTD[27], 1);
    TextDrawColor(PLAYERINFOTD[27], -16776961);
    TextDrawSetShadow(PLAYERINFOTD[27], 0);
    TextDrawSetOutline(PLAYERINFOTD[27], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[27], 255);
    TextDrawFont(PLAYERINFOTD[27], 4);
    TextDrawSetProportional(PLAYERINFOTD[27], 1);

    PLAYERINFOTD[28] = TextDrawCreate(616.000, 273.000, "LD_BEAT:chit");
    TextDrawTextSize(PLAYERINFOTD[28], 4.000, 4.000);
    TextDrawAlignment(PLAYERINFOTD[28], 1);
    TextDrawColor(PLAYERINFOTD[28], -16776961);
    TextDrawSetShadow(PLAYERINFOTD[28], 0);
    TextDrawSetOutline(PLAYERINFOTD[28], 0);
    TextDrawBackgroundColor(PLAYERINFOTD[28], 255);
    TextDrawFont(PLAYERINFOTD[28], 4);
    TextDrawSetProportional(PLAYERINFOTD[28], 1);
}

CreatePStatsTD(playerid)
{
    PONLINE[playerid] = CreatePlayerTextDraw(playerid, 601.000, 151.000, "0/50");
    PlayerTextDrawLetterSize(playerid, PONLINE[playerid], 0.187, 1.299);
    PlayerTextDrawAlignment(playerid, PONLINE[playerid], 3);
    PlayerTextDrawColor(playerid, PONLINE[playerid], 2147418367);
    PlayerTextDrawSetShadow(playerid, PONLINE[playerid], 1);
    PlayerTextDrawSetOutline(playerid, PONLINE[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, PONLINE[playerid], 150);
    PlayerTextDrawFont(playerid, PONLINE[playerid], 1);
    PlayerTextDrawSetProportional(playerid, PONLINE[playerid], 1);

    PID[playerid] = CreatePlayerTextDraw(playerid, 601.000, 173.000, "#0");
    PlayerTextDrawLetterSize(playerid, PID[playerid], 0.187, 1.299);
    PlayerTextDrawAlignment(playerid, PID[playerid], 3);
    PlayerTextDrawColor(playerid, PID[playerid], -1);
    PlayerTextDrawSetShadow(playerid, PID[playerid], 1);
    PlayerTextDrawSetOutline(playerid, PID[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, PID[playerid], 150);
    PlayerTextDrawFont(playerid, PID[playerid], 1);
    PlayerTextDrawSetProportional(playerid, PID[playerid], 1);

    CASH[playerid] = CreatePlayerTextDraw(playerid, 601.000, 198.000, "$7.000.000");
    PlayerTextDrawLetterSize(playerid, CASH[playerid], 0.187, 1.299);
    PlayerTextDrawAlignment(playerid, CASH[playerid], 3);
    PlayerTextDrawColor(playerid, CASH[playerid], -1);
    PlayerTextDrawSetShadow(playerid, CASH[playerid], 1);
    PlayerTextDrawSetOutline(playerid, CASH[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, CASH[playerid], 150);
    PlayerTextDrawFont(playerid, CASH[playerid], 1);
    PlayerTextDrawSetProportional(playerid, CASH[playerid], 1);

    BANK[playerid] = CreatePlayerTextDraw(playerid, 601.000, 222.000, "$7.000.000");
    PlayerTextDrawLetterSize(playerid, BANK[playerid], 0.187, 1.299);
    PlayerTextDrawAlignment(playerid, BANK[playerid], 3);
    PlayerTextDrawColor(playerid, BANK[playerid], -1);
    PlayerTextDrawSetShadow(playerid, BANK[playerid], 1);
    PlayerTextDrawSetOutline(playerid, BANK[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, BANK[playerid], 150);
    PlayerTextDrawFont(playerid, BANK[playerid], 1);
    PlayerTextDrawSetProportional(playerid, BANK[playerid], 1);

    JOB[playerid] = CreatePlayerTextDraw(playerid, 603.000, 245.000, "Paramedis - Petani");
    PlayerTextDrawLetterSize(playerid, JOB[playerid], 0.187, 1.299);
    PlayerTextDrawAlignment(playerid, JOB[playerid], 3);
    PlayerTextDrawColor(playerid, JOB[playerid], -1);
    PlayerTextDrawSetShadow(playerid, JOB[playerid], 1);
    PlayerTextDrawSetOutline(playerid, JOB[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, JOB[playerid], 150);
    PlayerTextDrawFont(playerid, JOB[playerid], 1);
    PlayerTextDrawSetProportional(playerid, JOB[playerid], 1);

    GANGS[playerid] = CreatePlayerTextDraw(playerid, 604.000, 270.000, "Bukan Gang - No Rank");
    PlayerTextDrawLetterSize(playerid, GANGS[playerid], 0.187, 1.299);
    PlayerTextDrawAlignment(playerid, GANGS[playerid], 3);
    PlayerTextDrawColor(playerid, GANGS[playerid], -16776961);
    PlayerTextDrawSetShadow(playerid, GANGS[playerid], 1);
    PlayerTextDrawSetOutline(playerid, GANGS[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, GANGS[playerid], 150);
    PlayerTextDrawFont(playerid, GANGS[playerid], 1);
    PlayerTextDrawSetProportional(playerid, GANGS[playerid], 1);
}
ShowStatsTD(playerid)
{
    for(new x; x < 29; x++)
    {
    	TextDrawShowForPlayer(playerid, PLAYERINFOTD[x]);
	}
	PlayerTextDrawShow(playerid, PONLINE[playerid]);
	PlayerTextDrawShow(playerid, PID[playerid]);
	PlayerTextDrawShow(playerid, BANK[playerid]);
	PlayerTextDrawShow(playerid, CASH[playerid]);
    PlayerTextDrawShow(playerid, GANGS[playerid]);
    PlayerTextDrawShow(playerid, JOB[playerid]);
    TextdrawUpdateTimer[playerid] = SetTimerEx("LoopTextdrawUpdate", 1000, true, "d", playerid);
}

HideStatsTD(playerid)
{
    for(new x; x < 29; x++)
    {
    	TextDrawHideForPlayer(playerid, PLAYERINFOTD[x]);
	}
	PlayerTextDrawHide(playerid, PONLINE[playerid]);
	PlayerTextDrawHide(playerid, PID[playerid]);
	PlayerTextDrawHide(playerid, BANK[playerid]);
	PlayerTextDrawHide(playerid, CASH[playerid]);
    PlayerTextDrawHide(playerid, GANGS[playerid]);
    PlayerTextDrawHide(playerid, JOB[playerid]);
    TextdrawUpdateTimer[playerid] = SetTimerEx("LoopTextdrawUpdate", 1000, true, "d", playerid);
}

// Fungsi Update HUD
stock UpdatePlayerHUD(playerid)
{
    if (!IsPlayerConnected(playerid)) return;

    PlayerTextDrawSetString(playerid, JOB[playerid], sprintf("%s - %s", GetFactionName(playerid), GetJobName(playerid)));

    PlayerTextDrawSetString(playerid, PONLINE[playerid], sprintf("%d/50", Iter_Count(Player)));

    PlayerTextDrawSetString(playerid, PID[playerid], sprintf("ID: %i", playerid));

    PlayerTextDrawSetString(playerid, BANK[playerid], sprintf("Bank - $%s", FormatMoney(AccountData[playerid][pBankMoney])));

    PlayerTextDrawSetString(playerid, CASH[playerid], sprintf("Cash - $%s", FormatMoney(AccountData[playerid][pMoney])));

//YANG INI TARUH DI BAGIAN TIMER_PTASK_UPDATE YAA DI BAWAH SC HBE KALIAN 
        /*new fname[125], fid = AccountData[playerid][pFamily];
        if(fid != -1)
        {
            format(fname, sizeof(fname), FamilyData[fid][famName]);
        }
        else
        {
            format(fname, sizeof(fname), "Bukan Gang");
        }
        PlayerTextDrawSetString(playerid, GANGS[playerid], sprintf("%s - %s", fname, GetFamilyRankName(playerid)));*/
}

// Timer loop setiap detik
forward LoopTextdrawUpdate(playerid);
public LoopTextdrawUpdate(playerid)
{
    UpdatePlayerHUD(playerid);
    return 1;
}
