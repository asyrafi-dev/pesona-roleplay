new Text: TwitterGL[18],
    PlayerText: TwitterPL[MAX_PLAYERS][7];

CreateTwitterTD()
{
    TwitterGL[0] = TextDrawCreate(493.000, 358.000, "LD_SPAC:white");
    TextDrawTextSize(TwitterGL[0], 97.000, 90.000);
    TextDrawAlignment(TwitterGL[0], 1);
    TextDrawColor(TwitterGL[0], 255);
    TextDrawSetShadow(TwitterGL[0], 0);
    TextDrawSetOutline(TwitterGL[0], 0);
    TextDrawBackgroundColor(TwitterGL[0], 255);
    TextDrawFont(TwitterGL[0], 4);
    TextDrawSetProportional(TwitterGL[0], 1);

    TwitterGL[1] = TextDrawCreate(480.000, 345.000, "LD_BEAT:chit");
    TextDrawTextSize(TwitterGL[1], 27.000, 28.000);
    TextDrawAlignment(TwitterGL[1], 1);
    TextDrawColor(TwitterGL[1], 255);
    TextDrawSetShadow(TwitterGL[1], 0);
    TextDrawSetOutline(TwitterGL[1], 0);
    TextDrawBackgroundColor(TwitterGL[1], 255);
    TextDrawFont(TwitterGL[1], 4);
    TextDrawSetProportional(TwitterGL[1], 1);

    TwitterGL[2] = TextDrawCreate(577.000, 345.000, "LD_BEAT:chit");
    TextDrawTextSize(TwitterGL[2], 27.000, 28.000);
    TextDrawAlignment(TwitterGL[2], 1);
    TextDrawColor(TwitterGL[2], 255);
    TextDrawSetShadow(TwitterGL[2], 0);
    TextDrawSetOutline(TwitterGL[2], 0);
    TextDrawBackgroundColor(TwitterGL[2], 255);
    TextDrawFont(TwitterGL[2], 4);
    TextDrawSetProportional(TwitterGL[2], 1);

    TwitterGL[3] = TextDrawCreate(493.000, 349.000, "LD_SPAC:white");
    TextDrawTextSize(TwitterGL[3], 97.000, 90.000);
    TextDrawAlignment(TwitterGL[3], 1);
    TextDrawColor(TwitterGL[3], 255);
    TextDrawSetShadow(TwitterGL[3], 0);
    TextDrawSetOutline(TwitterGL[3], 0);
    TextDrawBackgroundColor(TwitterGL[3], 255);
    TextDrawFont(TwitterGL[3], 4);
    TextDrawSetProportional(TwitterGL[3], 1);

    TwitterGL[4] = TextDrawCreate(484.000, 360.000, "LD_SPAC:white");
    TextDrawTextSize(TwitterGL[4], 116.000, 94.000);
    TextDrawAlignment(TwitterGL[4], 1);
    TextDrawColor(TwitterGL[4], 255);
    TextDrawSetShadow(TwitterGL[4], 0);
    TextDrawSetOutline(TwitterGL[4], 0);
    TextDrawBackgroundColor(TwitterGL[4], 255);
    TextDrawFont(TwitterGL[4], 4);
    TextDrawSetProportional(TwitterGL[4], 1);

    TwitterGL[5] = TextDrawCreate(493.000, 358.000, "LD_SPAC:white");
    TextDrawTextSize(TwitterGL[5], 97.000, 90.000);
    TextDrawAlignment(TwitterGL[5], 1);
    TextDrawColor(TwitterGL[5], -849584897);
    TextDrawSetShadow(TwitterGL[5], 0);
    TextDrawSetOutline(TwitterGL[5], 0);
    TextDrawBackgroundColor(TwitterGL[5], 255);
    TextDrawFont(TwitterGL[5], 4);
    TextDrawSetProportional(TwitterGL[5], 1);

    TwitterGL[6] = TextDrawCreate(481.000, 346.000, "LD_BEAT:chit");
    TextDrawTextSize(TwitterGL[6], 27.000, 28.000);
    TextDrawAlignment(TwitterGL[6], 1);
    TextDrawColor(TwitterGL[6], -849584897);
    TextDrawSetShadow(TwitterGL[6], 0);
    TextDrawSetOutline(TwitterGL[6], 0);
    TextDrawBackgroundColor(TwitterGL[6], 255);
    TextDrawFont(TwitterGL[6], 4);
    TextDrawSetProportional(TwitterGL[6], 1);

    TwitterGL[7] = TextDrawCreate(576.000, 346.000, "LD_BEAT:chit");
    TextDrawTextSize(TwitterGL[7], 27.000, 28.000);
    TextDrawAlignment(TwitterGL[7], 1);
    TextDrawColor(TwitterGL[7], -849584897);
    TextDrawSetShadow(TwitterGL[7], 0);
    TextDrawSetOutline(TwitterGL[7], 0);
    TextDrawBackgroundColor(TwitterGL[7], 255);
    TextDrawFont(TwitterGL[7], 4);
    TextDrawSetProportional(TwitterGL[7], 1);

    TwitterGL[8] = TextDrawCreate(493.000, 351.000, "LD_SPAC:white");
    TextDrawTextSize(TwitterGL[8], 97.000, 90.000);
    TextDrawAlignment(TwitterGL[8], 1);
    TextDrawColor(TwitterGL[8], -849584897);
    TextDrawSetShadow(TwitterGL[8], 0);
    TextDrawSetOutline(TwitterGL[8], 0);
    TextDrawBackgroundColor(TwitterGL[8], 255);
    TextDrawFont(TwitterGL[8], 4);
    TextDrawSetProportional(TwitterGL[8], 1);

    TwitterGL[9] = TextDrawCreate(485.000, 358.000, "LD_SPAC:white");
    TextDrawTextSize(TwitterGL[9], 114.000, 95.000);
    TextDrawAlignment(TwitterGL[9], 1);
    TextDrawColor(TwitterGL[9], -849584897);
    TextDrawSetShadow(TwitterGL[9], 0);
    TextDrawSetOutline(TwitterGL[9], 0);
    TextDrawBackgroundColor(TwitterGL[9], 255);
    TextDrawFont(TwitterGL[9], 4);
    TextDrawSetProportional(TwitterGL[9], 1);

    TwitterGL[10] = TextDrawCreate(533.000, 353.000, "LD_BEAT:chit");
    TextDrawTextSize(TwitterGL[10], 19.000, 18.000);
    TextDrawAlignment(TwitterGL[10], 1);
    TextDrawColor(TwitterGL[10], 255);
    TextDrawSetShadow(TwitterGL[10], 0);
    TextDrawSetOutline(TwitterGL[10], 0);
    TextDrawBackgroundColor(TwitterGL[10], 255);
    TextDrawFont(TwitterGL[10], 4);
    TextDrawSetProportional(TwitterGL[10], 1);

    TwitterGL[11] = TextDrawCreate(576.000, 357.000, "LD_SPAC:white");
    TextDrawTextSize(TwitterGL[11], 15.000, 5.000);
    TextDrawAlignment(TwitterGL[11], 1);
    TextDrawColor(TwitterGL[11], -1);
    TextDrawSetShadow(TwitterGL[11], 0);
    TextDrawSetOutline(TwitterGL[11], 0);
    TextDrawBackgroundColor(TwitterGL[11], 255);
    TextDrawFont(TwitterGL[11], 4);
    TextDrawSetProportional(TwitterGL[11], 1);

    TwitterGL[12] = TextDrawCreate(576.000, 357.000, "LD_SPAC:white");
    TextDrawTextSize(TwitterGL[12], 11.000, 5.000);
    TextDrawAlignment(TwitterGL[12], 1);
    TextDrawColor(TwitterGL[12], 6553855);
    TextDrawSetShadow(TwitterGL[12], 0);
    TextDrawSetOutline(TwitterGL[12], 0);
    TextDrawBackgroundColor(TwitterGL[12], 255);
    TextDrawFont(TwitterGL[12], 4);
    TextDrawSetProportional(TwitterGL[12], 1);

    TwitterGL[13] = TextDrawCreate(566.000, 357.000, "LD_SPAC:white");
    TextDrawTextSize(TwitterGL[13], 2.000, 8.000);
    TextDrawAlignment(TwitterGL[13], 1);
    TextDrawColor(TwitterGL[13], -1);
    TextDrawSetShadow(TwitterGL[13], 0);
    TextDrawSetOutline(TwitterGL[13], 0);
    TextDrawBackgroundColor(TwitterGL[13], 255);
    TextDrawFont(TwitterGL[13], 4);
    TextDrawSetProportional(TwitterGL[13], 1);

    TwitterGL[14] = TextDrawCreate(563.000, 358.000, "LD_SPAC:white");
    TextDrawTextSize(TwitterGL[14], 2.000, 7.000);
    TextDrawAlignment(TwitterGL[14], 1);
    TextDrawColor(TwitterGL[14], -1);
    TextDrawSetShadow(TwitterGL[14], 0);
    TextDrawSetOutline(TwitterGL[14], 0);
    TextDrawBackgroundColor(TwitterGL[14], 255);
    TextDrawFont(TwitterGL[14], 4);
    TextDrawSetProportional(TwitterGL[14], 1);

    TwitterGL[15] = TextDrawCreate(560.000, 359.000, "LD_SPAC:white");
    TextDrawTextSize(TwitterGL[15], 2.000, 6.000);
    TextDrawAlignment(TwitterGL[15], 1);
    TextDrawColor(TwitterGL[15], -1);
    TextDrawSetShadow(TwitterGL[15], 0);
    TextDrawSetOutline(TwitterGL[15], 0);
    TextDrawBackgroundColor(TwitterGL[15], 255);
    TextDrawFont(TwitterGL[15], 4);
    TextDrawSetProportional(TwitterGL[15], 1);

    TwitterGL[16] = TextDrawCreate(485.000, 382.000, "LD_SPAC:white");
    TextDrawTextSize(TwitterGL[16], 114.000, 90.000);
    TextDrawAlignment(TwitterGL[16], 1);
    TextDrawColor(TwitterGL[16], 160);
    TextDrawSetShadow(TwitterGL[16], 0);
    TextDrawSetOutline(TwitterGL[16], 0);
    TextDrawBackgroundColor(TwitterGL[16], 255);
    TextDrawFont(TwitterGL[16], 4);
    TextDrawSetProportional(TwitterGL[16], 1);

    TwitterGL[17] = TextDrawCreate(493.000, 385.000, "Tweet");
    TextDrawLetterSize(TwitterGL[17], 0.140, 1.098);
    TextDrawAlignment(TwitterGL[17], 1);
    TextDrawColor(TwitterGL[17], 1182971135);
    TextDrawSetShadow(TwitterGL[17], 1);
    TextDrawSetOutline(TwitterGL[17], 1);
    TextDrawBackgroundColor(TwitterGL[17], 0);
    TextDrawFont(TwitterGL[17], 1);
    TextDrawSetProportional(TwitterGL[17], 1);
}

