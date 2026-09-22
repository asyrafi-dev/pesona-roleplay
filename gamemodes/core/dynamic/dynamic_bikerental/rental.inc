new
   Text:ui_rental[16],
   PlayerText:TransaksiFaggio[MAX_PLAYERS][15],
   PlayerText:TransaksiWayfarer[MAX_PLAYERS][15];

CreateRentalTD()
{
    ui_rental[0] = TextDrawCreate(211.000, 150.000, "LD_SPAC:white");
    TextDrawTextSize(ui_rental[0], 228.000, 164.000);
    TextDrawAlignment(ui_rental[0], 1);
    TextDrawColor(ui_rental[0], -1);
    TextDrawSetShadow(ui_rental[0], 0);
    TextDrawSetOutline(ui_rental[0], 0);
    TextDrawBackgroundColor(ui_rental[0], 255);
    TextDrawFont(ui_rental[0], 4);
    TextDrawSetProportional(ui_rental[0], 1);

    ui_rental[1] = TextDrawCreate(205.000, 135.000, "_");
    TextDrawTextSize(ui_rental[1], 90.000, 90.000);
    TextDrawAlignment(ui_rental[1], 1);
    TextDrawColor(ui_rental[1], -1);
    TextDrawSetShadow(ui_rental[1], 0);
    TextDrawSetOutline(ui_rental[1], 0);
    TextDrawBackgroundColor(ui_rental[1], 0);
    TextDrawFont(ui_rental[1], 5);
    TextDrawSetProportional(ui_rental[1], 0);
    TextDrawSetPreviewModel(ui_rental[1], 462);
    TextDrawSetPreviewRot(ui_rental[1], -2.000, 2.000, -41.000, 1.100);
    TextDrawSetPreviewVehCol(ui_rental[1], 0, 0);

    ui_rental[2] = TextDrawCreate(225.000, 200.000, "Faggio");
    TextDrawLetterSize(ui_rental[2], 0.200, 1.199);
    TextDrawAlignment(ui_rental[2], 1);
    TextDrawColor(ui_rental[2], 255);
    TextDrawSetShadow(ui_rental[2], 0);
    TextDrawSetOutline(ui_rental[2], 0);
    TextDrawBackgroundColor(ui_rental[2], 150);
    TextDrawFont(ui_rental[2], 1);
    TextDrawSetProportional(ui_rental[2], 1);

    ui_rental[3] = TextDrawCreate(226.000, 211.000, "1.200");
    TextDrawLetterSize(ui_rental[3], 0.139, 0.898);
    TextDrawAlignment(ui_rental[3], 1);
    TextDrawColor(ui_rental[3], 255);
    TextDrawSetShadow(ui_rental[3], 0);
    TextDrawSetOutline(ui_rental[3], 0);
    TextDrawBackgroundColor(ui_rental[3], 150);
    TextDrawFont(ui_rental[3], 1);
    TextDrawSetProportional(ui_rental[3], 1);

    ui_rental[4] = TextDrawCreate(277.000, 139.000, "_");
    TextDrawTextSize(ui_rental[4], 90.000, 90.000);
    TextDrawAlignment(ui_rental[4], 1);
    TextDrawColor(ui_rental[4], -1);
    TextDrawSetShadow(ui_rental[4], 0);
    TextDrawSetOutline(ui_rental[4], 0);
    TextDrawBackgroundColor(ui_rental[4], 0);
    TextDrawFont(ui_rental[4], 5);
    TextDrawSetProportional(ui_rental[4], 0);
    TextDrawSetPreviewModel(ui_rental[4], 586);
    TextDrawSetPreviewRot(ui_rental[4], 0.000, 0.000, -37.000, 1.200);
    TextDrawSetPreviewVehCol(ui_rental[4], 0, 0);

    ui_rental[5] = TextDrawCreate(297.000, 200.000, "Wayfarer");
    TextDrawLetterSize(ui_rental[5], 0.200, 1.199);
    TextDrawAlignment(ui_rental[5], 1);
    TextDrawColor(ui_rental[5], 255);
    TextDrawSetShadow(ui_rental[5], 0);
    TextDrawSetOutline(ui_rental[5], 0);
    TextDrawBackgroundColor(ui_rental[5], 150);
    TextDrawFont(ui_rental[5], 1);
    TextDrawSetProportional(ui_rental[5], 1);

    ui_rental[6] = TextDrawCreate(297.000, 211.000, "1.200");
    TextDrawLetterSize(ui_rental[6], 0.139, 0.898);
    TextDrawAlignment(ui_rental[6], 1);
    TextDrawColor(ui_rental[6], 255);
    TextDrawSetShadow(ui_rental[6], 0);
    TextDrawSetOutline(ui_rental[6], 0);
    TextDrawBackgroundColor(ui_rental[6], 150);
    TextDrawFont(ui_rental[6], 1);
    TextDrawSetProportional(ui_rental[6], 1);

    ui_rental[7] = TextDrawCreate(240.000, 211.000, "jam");
    TextDrawLetterSize(ui_rental[7], 0.139, 0.898);
    TextDrawAlignment(ui_rental[7], 1);
    TextDrawColor(ui_rental[7], 255);
    TextDrawSetShadow(ui_rental[7], 0);
    TextDrawSetOutline(ui_rental[7], 0);
    TextDrawBackgroundColor(ui_rental[7], 150);
    TextDrawFont(ui_rental[7], 1);
    TextDrawSetProportional(ui_rental[7], 1);

    ui_rental[8] = TextDrawCreate(262.000, 206.000, "LD_SPAC:white");
    TextDrawTextSize(ui_rental[8], 22.000, 12.000);
    TextDrawAlignment(ui_rental[8], 1);
    TextDrawColor(ui_rental[8], -377187329);
    TextDrawSetShadow(ui_rental[8], 0);
    TextDrawSetOutline(ui_rental[8], 0);
    TextDrawBackgroundColor(ui_rental[8], 255);
    TextDrawFont(ui_rental[8], 4);
    TextDrawSetProportional(ui_rental[8], 1);
    TextDrawSetSelectable(ui_rental[8], 1);

    ui_rental[9] = TextDrawCreate(311.000, 211.000, "jam");
    TextDrawLetterSize(ui_rental[9], 0.139, 0.898);
    TextDrawAlignment(ui_rental[9], 1);
    TextDrawColor(ui_rental[9], 255);
    TextDrawSetShadow(ui_rental[9], 0);
    TextDrawSetOutline(ui_rental[9], 0);
    TextDrawBackgroundColor(ui_rental[9], 150);
    TextDrawFont(ui_rental[9], 1);
    TextDrawSetProportional(ui_rental[9], 1);

    ui_rental[10] = TextDrawCreate(339.000, 206.000, "LD_SPAC:white");
    TextDrawTextSize(ui_rental[10], 22.000, 12.000);
    TextDrawAlignment(ui_rental[10], 1);
    TextDrawColor(ui_rental[10], -377187329);
    TextDrawSetShadow(ui_rental[10], 0);
    TextDrawSetOutline(ui_rental[10], 0);
    TextDrawBackgroundColor(ui_rental[10], 255);
    TextDrawFont(ui_rental[10], 4);
    TextDrawSetProportional(ui_rental[10], 1);
    TextDrawSetSelectable(ui_rental[10], 1);

    ui_rental[11] = TextDrawCreate(211.000, 131.000, "LD_SPAC:white");
    TextDrawTextSize(ui_rental[11], 228.000, 19.000);
    TextDrawAlignment(ui_rental[11], 1);
    TextDrawColor(ui_rental[11], -377187329);
    TextDrawSetShadow(ui_rental[11], 0);
    TextDrawSetOutline(ui_rental[11], 0);
    TextDrawBackgroundColor(ui_rental[11], 255);
    TextDrawFont(ui_rental[11], 4);
    TextDrawSetProportional(ui_rental[11], 1);

    ui_rental[12] = TextDrawCreate(266.000, 206.000, "Rent");
    TextDrawLetterSize(ui_rental[12], 0.200, 1.199);
    TextDrawAlignment(ui_rental[12], 1);
    TextDrawColor(ui_rental[12], 255);
    TextDrawSetShadow(ui_rental[12], 0);
    TextDrawSetOutline(ui_rental[12], 0);
    TextDrawBackgroundColor(ui_rental[12], 150);
    TextDrawFont(ui_rental[12], 1);
    TextDrawSetProportional(ui_rental[12], 1);

    ui_rental[13] = TextDrawCreate(342.000, 206.000, "Rent");
    TextDrawLetterSize(ui_rental[13], 0.200, 1.199);
    TextDrawAlignment(ui_rental[13], 1);
    TextDrawColor(ui_rental[13], 255);
    TextDrawSetShadow(ui_rental[13], 0);
    TextDrawSetOutline(ui_rental[13], 0);
    TextDrawBackgroundColor(ui_rental[13], 150);
    TextDrawFont(ui_rental[13], 1);
    TextDrawSetProportional(ui_rental[13], 1);

    ui_rental[14] = TextDrawCreate(219.000, 134.000, "Rental Kendaraan");
    TextDrawLetterSize(ui_rental[14], 0.200, 1.199);
    TextDrawAlignment(ui_rental[14], 1);
    TextDrawColor(ui_rental[14], 255);
    TextDrawSetShadow(ui_rental[14], 0);
    TextDrawSetOutline(ui_rental[14], 0);
    TextDrawBackgroundColor(ui_rental[14], 150);
    TextDrawFont(ui_rental[14], 1);
    TextDrawSetProportional(ui_rental[14], 1);

    ui_rental[15] = TextDrawCreate(425.000, 133.000, "X");
    TextDrawLetterSize(ui_rental[15], 0.349, 1.599);
    TextDrawAlignment(ui_rental[15], 1);
    TextDrawColor(ui_rental[15], 255);
    TextDrawSetShadow(ui_rental[15], 0);
    TextDrawSetOutline(ui_rental[15], 0);
    TextDrawBackgroundColor(ui_rental[15], 150);
    TextDrawFont(ui_rental[15], 1);
    TextDrawSetProportional(ui_rental[15], 1);
    TextDrawSetSelectable(ui_rental[15], 1);
}

