new PlayerText: GudangTD[MAX_PLAYERS][11];

CreateGudangTD(playerid)
{
    GudangTD[playerid][0] = CreatePlayerTextDraw(playerid, 358.000, 171.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, GudangTD[playerid][0], 76.000, 17.000);
    PlayerTextDrawAlignment(playerid, GudangTD[playerid][0], 1);
    PlayerTextDrawColor(playerid, GudangTD[playerid][0], -377187329);
    PlayerTextDrawSetShadow(playerid, GudangTD[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, GudangTD[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, GudangTD[playerid][0], 255);
    PlayerTextDrawFont(playerid, GudangTD[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, GudangTD[playerid][0], 1);

    GudangTD[playerid][1] = CreatePlayerTextDraw(playerid, 365.000, 173.000, "PENYEWAAN GUDANG");
    PlayerTextDrawLetterSize(playerid, GudangTD[playerid][1], 0.178, 1.298);
    PlayerTextDrawTextSize(playerid, GudangTD[playerid][1], 449.000, -179.000);
    PlayerTextDrawAlignment(playerid, GudangTD[playerid][1], 1);
    PlayerTextDrawColor(playerid, GudangTD[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, GudangTD[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, GudangTD[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, GudangTD[playerid][1], 150);
    PlayerTextDrawFont(playerid, GudangTD[playerid][1], 1);
    PlayerTextDrawSetProportional(playerid, GudangTD[playerid][1], 1);

    GudangTD[playerid][2] = CreatePlayerTextDraw(playerid, 361.000, 197.000, "Untuk Menyewa Gudang");
    PlayerTextDrawLetterSize(playerid, GudangTD[playerid][2], 0.107, 0.796);
    PlayerTextDrawTextSize(playerid, GudangTD[playerid][2], 467.000, -179.000);
    PlayerTextDrawAlignment(playerid, GudangTD[playerid][2], 1);
    PlayerTextDrawColor(playerid, GudangTD[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, GudangTD[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, GudangTD[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, GudangTD[playerid][2], 150);
    PlayerTextDrawFont(playerid, GudangTD[playerid][2], 1);
    PlayerTextDrawSetProportional(playerid, GudangTD[playerid][2], 1);

    GudangTD[playerid][3] = CreatePlayerTextDraw(playerid, 358.000, 190.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, GudangTD[playerid][3], 76.000, 19.000);
    PlayerTextDrawAlignment(playerid, GudangTD[playerid][3], 1);
    PlayerTextDrawColor(playerid, GudangTD[playerid][3], -377187329);
    PlayerTextDrawSetShadow(playerid, GudangTD[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, GudangTD[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, GudangTD[playerid][3], 255);
    PlayerTextDrawFont(playerid, GudangTD[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, GudangTD[playerid][3], 1);
    PlayerTextDrawSetSelectable(playerid, GudangTD[playerid][3], 1);

    GudangTD[playerid][4] = CreatePlayerTextDraw(playerid, 360.000, 191.000, "MULAI SEWA GUDANG");
    PlayerTextDrawLetterSize(playerid, GudangTD[playerid][4], 0.148, 0.796);
    PlayerTextDrawTextSize(playerid, GudangTD[playerid][4], 449.000, -179.000);
    PlayerTextDrawAlignment(playerid, GudangTD[playerid][4], 1);
    PlayerTextDrawColor(playerid, GudangTD[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, GudangTD[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, GudangTD[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, GudangTD[playerid][4], 150);
    PlayerTextDrawFont(playerid, GudangTD[playerid][4], 1);
    PlayerTextDrawSetProportional(playerid, GudangTD[playerid][4], 1);

    GudangTD[playerid][5] = CreatePlayerTextDraw(playerid, 358.000, 212.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, GudangTD[playerid][5], 76.000, 19.000);
    PlayerTextDrawAlignment(playerid, GudangTD[playerid][5], 1);
    PlayerTextDrawColor(playerid, GudangTD[playerid][5], -377187329);
    PlayerTextDrawSetShadow(playerid, GudangTD[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, GudangTD[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, GudangTD[playerid][5], 255);
    PlayerTextDrawFont(playerid, GudangTD[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, GudangTD[playerid][5], 1);
    PlayerTextDrawSetSelectable(playerid, GudangTD[playerid][5], 1);

    GudangTD[playerid][6] = CreatePlayerTextDraw(playerid, 360.000, 213.000, "BERHENTI SEWA");
    PlayerTextDrawLetterSize(playerid, GudangTD[playerid][6], 0.148, 0.796);
    PlayerTextDrawTextSize(playerid, GudangTD[playerid][6], 449.000, -179.000);
    PlayerTextDrawAlignment(playerid, GudangTD[playerid][6], 1);
    PlayerTextDrawColor(playerid, GudangTD[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, GudangTD[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, GudangTD[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, GudangTD[playerid][6], 150);
    PlayerTextDrawFont(playerid, GudangTD[playerid][6], 1);
    PlayerTextDrawSetProportional(playerid, GudangTD[playerid][6], 1);

    GudangTD[playerid][7] = CreatePlayerTextDraw(playerid, 360.000, 219.000, "Untuk Berhenti Menyewa Gudang");
    PlayerTextDrawLetterSize(playerid, GudangTD[playerid][7], 0.097, 0.796);
    PlayerTextDrawTextSize(playerid, GudangTD[playerid][7], 467.000, -179.000);
    PlayerTextDrawAlignment(playerid, GudangTD[playerid][7], 1);
    PlayerTextDrawColor(playerid, GudangTD[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, GudangTD[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, GudangTD[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, GudangTD[playerid][7], 150);
    PlayerTextDrawFont(playerid, GudangTD[playerid][7], 1);
    PlayerTextDrawSetProportional(playerid, GudangTD[playerid][7], 1);

    GudangTD[playerid][8] = CreatePlayerTextDraw(playerid, 358.000, 233.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, GudangTD[playerid][8], 76.000, 18.000);
    PlayerTextDrawAlignment(playerid, GudangTD[playerid][8], 1);
    PlayerTextDrawColor(playerid, GudangTD[playerid][8], -377187329);
    PlayerTextDrawSetShadow(playerid, GudangTD[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, GudangTD[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, GudangTD[playerid][8], 255);
    PlayerTextDrawFont(playerid, GudangTD[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, GudangTD[playerid][8], 1);
    PlayerTextDrawSetSelectable(playerid, GudangTD[playerid][8], 1);

    GudangTD[playerid][9] = CreatePlayerTextDraw(playerid, 386.000, 237.000, "KELUAR");
    PlayerTextDrawLetterSize(playerid, GudangTD[playerid][9], 0.167, 0.898);
    PlayerTextDrawTextSize(playerid, GudangTD[playerid][9], 449.000, -179.000);
    PlayerTextDrawAlignment(playerid, GudangTD[playerid][9], 1);
    PlayerTextDrawColor(playerid, GudangTD[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, GudangTD[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, GudangTD[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, GudangTD[playerid][9], 150);
    PlayerTextDrawFont(playerid, GudangTD[playerid][9], 1);
    PlayerTextDrawSetProportional(playerid, GudangTD[playerid][9], 1);

    GudangTD[playerid][10] = CreatePlayerTextDraw(playerid, 357.000, 171.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, GudangTD[playerid][10], 1.000, 80.000);
    PlayerTextDrawAlignment(playerid, GudangTD[playerid][10], 1);
    PlayerTextDrawColor(playerid, GudangTD[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, GudangTD[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, GudangTD[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, GudangTD[playerid][10], 255);
    PlayerTextDrawFont(playerid, GudangTD[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, GudangTD[playerid][10], 1);
    return 1;
}

stock ShowGudangTD(playerid)
{
    for(new i = 0; i < 11; i++)
    {
        if(GudangTD[playerid][i] != PlayerText:INVALID_TEXT_DRAW)
        {
            PlayerTextDrawShow(playerid, GudangTD[playerid][i]);
        }
    }
    SelectTextDraw(playerid, 0xff91a4cc);
}

stock HideGudangTD(playerid)
{
    for(new i = 0; i < 11; i++)
    {
        if(GudangTD[playerid][i] != PlayerText:INVALID_TEXT_DRAW)
        {
            PlayerTextDrawHide(playerid, GudangTD[playerid][i]);
        }
    }
    CancelSelectTextDraw(playerid);
}