CreateTW(playerid)
{
    TwitterPL[playerid][0] = CreatePlayerTextDraw(playerid, 495.000, 357.000, "12:00");
    PlayerTextDrawLetterSize(playerid, TwitterPL[playerid][0], 0.129, 0.799);
    PlayerTextDrawAlignment(playerid, TwitterPL[playerid][0], 1);
    PlayerTextDrawColor(playerid, TwitterPL[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, TwitterPL[playerid][0], 1);
    PlayerTextDrawSetOutline(playerid, TwitterPL[playerid][0], 1);
    PlayerTextDrawBackgroundColor(playerid, TwitterPL[playerid][0], 0);
    PlayerTextDrawFont(playerid, TwitterPL[playerid][0], 1);
    PlayerTextDrawSetProportional(playerid, TwitterPL[playerid][0], 1);

    TwitterPL[playerid][1] = CreatePlayerTextDraw(playerid, 580.000, 356.000, "96");
    PlayerTextDrawLetterSize(playerid, TwitterPL[playerid][1], 0.109, 0.599);
    PlayerTextDrawAlignment(playerid, TwitterPL[playerid][1], 1);
    PlayerTextDrawColor(playerid, TwitterPL[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, TwitterPL[playerid][1], 1);
    PlayerTextDrawSetOutline(playerid, TwitterPL[playerid][1], 1);
    PlayerTextDrawBackgroundColor(playerid, TwitterPL[playerid][1], 0);
    PlayerTextDrawFont(playerid, TwitterPL[playerid][1], 1);
    PlayerTextDrawSetProportional(playerid, TwitterPL[playerid][1], 1);

    TwitterPL[playerid][2] = CreatePlayerTextDraw(playerid, 569.000, 356.000, "5G");
    PlayerTextDrawLetterSize(playerid, TwitterPL[playerid][2], 0.109, 0.599);
    PlayerTextDrawAlignment(playerid, TwitterPL[playerid][2], 1);
    PlayerTextDrawColor(playerid, TwitterPL[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, TwitterPL[playerid][2], 1);
    PlayerTextDrawSetOutline(playerid, TwitterPL[playerid][2], 1);
    PlayerTextDrawBackgroundColor(playerid, TwitterPL[playerid][2], 0);
    PlayerTextDrawFont(playerid, TwitterPL[playerid][2], 1);
    PlayerTextDrawSetProportional(playerid, TwitterPL[playerid][2], 1);

    TwitterPL[playerid][3] = CreatePlayerTextDraw(playerid, 511.000, 385.000, "Nugrhh");
    PlayerTextDrawLetterSize(playerid, TwitterPL[playerid][3], 0.140, 1.099);
    PlayerTextDrawAlignment(playerid, TwitterPL[playerid][3], 1);
    PlayerTextDrawColor(playerid, TwitterPL[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, TwitterPL[playerid][3], 1);
    PlayerTextDrawSetOutline(playerid, TwitterPL[playerid][3], 1);
    PlayerTextDrawBackgroundColor(playerid, TwitterPL[playerid][3], 0);
    PlayerTextDrawFont(playerid, TwitterPL[playerid][3], 1);
    PlayerTextDrawSetProportional(playerid, TwitterPL[playerid][3], 1);

    TwitterPL[playerid][4] = CreatePlayerTextDraw(playerid, 493.000, 397.000, "Adakah lc 50k seminggu?");
    PlayerTextDrawLetterSize(playerid, TwitterPL[playerid][4], 0.140, 1.099);
    PlayerTextDrawAlignment(playerid, TwitterPL[playerid][4], 1);
    PlayerTextDrawColor(playerid, TwitterPL[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, TwitterPL[playerid][4], 1);
    PlayerTextDrawSetOutline(playerid, TwitterPL[playerid][4], 1);
    PlayerTextDrawBackgroundColor(playerid, TwitterPL[playerid][4], 0);
    PlayerTextDrawFont(playerid, TwitterPL[playerid][4], 1);
    PlayerTextDrawSetProportional(playerid, TwitterPL[playerid][4], 1);

    TwitterPL[playerid][5] = CreatePlayerTextDraw(playerid, 543.000, 435.000, "12/12/2002");
    PlayerTextDrawLetterSize(playerid, TwitterPL[playerid][5], 0.109, 0.999);
    PlayerTextDrawAlignment(playerid, TwitterPL[playerid][5], 1);
    PlayerTextDrawColor(playerid, TwitterPL[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, TwitterPL[playerid][5], 1);
    PlayerTextDrawSetOutline(playerid, TwitterPL[playerid][5], 1);
    PlayerTextDrawBackgroundColor(playerid, TwitterPL[playerid][5], 0);
    PlayerTextDrawFont(playerid, TwitterPL[playerid][5], 1);
    PlayerTextDrawSetProportional(playerid, TwitterPL[playerid][5], 1);

    TwitterPL[playerid][6] = CreatePlayerTextDraw(playerid, 571.000, 435.000, "12:00:00");
    PlayerTextDrawLetterSize(playerid, TwitterPL[playerid][6], 0.109, 0.999);
    PlayerTextDrawAlignment(playerid, TwitterPL[playerid][6], 1);
    PlayerTextDrawColor(playerid, TwitterPL[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, TwitterPL[playerid][6], 1);
    PlayerTextDrawSetOutline(playerid, TwitterPL[playerid][6], 1);
    PlayerTextDrawBackgroundColor(playerid, TwitterPL[playerid][6], 0);
    PlayerTextDrawFont(playerid, TwitterPL[playerid][6], 1);
    PlayerTextDrawSetProportional(playerid, TwitterPL[playerid][6], 1);
}

ShowTWITTERTD(playerid)
{
    for(new x; x < 18; x++)
	{
        TextDrawShowForPlayer(playerid, TwitterGL[x]);
    }
    for(new x; x < 7; x++)
    {
        PlayerTextDrawShow(playerid, TwitterPL[playerid][x]);
    }
	//ShowStatsTD(playerid);
	ShowRadioVoiceInfoTD(playerid);
}

HideTWITTERTD(playerid)
{
    for(new x; x < 18; x++)
	{
        TextDrawHideForPlayer(playerid, TwitterGL[x]);
    }
    for(new x; x < 7; x++)
    {
        PlayerTextDrawHide(playerid, TwitterPL[playerid][x]);
    }
	//HideStatsTD(playerid);
	HideRadioVoiceInfoTD(playerid);
}

forward HideTwitterGlobal(playerid);
public HideTwitterGlobal(playerid)
{
    foreach(new i : Player)
    {
        HideTWITTERTD(i);
    }
    return 1;
}

stock getdate_string(dest[])
{
    new y, m, d;
    getdate(y, m, d);
    format(dest, 32, "%02d/%02d/%04d", d, m, y);
    return 1;
}

stock gettime_string(dest[])
{
    new h, mi, s;
    gettime(h, mi, s);
    format(dest, 32, "%02d:%02d:%02d", h, mi, s);
    return 1;
}

stock ShowTwitterNotif(playerid)
{
    new dates[32], times[32];

    getdate_string(dates);
    gettime_string(times);

    foreach(new i : Player)
    {
        PlayerTextDrawSetString(i, TwitterPL[i][3],
        TwitterData[playerid][Username]);

        PlayerTextDrawSetString(i, TwitterPL[i][4],
        TwitterData[playerid][Tweet]);

        PlayerTextDrawSetString(i, TwitterPL[i][5],
        dates);

        PlayerTextDrawSetString(i, TwitterPL[i][6],
        times);

        PlayerTextDrawSetString(i, TwitterPL[i][0],
        times);


        ShowTWITTERTD(i);
    }

    SetTimer("HideTwitterGlobal", 15000, false);
}