CreateTransaksi(playerid)
{
    TransaksiFaggio[playerid][0] = CreatePlayerTextDraw(playerid, 260.000, 150.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TransaksiFaggio[playerid][0], 127.000, 188.000);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][0], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][0], 255);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][0], 1);

    TransaksiFaggio[playerid][1] = CreatePlayerTextDraw(playerid, 268.000, 182.000, "Faggio");
    PlayerTextDrawLetterSize(playerid, TransaksiFaggio[playerid][1], 0.200, 1.199);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][1], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][1], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][1], 150);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][1], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][1], 1);

    TransaksiFaggio[playerid][2] = CreatePlayerTextDraw(playerid, 273.000, 314.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TransaksiFaggio[playerid][2], 40.000, 16.000);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][2], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][2], -377187329);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][2], 255);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, TransaksiFaggio[playerid][2], 1);

    TransaksiFaggio[playerid][3] = CreatePlayerTextDraw(playerid, 334.000, 314.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TransaksiFaggio[playerid][3], 40.000, 16.000);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][3], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][3], -377187329);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][3], 255);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][3], 1);
    PlayerTextDrawSetSelectable(playerid, TransaksiFaggio[playerid][3], 1);

    TransaksiFaggio[playerid][4] = CreatePlayerTextDraw(playerid, 269.000, 205.000, "Rental Duration:");
    PlayerTextDrawLetterSize(playerid, TransaksiFaggio[playerid][4], 0.159, 0.998);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][4], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][4], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][4], 150);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][4], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][4], 1);

    TransaksiFaggio[playerid][5] = CreatePlayerTextDraw(playerid, 260.000, 150.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TransaksiFaggio[playerid][5], 127.000, 19.000);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][5], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][5], -377187329);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][5], 255);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][5], 1);

    TransaksiFaggio[playerid][6] = CreatePlayerTextDraw(playerid, 344.000, 201.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TransaksiFaggio[playerid][6], 37.000, 19.000);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][6], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][6], -2139062017);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][6], 255);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][6], 1);

    TransaksiFaggio[playerid][7] = CreatePlayerTextDraw(playerid, 345.000, 202.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TransaksiFaggio[playerid][7], 35.000, 17.000);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][7], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][7], 255);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][7], 1);

    TransaksiFaggio[playerid][8] = CreatePlayerTextDraw(playerid, 286.000, 316.000, "Cash");
    PlayerTextDrawLetterSize(playerid, TransaksiFaggio[playerid][8], 0.200, 1.199);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][8], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][8], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][8], 150);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][8], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][8], 1);

    TransaksiFaggio[playerid][9] = CreatePlayerTextDraw(playerid, 346.000, 316.000, "Bank");
    PlayerTextDrawLetterSize(playerid, TransaksiFaggio[playerid][9], 0.200, 1.199);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][9], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][9], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][9], 150);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][9], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][9], 1);

    TransaksiFaggio[playerid][10] = CreatePlayerTextDraw(playerid, 353.000, 205.000, "1 jam");
    PlayerTextDrawLetterSize(playerid, TransaksiFaggio[playerid][10], 0.159, 0.998);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][10], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][10], -1448498689);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][10], 150);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][10], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][10], 1);

    TransaksiFaggio[playerid][11] = CreatePlayerTextDraw(playerid, 269.000, 292.000, "Total Amount:");
    PlayerTextDrawLetterSize(playerid, TransaksiFaggio[playerid][11], 0.179, 1.199);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][11], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][11], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][11], 150);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][11], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][11], 1);

    TransaksiFaggio[playerid][12] = CreatePlayerTextDraw(playerid, 359.000, 289.000, "1.200");
    PlayerTextDrawLetterSize(playerid, TransaksiFaggio[playerid][12], 0.210, 1.599);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][12], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][12], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][12], 150);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][12], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][12], 1);

    TransaksiFaggio[playerid][13] = CreatePlayerTextDraw(playerid, 265.000, 154.000, "Rental Vehicle");
    PlayerTextDrawLetterSize(playerid, TransaksiFaggio[playerid][13], 0.159, 0.998);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][13], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][13], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][13], 150);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][13], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][13], 1);

    TransaksiFaggio[playerid][14] = CreatePlayerTextDraw(playerid, 375.000, 151.000, "X");
    PlayerTextDrawLetterSize(playerid, TransaksiFaggio[playerid][14], 0.359, 1.599);
    PlayerTextDrawAlignment(playerid, TransaksiFaggio[playerid][14], 1);
    PlayerTextDrawColor(playerid, TransaksiFaggio[playerid][14], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiFaggio[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiFaggio[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiFaggio[playerid][14], 150);
    PlayerTextDrawFont(playerid, TransaksiFaggio[playerid][14], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiFaggio[playerid][14], 1);
    PlayerTextDrawSetSelectable(playerid, TransaksiFaggio[playerid][14], 1);
}

CreateTransaksi2(playerid)
{
    TransaksiWayfarer[playerid][0] = CreatePlayerTextDraw(playerid, 260.000, 150.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TransaksiWayfarer[playerid][0], 127.000, 188.000);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][0], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][0], 255);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][0], 1);

    TransaksiWayfarer[playerid][1] = CreatePlayerTextDraw(playerid, 268.000, 182.000, "Wayfarer");
    PlayerTextDrawLetterSize(playerid, TransaksiWayfarer[playerid][1], 0.200, 1.199);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][1], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][1], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][1], 150);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][1], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][1], 1);

    TransaksiWayfarer[playerid][2] = CreatePlayerTextDraw(playerid, 273.000, 314.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TransaksiWayfarer[playerid][2], 40.000, 16.000);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][2], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][2], -377187329);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][2], 255);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, TransaksiWayfarer[playerid][2], 1);

    TransaksiWayfarer[playerid][3] = CreatePlayerTextDraw(playerid, 334.000, 314.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TransaksiWayfarer[playerid][3], 40.000, 16.000);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][3], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][3], -377187329);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][3], 255);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][3], 1);
    PlayerTextDrawSetSelectable(playerid, TransaksiWayfarer[playerid][3], 1);

    TransaksiWayfarer[playerid][4] = CreatePlayerTextDraw(playerid, 269.000, 205.000, "Rental Duration:");
    PlayerTextDrawLetterSize(playerid, TransaksiWayfarer[playerid][4], 0.159, 0.998);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][4], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][4], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][4], 150);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][4], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][4], 1);

    TransaksiWayfarer[playerid][5] = CreatePlayerTextDraw(playerid, 260.000, 150.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TransaksiWayfarer[playerid][5], 127.000, 19.000);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][5], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][5], -377187329);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][5], 255);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][5], 1);

    TransaksiWayfarer[playerid][6] = CreatePlayerTextDraw(playerid, 344.000, 201.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TransaksiWayfarer[playerid][6], 37.000, 19.000);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][6], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][6], -2139062017);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][6], 255);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][6], 1);

    TransaksiWayfarer[playerid][7] = CreatePlayerTextDraw(playerid, 345.000, 202.000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, TransaksiWayfarer[playerid][7], 35.000, 17.000);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][7], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][7], 255);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][7], 1);

    TransaksiWayfarer[playerid][8] = CreatePlayerTextDraw(playerid, 286.000, 316.000, "Cash");
    PlayerTextDrawLetterSize(playerid, TransaksiWayfarer[playerid][8], 0.200, 1.199);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][8], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][8], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][8], 150);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][8], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][8], 1);

    TransaksiWayfarer[playerid][9] = CreatePlayerTextDraw(playerid, 346.000, 316.000, "Bank");
    PlayerTextDrawLetterSize(playerid, TransaksiWayfarer[playerid][9], 0.200, 1.199);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][9], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][9], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][9], 150);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][9], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][9], 1);

    TransaksiWayfarer[playerid][10] = CreatePlayerTextDraw(playerid, 353.000, 205.000, "1 jam");
    PlayerTextDrawLetterSize(playerid, TransaksiWayfarer[playerid][10], 0.159, 0.998);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][10], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][10], -1448498689);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][10], 150);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][10], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][10], 1);

    TransaksiWayfarer[playerid][11] = CreatePlayerTextDraw(playerid, 269.000, 292.000, "Total Amount:");
    PlayerTextDrawLetterSize(playerid, TransaksiWayfarer[playerid][11], 0.179, 1.199);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][11], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][11], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][11], 150);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][11], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][11], 1);

    TransaksiWayfarer[playerid][12] = CreatePlayerTextDraw(playerid, 359.000, 289.000, "1.200");
    PlayerTextDrawLetterSize(playerid, TransaksiWayfarer[playerid][12], 0.210, 1.599);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][12], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][12], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][12], 150);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][12], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][12], 1);

    TransaksiWayfarer[playerid][13] = CreatePlayerTextDraw(playerid, 265.000, 154.000, "Rental Vehicle");
    PlayerTextDrawLetterSize(playerid, TransaksiWayfarer[playerid][13], 0.159, 0.998);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][13], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][13], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][13], 150);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][13], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][13], 1);

    TransaksiWayfarer[playerid][14] = CreatePlayerTextDraw(playerid, 375.000, 151.000, "X");
    PlayerTextDrawLetterSize(playerid, TransaksiWayfarer[playerid][14], 0.359, 1.599);
    PlayerTextDrawAlignment(playerid, TransaksiWayfarer[playerid][14], 1);
    PlayerTextDrawColor(playerid, TransaksiWayfarer[playerid][14], 255);
    PlayerTextDrawSetShadow(playerid, TransaksiWayfarer[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, TransaksiWayfarer[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, TransaksiWayfarer[playerid][14], 150);
    PlayerTextDrawFont(playerid, TransaksiWayfarer[playerid][14], 1);
    PlayerTextDrawSetProportional(playerid, TransaksiWayfarer[playerid][14], 1);
    PlayerTextDrawSetSelectable(playerid, TransaksiWayfarer[playerid][14], 1);
    return 1;
}

ShowRentaLTD(playerid)
{
	HideServerNameTD(playerid);
	HideStatsTD(playerid);
	HideHBETD(playerid);
    //HideRadioVoiceInfoTD(playerid);

    TextDrawShowForPlayer(playerid, ui_rental[0]);
    TextDrawShowForPlayer(playerid, ui_rental[1]);
    TextDrawShowForPlayer(playerid, ui_rental[2]);
    TextDrawShowForPlayer(playerid, ui_rental[3]);
    TextDrawShowForPlayer(playerid, ui_rental[4]);
    TextDrawShowForPlayer(playerid, ui_rental[5]);
    TextDrawShowForPlayer(playerid, ui_rental[6]);
    TextDrawShowForPlayer(playerid, ui_rental[7]);
    TextDrawShowForPlayer(playerid, ui_rental[8]);
    TextDrawShowForPlayer(playerid, ui_rental[9]);
    TextDrawShowForPlayer(playerid, ui_rental[10]);
    TextDrawShowForPlayer(playerid, ui_rental[11]);
    TextDrawShowForPlayer(playerid, ui_rental[12]);
    TextDrawShowForPlayer(playerid, ui_rental[13]);
    TextDrawShowForPlayer(playerid, ui_rental[14]);
    TextDrawShowForPlayer(playerid, ui_rental[15]);
    //TextDrawShowForPlayer(playerid, ui_rental[16]);
    //TextDrawShowForPlayer(playerid, ui_rental[17]);
    SelectTextDraw(playerid, 0xff91a4cc);
}

HideRentaLTD(playerid)
{
	ShowServerNameTD(playerid);
	ShowStatsTD(playerid);
	ShowHBETD(playerid);
    CancelSelectTextDraw(playerid);
    //ShowRadioVoiceInfoTD(playerid);

    TextDrawHideForPlayer(playerid, ui_rental[0]);
    TextDrawHideForPlayer(playerid, ui_rental[1]);
    TextDrawHideForPlayer(playerid, ui_rental[2]);
    TextDrawHideForPlayer(playerid, ui_rental[3]);
    TextDrawHideForPlayer(playerid, ui_rental[4]);
    TextDrawHideForPlayer(playerid, ui_rental[5]);
    TextDrawHideForPlayer(playerid, ui_rental[6]);
    TextDrawHideForPlayer(playerid, ui_rental[7]);
    TextDrawHideForPlayer(playerid, ui_rental[8]);
    TextDrawHideForPlayer(playerid, ui_rental[9]);
    TextDrawHideForPlayer(playerid, ui_rental[10]);
    TextDrawHideForPlayer(playerid, ui_rental[11]);
    TextDrawHideForPlayer(playerid, ui_rental[12]);
    TextDrawHideForPlayer(playerid, ui_rental[13]);
    TextDrawHideForPlayer(playerid, ui_rental[14]);
    TextDrawHideForPlayer(playerid, ui_rental[15]);
    //TextDrawHideForPlayer(playerid, ui_rental[16]);
    //TextDrawHideForPlayer(playerid, ui_rental[17]);
}

ShowTransaksi(playerid)
{
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][0]);
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][1]);
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][2]);
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][3]);
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][4]);
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][5]);
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][6]);
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][7]);
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][8]);
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][9]);
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][10]);
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][11]);
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][12]);
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][13]);
    PlayerTextDrawShow(playerid, TransaksiFaggio[playerid][14]);
    SelectTextDraw(playerid, 0xff91a4cc);
}

HideTransaksi(playerid)
{
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][0]);
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][1]);
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][2]);
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][3]);
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][4]);
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][5]);
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][6]);
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][7]);
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][8]);
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][9]);
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][10]);
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][11]);
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][12]);
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][13]);
    PlayerTextDrawHide(playerid, TransaksiFaggio[playerid][14]);    
    CancelSelectTextDraw(playerid);
}

ShowTransaksi2(playerid)
{
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][0]);
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][1]);
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][2]);
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][3]);
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][4]);
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][5]);
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][6]);
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][7]);
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][8]);
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][9]);
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][10]);
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][11]);
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][12]);
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][13]);
    PlayerTextDrawShow(playerid, TransaksiWayfarer[playerid][14]);
    SelectTextDraw(playerid, 0xff91a4cc);
}

HideTransaksi2(playerid)
{
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][0]);
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][1]);
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][2]);
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][3]);
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][4]);
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][5]);
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][6]);
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][7]);
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][8]);
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][9]);
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][10]);
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][11]);
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][12]);
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][13]);
    PlayerTextDrawHide(playerid, TransaksiWayfarer[playerid][14]);    
    CancelSelectTextDraw(playerid);
}