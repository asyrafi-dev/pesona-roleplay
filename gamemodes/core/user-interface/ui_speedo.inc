new 
    Text:SpeedoTD[7],
    PlayerText:PlayerSpeedoTD[MAX_PLAYERS][31];

CreateSpeedoTD()
{
	SpeedoTD[0] = TextDrawCreate(294.000, 692.000, "Gambar teks baru");
	TextDrawLetterSize(SpeedoTD[0], 0.300, 1.500);
	TextDrawAlignment(SpeedoTD[0], 1);
	TextDrawColor(SpeedoTD[0], -1);
	TextDrawSetShadow(SpeedoTD[0], 1);
	TextDrawSetOutline(SpeedoTD[0], 1);
	TextDrawBackgroundColor(SpeedoTD[0], 150);
	TextDrawFont(SpeedoTD[0], 1);
	TextDrawSetProportional(SpeedoTD[0], 1);

	SpeedoTD[1] = TextDrawCreate(204.000, 398.000, "LD_BUM:blkdot");
	TextDrawTextSize(SpeedoTD[1], 2.000, 38.000);
	TextDrawAlignment(SpeedoTD[1], 1);
	TextDrawColor(SpeedoTD[1], -1061109505);
	TextDrawSetShadow(SpeedoTD[1], 0);
	TextDrawSetOutline(SpeedoTD[1], 0);
	TextDrawBackgroundColor(SpeedoTD[1], 255);
	TextDrawFont(SpeedoTD[1], 4);
	TextDrawSetProportional(SpeedoTD[1], 1);

	SpeedoTD[2] = TextDrawCreate(200.000, 398.000, "LD_BUM:blkdot");
	TextDrawTextSize(SpeedoTD[2], 2.000, 38.000);
	TextDrawAlignment(SpeedoTD[2], 1);
	TextDrawColor(SpeedoTD[2], -1061109505);
	TextDrawSetShadow(SpeedoTD[2], 0);
	TextDrawSetOutline(SpeedoTD[2], 0);
	TextDrawBackgroundColor(SpeedoTD[2], 255);
	TextDrawFont(SpeedoTD[2], 4);
	TextDrawSetProportional(SpeedoTD[2], 1);

	SpeedoTD[3] = TextDrawCreate(144.000, 398.000, "LD_BUM:blkdot");
	TextDrawTextSize(SpeedoTD[3], 10.000, 8.000);
	TextDrawAlignment(SpeedoTD[3], 1);
	TextDrawColor(SpeedoTD[3], -1061109505);
	TextDrawSetShadow(SpeedoTD[3], 0);
	TextDrawSetOutline(SpeedoTD[3], 0);
	TextDrawBackgroundColor(SpeedoTD[3], 255);
	TextDrawFont(SpeedoTD[3], 4);
	TextDrawSetProportional(SpeedoTD[3], 1);

	SpeedoTD[4] = TextDrawCreate(182.000, 414.000, "KM/H");
	TextDrawLetterSize(SpeedoTD[4], 0.158, 0.898);
	TextDrawAlignment(SpeedoTD[4], 1);
	TextDrawColor(SpeedoTD[4], -1);
	TextDrawSetShadow(SpeedoTD[4], 0);
	TextDrawSetOutline(SpeedoTD[4], 0);
	TextDrawBackgroundColor(SpeedoTD[4], 150);
	TextDrawFont(SpeedoTD[4], 3);
	TextDrawSetProportional(SpeedoTD[4], 1);

	SpeedoTD[5] = TextDrawCreate(200.000, 390.000, "H");
	TextDrawLetterSize(SpeedoTD[5], 0.115, 0.796);
	TextDrawAlignment(SpeedoTD[5], 1);
	TextDrawColor(SpeedoTD[5], -1);
	TextDrawSetShadow(SpeedoTD[5], 0);
	TextDrawSetOutline(SpeedoTD[5], 0);
	TextDrawBackgroundColor(SpeedoTD[5], 150);
	TextDrawFont(SpeedoTD[5], 1);
	TextDrawSetProportional(SpeedoTD[5], 1);

	SpeedoTD[6] = TextDrawCreate(205.000, 390.000, "F");
	TextDrawLetterSize(SpeedoTD[6], 0.148, 0.796);
	TextDrawAlignment(SpeedoTD[6], 1);
	TextDrawColor(SpeedoTD[6], -1);
	TextDrawSetShadow(SpeedoTD[6], 0);
	TextDrawSetOutline(SpeedoTD[6], 0);
	TextDrawBackgroundColor(SpeedoTD[6], 150);
	TextDrawFont(SpeedoTD[6], 1);
	TextDrawSetProportional(SpeedoTD[6], 1);
}
CreatePlayerSpeedoTD(playerid)
{
	PlayerSpeedoTD[playerid][0] = CreatePlayerTextDraw(playerid, 147.000, 429.000, "North I Red County");
	PlayerTextDrawLetterSize(playerid, PlayerSpeedoTD[playerid][0], 0.156, 0.897);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][0], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][0], -1);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][0], 150);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][0], 1);

	PlayerSpeedoTD[playerid][1] = CreatePlayerTextDraw(playerid, 159.000, 403.000, "000");
	PlayerTextDrawLetterSize(playerid, PlayerSpeedoTD[playerid][1], 0.365, 2.296);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][1], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][1], -1);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][1], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][1], 150);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][1], 3);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][1], 1);

	PlayerSpeedoTD[playerid][2] = CreatePlayerTextDraw(playerid, 147.000, 398.000, "N");
	PlayerTextDrawLetterSize(playerid, PlayerSpeedoTD[playerid][2], 0.148, 0.796);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][2], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][2], -1);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][2], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][2], 150);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][2], 1);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][2], 1);

	PlayerSpeedoTD[playerid][3] = CreatePlayerTextDraw(playerid, 144.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][3], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][3], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][3], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][3], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][3], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][3], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][3], 1);

	PlayerSpeedoTD[playerid][4] = CreatePlayerTextDraw(playerid, 146.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][4], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][4], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][4], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][4], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][4], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][4], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][4], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][4], 1);

	PlayerSpeedoTD[playerid][5] = CreatePlayerTextDraw(playerid, 148.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][5], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][5], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][5], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][5], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][5], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][5], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][5], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][5], 1);

	PlayerSpeedoTD[playerid][6] = CreatePlayerTextDraw(playerid, 150.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][6], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][6], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][6], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][6], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][6], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][6], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][6], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][6], 1);

	PlayerSpeedoTD[playerid][7] = CreatePlayerTextDraw(playerid, 152.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][7], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][7], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][7], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][7], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][7], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][7], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][7], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][7], 1);

	PlayerSpeedoTD[playerid][8] = CreatePlayerTextDraw(playerid, 154.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][8], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][8], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][8], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][8], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][8], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][8], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][8], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][8], 1);

	PlayerSpeedoTD[playerid][9] = CreatePlayerTextDraw(playerid, 156.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][9], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][9], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][9], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][9], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][9], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][9], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][9], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][9], 1);

	PlayerSpeedoTD[playerid][10] = CreatePlayerTextDraw(playerid, 158.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][10], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][10], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][10], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][10], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][10], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][10], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][10], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][10], 1);

	PlayerSpeedoTD[playerid][11] = CreatePlayerTextDraw(playerid, 160.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][11], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][11], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][11], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][11], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][11], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][11], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][11], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][11], 1);

	PlayerSpeedoTD[playerid][12] = CreatePlayerTextDraw(playerid, 162.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][12], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][12], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][12], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][12], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][12], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][12], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][12], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][12], 1);

	PlayerSpeedoTD[playerid][13] = CreatePlayerTextDraw(playerid, 164.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][13], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][13], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][13], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][13], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][13], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][13], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][13], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][13], 1);

	PlayerSpeedoTD[playerid][14] = CreatePlayerTextDraw(playerid, 166.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][14], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][14], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][14], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][14], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][14], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][14], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][14], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][14], 1);

	PlayerSpeedoTD[playerid][15] = CreatePlayerTextDraw(playerid, 168.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][15], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][15], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][15], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][15], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][15], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][15], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][15], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][15], 1);

	PlayerSpeedoTD[playerid][16] = CreatePlayerTextDraw(playerid, 170.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][16], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][16], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][16], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][16], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][16], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][16], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][16], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][16], 1);

	PlayerSpeedoTD[playerid][17] = CreatePlayerTextDraw(playerid, 172.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][17], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][17], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][17], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][17], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][17], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][17], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][17], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][17], 1);

	PlayerSpeedoTD[playerid][18] = CreatePlayerTextDraw(playerid, 174.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][18], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][18], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][18], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][18], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][18], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][18], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][18], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][18], 1);

	PlayerSpeedoTD[playerid][19] = CreatePlayerTextDraw(playerid, 176.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][19], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][19], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][19], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][19], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][19], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][19], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][19], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][19], 1);

	PlayerSpeedoTD[playerid][20] = CreatePlayerTextDraw(playerid, 178.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][20], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][20], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][20], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][20], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][20], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][20], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][20], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][20], 1);

	PlayerSpeedoTD[playerid][21] = CreatePlayerTextDraw(playerid, 180.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][21], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][21], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][21], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][21], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][21], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][21], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][21], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][21], 1);

	PlayerSpeedoTD[playerid][22] = CreatePlayerTextDraw(playerid, 182.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][22], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][22], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][22], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][22], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][22], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][22], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][22], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][22], 1);

	PlayerSpeedoTD[playerid][23] = CreatePlayerTextDraw(playerid, 184.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][23], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][23], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][23], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][23], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][23], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][23], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][23], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][23], 1);

	PlayerSpeedoTD[playerid][24] = CreatePlayerTextDraw(playerid, 186.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][24], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][24], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][24], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][24], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][24], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][24], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][24], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][24], 1);

	PlayerSpeedoTD[playerid][25] = CreatePlayerTextDraw(playerid, 188.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][25], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][25], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][25], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][25], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][25], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][25], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][25], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][25], 1);

	PlayerSpeedoTD[playerid][26] = CreatePlayerTextDraw(playerid, 190.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][26], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][26], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][26], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][26], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][26], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][26], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][26], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][26], 1);

	PlayerSpeedoTD[playerid][27] = CreatePlayerTextDraw(playerid, 192.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][27], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][27], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][27], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][27], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][27], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][27], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][27], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][27], 1);

	PlayerSpeedoTD[playerid][28] = CreatePlayerTextDraw(playerid, 194.000, 425.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][28], 4.000, 4.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][28], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][28], -2147483393);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][28], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][28], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][28], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][28], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][28], 1);

	PlayerSpeedoTD[playerid][29] = CreatePlayerTextDraw(playerid, 204.000, 398.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][29], 2.000, 38.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][29], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][29], -1);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][29], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][29], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][29], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][29], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][29], 1);

	PlayerSpeedoTD[playerid][30] = CreatePlayerTextDraw(playerid, 200.000, 398.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PlayerSpeedoTD[playerid][30], 2.000, 38.000);
	PlayerTextDrawAlignment(playerid, PlayerSpeedoTD[playerid][30], 1);
	PlayerTextDrawColor(playerid, PlayerSpeedoTD[playerid][30], 579543807);
	PlayerTextDrawSetShadow(playerid, PlayerSpeedoTD[playerid][30], 0);
	PlayerTextDrawSetOutline(playerid, PlayerSpeedoTD[playerid][30], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerSpeedoTD[playerid][30], 255);
	PlayerTextDrawFont(playerid, PlayerSpeedoTD[playerid][30], 4);
	PlayerTextDrawSetProportional(playerid, PlayerSpeedoTD[playerid][30], 1);

}
ShowSpeedoTD(playerid)
{
    for(new x; x < 7; x++)
    {
        TextDrawShowForPlayer(playerid, SpeedoTD[x]);
	}
	for(new x; x < 31; x++)
	{
        PlayerTextDrawShow(playerid, PlayerSpeedoTD[playerid][x]);
    }
}

HideSpeedoTD(playerid)
{
    for(new x; x < 7; x++)
    {
        TextDrawHideForPlayer(playerid, SpeedoTD[x]);
	}
	for(new x; x < 31; x++)
	{
        PlayerTextDrawHide(playerid, PlayerSpeedoTD[playerid][x]);
    }
}