new Text:TollTD[26];
CreateTollTD()
{
    TollTD[0] = TextDrawCreate(435.000, 125.000, "LD_SPAC:white");
    TextDrawTextSize(TollTD[0], 118.000, 208.000);
    TextDrawAlignment(TollTD[0], 1);
    TextDrawColor(TollTD[0], 255);
    TextDrawSetShadow(TollTD[0], 0);
    TextDrawSetOutline(TollTD[0], 0);
    TextDrawBackgroundColor(TollTD[0], 255);
    TextDrawFont(TollTD[0], 4);
    TextDrawSetProportional(TollTD[0], 1);

    TollTD[1] = TextDrawCreate(436.000, 127.000, "LD_SPAC:white");
    TextDrawTextSize(TollTD[1], 116.000, 204.000);
    TextDrawAlignment(TollTD[1], 1);
    TextDrawColor(TollTD[1], -849584897);
    TextDrawSetShadow(TollTD[1], 0);
    TextDrawSetOutline(TollTD[1], 0);
    TextDrawBackgroundColor(TollTD[1], 255);
    TextDrawFont(TollTD[1], 4);
    TextDrawSetProportional(TollTD[1], 1);

    TollTD[2] = TextDrawCreate(438.000, 129.000, "LD_SPAC:white");
    TextDrawTextSize(TollTD[2], 112.000, 200.000);
    TextDrawAlignment(TollTD[2], 1);
    TextDrawColor(TollTD[2], 255);
    TextDrawSetShadow(TollTD[2], 0);
    TextDrawSetOutline(TollTD[2], 0);
    TextDrawBackgroundColor(TollTD[2], 255);
    TextDrawFont(TollTD[2], 4);
    TextDrawSetProportional(TollTD[2], 1);

    TollTD[3] = TextDrawCreate(456.000, 135.000, "GERBANG TOLL");
    TextDrawLetterSize(TollTD[3], 0.260, 1.500);
    TextDrawAlignment(TollTD[3], 1);
    TextDrawColor(TollTD[3], -1);
    TextDrawSetShadow(TollTD[3], 1);
    TextDrawSetOutline(TollTD[3], 1);
    TextDrawBackgroundColor(TollTD[3], 0);
    TextDrawFont(TollTD[3], 2);
    TextDrawSetProportional(TollTD[3], 1);

    TollTD[4] = TextDrawCreate(471.000, 150.000, "PESONA");
    TextDrawLetterSize(TollTD[4], 0.260, 1.500);
    TextDrawAlignment(TollTD[4], 1);
    TextDrawColor(TollTD[4], -1);
    TextDrawSetShadow(TollTD[4], 1);
    TextDrawSetOutline(TollTD[4], 1);
    TextDrawBackgroundColor(TollTD[4], 0);
    TextDrawFont(TollTD[4], 2);
    TextDrawSetProportional(TollTD[4], 1);

    TollTD[5] = TextDrawCreate(436.000, 187.000, "LD_SPAC:white");
    TextDrawTextSize(TollTD[5], 116.000, 143.000);
    TextDrawAlignment(TollTD[5], 1);
    TextDrawColor(TollTD[5], -849584897);
    TextDrawSetShadow(TollTD[5], 0);
    TextDrawSetOutline(TollTD[5], 0);
    TextDrawBackgroundColor(TollTD[5], 255);
    TextDrawFont(TollTD[5], 4);
    TextDrawSetProportional(TollTD[5], 1);

    TollTD[6] = TextDrawCreate(438.000, 189.000, "LD_SPAC:white");
    TextDrawTextSize(TollTD[6], 112.000, 85.000);
    TextDrawAlignment(TollTD[6], 1);
    TextDrawColor(TollTD[6], 255);
    TextDrawSetShadow(TollTD[6], 0);
    TextDrawSetOutline(TollTD[6], 0);
    TextDrawBackgroundColor(TollTD[6], 255);
    TextDrawFont(TollTD[6], 4);
    TextDrawSetProportional(TollTD[6], 1);

    TollTD[7] = TextDrawCreate(438.000, 276.000, "LD_SPAC:white");
    TextDrawTextSize(TollTD[7], 112.000, 53.000);
    TextDrawAlignment(TollTD[7], 1);
    TextDrawColor(TollTD[7], 255);
    TextDrawSetShadow(TollTD[7], 0);
    TextDrawSetOutline(TollTD[7], 0);
    TextDrawBackgroundColor(TollTD[7], 255);
    TextDrawFont(TollTD[7], 4);
    TextDrawSetProportional(TollTD[7], 1);

    TollTD[8] = TextDrawCreate(494.000, 187.000, "LD_SPAC:white");
    TextDrawTextSize(TollTD[8], 1.000, 88.000);
    TextDrawAlignment(TollTD[8], 1);
    TextDrawColor(TollTD[8], -849584897);
    TextDrawSetShadow(TollTD[8], 0);
    TextDrawSetOutline(TollTD[8], 0);
    TextDrawBackgroundColor(TollTD[8], 255);
    TextDrawFont(TollTD[8], 4);
    TextDrawSetProportional(TollTD[8], 1);

    TollTD[9] = TextDrawCreate(446.000, 200.000, "LD_SPAC:white");
    TextDrawTextSize(TollTD[9], 41.000, 58.000);
    TextDrawAlignment(TollTD[9], 1);
    TextDrawColor(TollTD[9], -849584897);
    TextDrawSetShadow(TollTD[9], 0);
    TextDrawSetOutline(TollTD[9], 0);
    TextDrawBackgroundColor(TollTD[9], 255);
    TextDrawFont(TollTD[9], 4);
    TextDrawSetProportional(TollTD[9], 1);

    TollTD[10] = TextDrawCreate(451.000, 203.000, "Tanda Terima");
    TextDrawLetterSize(TollTD[10], 0.129, 1.099);
    TextDrawAlignment(TollTD[10], 1);
    TextDrawColor(TollTD[10], -1);
    TextDrawSetShadow(TollTD[10], 1);
    TextDrawSetOutline(TollTD[10], 1);
    TextDrawBackgroundColor(TollTD[10], 0);
    TextDrawFont(TollTD[10], 1);
    TextDrawSetProportional(TollTD[10], 1);

    TollTD[11] = TextDrawCreate(459.000, 218.000, "LD_BEAT:down");
    TextDrawTextSize(TollTD[11], 16.000, 10.000);
    TextDrawAlignment(TollTD[11], 1);
    TextDrawColor(TollTD[11], -1);
    TextDrawSetShadow(TollTD[11], 0);
    TextDrawSetOutline(TollTD[11], 0);
    TextDrawBackgroundColor(TollTD[11], 255);
    TextDrawFont(TollTD[11], 4);
    TextDrawSetProportional(TollTD[11], 1);

    TollTD[12] = TextDrawCreate(452.000, 232.000, "LD_SPAC:white");
    TextDrawTextSize(TollTD[12], 28.000, 4.000);
    TextDrawAlignment(TollTD[12], 1);
    TextDrawColor(TollTD[12], 1768516095);
    TextDrawSetShadow(TollTD[12], 0);
    TextDrawSetOutline(TollTD[12], 0);
    TextDrawBackgroundColor(TollTD[12], 255);
    TextDrawFont(TollTD[12], 4);
    TextDrawSetProportional(TollTD[12], 1);

    TollTD[13] = TextDrawCreate(454.000, 233.000, "LD_SPAC:white");
    TextDrawTextSize(TollTD[13], 24.000, 2.000);
    TextDrawAlignment(TollTD[13], 1);
    TextDrawColor(TollTD[13], 255);
    TextDrawSetShadow(TollTD[13], 0);
    TextDrawSetOutline(TollTD[13], 0);
    TextDrawBackgroundColor(TollTD[13], 255);
    TextDrawFont(TollTD[13], 4);
    TextDrawSetProportional(TollTD[13], 1);

    TollTD[14] = TextDrawCreate(454.000, 235.000, "LD_SPAC:white");
    TextDrawTextSize(TollTD[14], 24.000, 18.000);
    TextDrawAlignment(TollTD[14], 1);
    TextDrawColor(TollTD[14], -1);
    TextDrawSetShadow(TollTD[14], 0);
    TextDrawSetOutline(TollTD[14], 0);
    TextDrawBackgroundColor(TollTD[14], 255);
    TextDrawFont(TollTD[14], 4);
    TextDrawSetProportional(TollTD[14], 1);

    TollTD[15] = TextDrawCreate(457.000, 241.000, "LD_SPAC:white");
    TextDrawTextSize(TollTD[15], 18.000, 2.000);
    TextDrawAlignment(TollTD[15], 1);
    TextDrawColor(TollTD[15], -1448498689);
    TextDrawSetShadow(TollTD[15], 0);
    TextDrawSetOutline(TollTD[15], 0);
    TextDrawBackgroundColor(TollTD[15], 255);
    TextDrawFont(TollTD[15], 4);
    TextDrawSetProportional(TollTD[15], 1);

    TollTD[16] = TextDrawCreate(457.000, 244.000, "LD_SPAC:white");
    TextDrawTextSize(TollTD[16], 18.000, 2.000);
    TextDrawAlignment(TollTD[16], 1);
    TextDrawColor(TollTD[16], -1448498689);
    TextDrawSetShadow(TollTD[16], 0);
    TextDrawSetOutline(TollTD[16], 0);
    TextDrawBackgroundColor(TollTD[16], 255);
    TextDrawFont(TollTD[16], 4);
    TextDrawSetProportional(TollTD[16], 1);

    TollTD[17] = TextDrawCreate(445.000, 261.000, "Petugas Bebas Bayar");
    TextDrawLetterSize(TollTD[17], 0.119, 0.899);
    TextDrawAlignment(TollTD[17], 1);
    TextDrawColor(TollTD[17], -1);
    TextDrawSetShadow(TollTD[17], 1);
    TextDrawSetOutline(TollTD[17], 1);
    TextDrawBackgroundColor(TollTD[17], 0);
    TextDrawFont(TollTD[17], 1);
    TextDrawSetProportional(TollTD[17], 1);

    TollTD[18] = TextDrawCreate(503.000, 200.000, "LD_SPAC:white");
    TextDrawTextSize(TollTD[18], 41.000, 24.000);
    TextDrawAlignment(TollTD[18], 1);
    TextDrawColor(TollTD[18], -849584897);
    TextDrawSetShadow(TollTD[18], 0);
    TextDrawSetOutline(TollTD[18], 0);
    TextDrawBackgroundColor(TollTD[18], 255);
    TextDrawFont(TollTD[18], 4);
    TextDrawSetProportional(TollTD[18], 1);

    TollTD[19] = TextDrawCreate(516.000, 201.000, "Biaya");
    TextDrawLetterSize(TollTD[19], 0.129, 1.099);
    TextDrawAlignment(TollTD[19], 1);
    TextDrawColor(TollTD[19], -1);
    TextDrawSetShadow(TollTD[19], 1);
    TextDrawSetOutline(TollTD[19], 1);
    TextDrawBackgroundColor(TollTD[19], 0);
    TextDrawFont(TollTD[19], 1);
    TextDrawSetProportional(TollTD[19], 1);

    TollTD[20] = TextDrawCreate(516.000, 211.000, "$100");
    TextDrawLetterSize(TollTD[20], 0.129, 1.099);
    TextDrawAlignment(TollTD[20], 1);
    TextDrawColor(TollTD[20], 6553855);
    TextDrawSetShadow(TollTD[20], 1);
    TextDrawSetOutline(TollTD[20], 1);
    TextDrawBackgroundColor(TollTD[20], 0);
    TextDrawFont(TollTD[20], 1);
    TextDrawSetProportional(TollTD[20], 1);

    TollTD[21] = TextDrawCreate(505.000, 227.000, "Klick Di Bawah Ini");
    TextDrawLetterSize(TollTD[21], 0.119, 0.899);
    TextDrawAlignment(TollTD[21], 1);
    TextDrawColor(TollTD[21], -1);
    TextDrawSetShadow(TollTD[21], 1);
    TextDrawSetOutline(TollTD[21], 1);
    TextDrawBackgroundColor(TollTD[21], 0);
    TextDrawFont(TollTD[21], 1);
    TextDrawSetProportional(TollTD[21], 1);

    TollTD[22] = TextDrawCreate(502.000, 235.000, "Untuk Membayar Toll");
    TextDrawLetterSize(TollTD[22], 0.119, 0.899);
    TextDrawAlignment(TollTD[22], 1);
    TextDrawColor(TollTD[22], -1);
    TextDrawSetShadow(TollTD[22], 1);
    TextDrawSetOutline(TollTD[22], 1);
    TextDrawBackgroundColor(TollTD[22], 0);
    TextDrawFont(TollTD[22], 1);
    TextDrawSetProportional(TollTD[22], 1);

    TollTD[23] = TextDrawCreate(509.000, 244.000, "LD_BEAT:chit");
    TextDrawTextSize(TollTD[23], 28.000, 29.000);
    TextDrawAlignment(TollTD[23], 1);
    TextDrawColor(TollTD[23], -849584897);
    TextDrawSetShadow(TollTD[23], 0);
    TextDrawSetOutline(TollTD[23], 0);
    TextDrawBackgroundColor(TollTD[23], 255);
    TextDrawFont(TollTD[23], 4);
    TextDrawSetProportional(TollTD[23], 1);

    TollTD[24] = TextDrawCreate(510.000, 245.000, "LD_BEAT:chit");
    TextDrawTextSize(TollTD[24], 26.000, 27.000);
    TextDrawAlignment(TollTD[24], 1);
    TextDrawColor(TollTD[24], 255);
    TextDrawSetShadow(TollTD[24], 0);
    TextDrawSetOutline(TollTD[24], 0);
    TextDrawBackgroundColor(TollTD[24], 255);
    TextDrawFont(TollTD[24], 4);
    TextDrawSetProportional(TollTD[24], 1);
    TextDrawSetSelectable(TollTD[24], 1);

    TollTD[25] = TextDrawCreate(447.000, 294.000, "Silahkan Bayar Toll Terlebih Dahulu!!");
    TextDrawLetterSize(TollTD[25], 0.150, 1.500);
    TextDrawAlignment(TollTD[25], 1);
    TextDrawColor(TollTD[25], -1);
    TextDrawSetShadow(TollTD[25], 1);
    TextDrawSetOutline(TollTD[25], 1);
    TextDrawBackgroundColor(TollTD[25], 0);
    TextDrawFont(TollTD[25], 1);
    TextDrawSetProportional(TollTD[25], 1);
}

ShowTollTD(playerid)
{
    HideHBETD(playerid);
    HideStatsTD(playerid);
    HideSpeedoTD(playerid);
    //HideRadioVoiceInfoTD(playerid);
    HideServerNameTD(playerid);
    for(new x; x < 26; x++)
    {
        TextDrawShowForPlayer(playerid, TollTD[x]);
    }
}

HideTollTD(playerid)
{
    for(new x; x < 26; x++)
    {
        TextDrawHideForPlayer(playerid, TollTD[x]);
    }
    ShowHBETD(playerid);
    //ShowStatsTD(playerid);
    ShowSpeedoTD(playerid);
    ShowServerNameTD(playerid);
    CancelSelectTextDraw(playerid); 
}