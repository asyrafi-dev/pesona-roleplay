new Text:ATMTD[51],
    PlayerText:ATMPTD[MAX_PLAYERS][4];

CreateATMTD()
{
	ATMTD[0] = TextDrawCreate(212.000, 150.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[0], 227.000, 157.000);
	TextDrawAlignment(ATMTD[0], 1);
	TextDrawColor(ATMTD[0], -1);
	TextDrawSetShadow(ATMTD[0], 0);
	TextDrawSetOutline(ATMTD[0], 0);
	TextDrawBackgroundColor(ATMTD[0], 255);
	TextDrawFont(ATMTD[0], 4);
	TextDrawSetProportional(ATMTD[0], 1);

	ATMTD[1] = TextDrawCreate(212.000, 142.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[1], 227.000, 17.000);
	TextDrawAlignment(ATMTD[1], 1);
	TextDrawColor(ATMTD[1], -377187329);
	TextDrawSetShadow(ATMTD[1], 0);
	TextDrawSetOutline(ATMTD[1], 0);
	TextDrawBackgroundColor(ATMTD[1], 255);
	TextDrawFont(ATMTD[1], 4);
	TextDrawSetProportional(ATMTD[1], 1);

	ATMTD[2] = TextDrawCreate(213.000, 144.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[2], 13.000, 14.000);
	TextDrawAlignment(ATMTD[2], 1);
	TextDrawColor(ATMTD[2], -1);
	TextDrawSetShadow(ATMTD[2], 0);
	TextDrawSetOutline(ATMTD[2], 0);
	TextDrawBackgroundColor(ATMTD[2], 255);
	TextDrawFont(ATMTD[2], 4);
	TextDrawSetProportional(ATMTD[2], 1);

	ATMTD[3] = TextDrawCreate(213.000, 143.000, "LD_BEAT:chit");
	TextDrawTextSize(ATMTD[3], 13.000, 15.000);
	TextDrawAlignment(ATMTD[3], 1);
	TextDrawColor(ATMTD[3], -377187329);
	TextDrawSetShadow(ATMTD[3], 0);
	TextDrawSetOutline(ATMTD[3], 0);
	TextDrawBackgroundColor(ATMTD[3], 255);
	TextDrawFont(ATMTD[3], 4);
	TextDrawSetProportional(ATMTD[3], 1);

	ATMTD[4] = TextDrawCreate(214.000, 144.000, "LD_BEAT:chit");
	TextDrawTextSize(ATMTD[4], 11.000, 14.000);
	TextDrawAlignment(ATMTD[4], 1);
	TextDrawColor(ATMTD[4], -1);
	TextDrawSetShadow(ATMTD[4], 0);
	TextDrawSetOutline(ATMTD[4], 0);
	TextDrawBackgroundColor(ATMTD[4], 255);
	TextDrawFont(ATMTD[4], 4);
	TextDrawSetProportional(ATMTD[4], 1);

	ATMTD[5] = TextDrawCreate(213.000, 151.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[5], 13.000, 3.000);
	TextDrawAlignment(ATMTD[5], 1);
	TextDrawColor(ATMTD[5], -1);
	TextDrawSetShadow(ATMTD[5], 0);
	TextDrawSetOutline(ATMTD[5], 0);
	TextDrawBackgroundColor(ATMTD[5], 255);
	TextDrawFont(ATMTD[5], 4);
	TextDrawSetProportional(ATMTD[5], 1);

	ATMTD[6] = TextDrawCreate(215.000, 155.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[6], 9.000, 1.000);
	TextDrawAlignment(ATMTD[6], 1);
	TextDrawColor(ATMTD[6], -377187329);
	TextDrawSetShadow(ATMTD[6], 0);
	TextDrawSetOutline(ATMTD[6], 0);
	TextDrawBackgroundColor(ATMTD[6], 255);
	TextDrawFont(ATMTD[6], 4);
	TextDrawSetProportional(ATMTD[6], 1);

	ATMTD[7] = TextDrawCreate(215.000, 151.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[7], 9.000, 1.000);
	TextDrawAlignment(ATMTD[7], 1);
	TextDrawColor(ATMTD[7], -377187329);
	TextDrawSetShadow(ATMTD[7], 0);
	TextDrawSetOutline(ATMTD[7], 0);
	TextDrawBackgroundColor(ATMTD[7], 255);
	TextDrawFont(ATMTD[7], 4);
	TextDrawSetProportional(ATMTD[7], 1);

	ATMTD[8] = TextDrawCreate(216.000, 151.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[8], 1.000, 4.000);
	TextDrawAlignment(ATMTD[8], 1);
	TextDrawColor(ATMTD[8], -377187329);
	TextDrawSetShadow(ATMTD[8], 0);
	TextDrawSetOutline(ATMTD[8], 0);
	TextDrawBackgroundColor(ATMTD[8], 255);
	TextDrawFont(ATMTD[8], 4);
	TextDrawSetProportional(ATMTD[8], 1);

	ATMTD[9] = TextDrawCreate(218.000, 151.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[9], 1.000, 4.000);
	TextDrawAlignment(ATMTD[9], 1);
	TextDrawColor(ATMTD[9], -377187329);
	TextDrawSetShadow(ATMTD[9], 0);
	TextDrawSetOutline(ATMTD[9], 0);
	TextDrawBackgroundColor(ATMTD[9], 255);
	TextDrawFont(ATMTD[9], 4);
	TextDrawSetProportional(ATMTD[9], 1);

	ATMTD[10] = TextDrawCreate(220.000, 151.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[10], 1.000, 4.000);
	TextDrawAlignment(ATMTD[10], 1);
	TextDrawColor(ATMTD[10], -377187329);
	TextDrawSetShadow(ATMTD[10], 0);
	TextDrawSetOutline(ATMTD[10], 0);
	TextDrawBackgroundColor(ATMTD[10], 255);
	TextDrawFont(ATMTD[10], 4);
	TextDrawSetProportional(ATMTD[10], 1);

	ATMTD[11] = TextDrawCreate(222.000, 151.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[11], 1.000, 4.000);
	TextDrawAlignment(ATMTD[11], 1);
	TextDrawColor(ATMTD[11], -377187329);
	TextDrawSetShadow(ATMTD[11], 0);
	TextDrawSetOutline(ATMTD[11], 0);
	TextDrawBackgroundColor(ATMTD[11], 255);
	TextDrawFont(ATMTD[11], 4);
	TextDrawSetProportional(ATMTD[11], 1);

	ATMTD[12] = TextDrawCreate(230.000, 145.000, "Fleeca Bank");
	TextDrawLetterSize(ATMTD[12], 0.230, 1.098);
	TextDrawAlignment(ATMTD[12], 1);
	TextDrawColor(ATMTD[12], -1);
	TextDrawSetShadow(ATMTD[12], 0);
	TextDrawSetOutline(ATMTD[12], 0);
	TextDrawBackgroundColor(ATMTD[12], 150);
	TextDrawFont(ATMTD[12], 1);
	TextDrawSetProportional(ATMTD[12], 1);

	ATMTD[13] = TextDrawCreate(426.000, 143.000, "X");
	TextDrawLetterSize(ATMTD[13], 0.379, 1.500);
	TextDrawAlignment(ATMTD[13], 1);
	TextDrawColor(ATMTD[13], -1);
	TextDrawSetShadow(ATMTD[13], 0);
	TextDrawSetOutline(ATMTD[13], 0);
	TextDrawBackgroundColor(ATMTD[13], 150);
	TextDrawFont(ATMTD[13], 1);
	TextDrawSetProportional(ATMTD[13], 1);
	TextDrawSetSelectable(ATMTD[13], 1);

	ATMTD[14] = TextDrawCreate(215.000, 162.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[14], 96.000, 76.000);
	TextDrawAlignment(ATMTD[14], 1);
	TextDrawColor(ATMTD[14], -377187329);
	TextDrawSetShadow(ATMTD[14], 0);
	TextDrawSetOutline(ATMTD[14], 0);
	TextDrawBackgroundColor(ATMTD[14], 255);
	TextDrawFont(ATMTD[14], 4);
	TextDrawSetProportional(ATMTD[14], 1);

	ATMTD[15] = TextDrawCreate(215.000, 240.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[15], 96.000, 23.000);
	TextDrawAlignment(ATMTD[15], 1);
	TextDrawColor(ATMTD[15], -377187329);
	TextDrawSetShadow(ATMTD[15], 0);
	TextDrawSetOutline(ATMTD[15], 0);
	TextDrawBackgroundColor(ATMTD[15], 255);
	TextDrawFont(ATMTD[15], 4);
	TextDrawSetProportional(ATMTD[15], 1);

	ATMTD[16] = TextDrawCreate(313.000, 162.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[16], 123.000, 23.000);
	TextDrawAlignment(ATMTD[16], 1);
	TextDrawColor(ATMTD[16], -377187329);
	TextDrawSetShadow(ATMTD[16], 0);
	TextDrawSetOutline(ATMTD[16], 0);
	TextDrawBackgroundColor(ATMTD[16], 255);
	TextDrawFont(ATMTD[16], 4);
	TextDrawSetProportional(ATMTD[16], 1);

	ATMTD[17] = TextDrawCreate(313.000, 187.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[17], 60.000, 51.000);
	TextDrawAlignment(ATMTD[17], 1);
	TextDrawColor(ATMTD[17], -377187329);
	TextDrawSetShadow(ATMTD[17], 0);
	TextDrawSetOutline(ATMTD[17], 0);
	TextDrawBackgroundColor(ATMTD[17], 255);
	TextDrawFont(ATMTD[17], 4);
	TextDrawSetProportional(ATMTD[17], 1);

	ATMTD[18] = TextDrawCreate(376.000, 187.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[18], 60.000, 50.000);
	TextDrawAlignment(ATMTD[18], 1);
	TextDrawColor(ATMTD[18], -377187329);
	TextDrawSetShadow(ATMTD[18], 0);
	TextDrawSetOutline(ATMTD[18], 0);
	TextDrawBackgroundColor(ATMTD[18], 255);
	TextDrawFont(ATMTD[18], 4);
	TextDrawSetProportional(ATMTD[18], 1);

	ATMTD[19] = TextDrawCreate(313.000, 240.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[19], 37.000, 23.000);
	TextDrawAlignment(ATMTD[19], 1);
	TextDrawColor(ATMTD[19], -377187329);
	TextDrawSetShadow(ATMTD[19], 0);
	TextDrawSetOutline(ATMTD[19], 0);
	TextDrawBackgroundColor(ATMTD[19], 255);
	TextDrawFont(ATMTD[19], 4);
	TextDrawSetProportional(ATMTD[19], 1);
	TextDrawSetSelectable(ATMTD[19], 1);

	ATMTD[20] = TextDrawCreate(353.000, 240.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[20], 43.000, 23.000);
	TextDrawAlignment(ATMTD[20], 1);
	TextDrawColor(ATMTD[20], -377187329);
	TextDrawSetShadow(ATMTD[20], 0);
	TextDrawSetOutline(ATMTD[20], 0);
	TextDrawBackgroundColor(ATMTD[20], 255);
	TextDrawFont(ATMTD[20], 4);
	TextDrawSetProportional(ATMTD[20], 1);
	TextDrawSetSelectable(ATMTD[20], 1);

	ATMTD[21] = TextDrawCreate(399.000, 240.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[21], 37.000, 23.000);
	TextDrawAlignment(ATMTD[21], 1);
	TextDrawColor(ATMTD[21], -377187329);
	TextDrawSetShadow(ATMTD[21], 0);
	TextDrawSetOutline(ATMTD[21], 0);
	TextDrawBackgroundColor(ATMTD[21], 255);
	TextDrawFont(ATMTD[21], 4);
	TextDrawSetProportional(ATMTD[21], 1);
	TextDrawSetSelectable(ATMTD[21], 1);

	ATMTD[22] = TextDrawCreate(319.000, 245.000, "Whitdraw");
	TextDrawLetterSize(ATMTD[22], 0.159, 1.098);
	TextDrawAlignment(ATMTD[22], 1);
	TextDrawColor(ATMTD[22], -1);
	TextDrawSetShadow(ATMTD[22], 0);
	TextDrawSetOutline(ATMTD[22], 0);
	TextDrawBackgroundColor(ATMTD[22], 150);
	TextDrawFont(ATMTD[22], 1);
	TextDrawSetProportional(ATMTD[22], 1);

	ATMTD[23] = TextDrawCreate(361.000, 245.000, "Transfer");
	TextDrawLetterSize(ATMTD[23], 0.200, 1.098);
	TextDrawAlignment(ATMTD[23], 1);
	TextDrawColor(ATMTD[23], -1);
	TextDrawSetShadow(ATMTD[23], 0);
	TextDrawSetOutline(ATMTD[23], 0);
	TextDrawBackgroundColor(ATMTD[23], 150);
	TextDrawFont(ATMTD[23], 1);
	TextDrawSetProportional(ATMTD[23], 1);

	ATMTD[24] = TextDrawCreate(406.000, 245.000, "Deposit");
	TextDrawLetterSize(ATMTD[24], 0.200, 1.098);
	TextDrawAlignment(ATMTD[24], 1);
	TextDrawColor(ATMTD[24], -1);
	TextDrawSetShadow(ATMTD[24], 0);
	TextDrawSetOutline(ATMTD[24], 0);
	TextDrawBackgroundColor(ATMTD[24], 150);
	TextDrawFont(ATMTD[24], 1);
	TextDrawSetProportional(ATMTD[24], 1);

	ATMTD[25] = TextDrawCreate(347.000, 162.000, "Available Balance");
	TextDrawLetterSize(ATMTD[25], 0.180, 0.999);
	TextDrawAlignment(ATMTD[25], 1);
	TextDrawColor(ATMTD[25], -1);
	TextDrawSetShadow(ATMTD[25], 0);
	TextDrawSetOutline(ATMTD[25], 0);
	TextDrawBackgroundColor(ATMTD[25], 150);
	TextDrawFont(ATMTD[25], 1);
	TextDrawSetProportional(ATMTD[25], 1);

	ATMTD[26] = TextDrawCreate(217.000, 164.000, "Fleeca Bank");
	TextDrawLetterSize(ATMTD[26], 0.230, 1.098);
	TextDrawAlignment(ATMTD[26], 1);
	TextDrawColor(ATMTD[26], -1);
	TextDrawSetShadow(ATMTD[26], 0);
	TextDrawSetOutline(ATMTD[26], 0);
	TextDrawBackgroundColor(ATMTD[26], 150);
	TextDrawFont(ATMTD[26], 1);
	TextDrawSetProportional(ATMTD[26], 1);

	ATMTD[27] = TextDrawCreate(287.000, 165.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[27], 21.000, 10.000);
	TextDrawAlignment(ATMTD[27], 1);
	TextDrawColor(ATMTD[27], -1);
	TextDrawSetShadow(ATMTD[27], 0);
	TextDrawSetOutline(ATMTD[27], 0);
	TextDrawBackgroundColor(ATMTD[27], 255);
	TextDrawFont(ATMTD[27], 4);
	TextDrawSetProportional(ATMTD[27], 1);

	ATMTD[28] = TextDrawCreate(289.000, 166.000, "DEBIT");
	TextDrawLetterSize(ATMTD[28], 0.189, 0.799);
	TextDrawAlignment(ATMTD[28], 1);
	TextDrawColor(ATMTD[28], -377187329);
	TextDrawSetShadow(ATMTD[28], 0);
	TextDrawSetOutline(ATMTD[28], 0);
	TextDrawBackgroundColor(ATMTD[28], 150);
	TextDrawFont(ATMTD[28], 1);
	TextDrawSetProportional(ATMTD[28], 1);

	ATMTD[29] = TextDrawCreate(222.000, 187.000, "... ... ... ...");
	TextDrawLetterSize(ATMTD[29], 0.418, 2.000);
	TextDrawAlignment(ATMTD[29], 1);
	TextDrawColor(ATMTD[29], -1);
	TextDrawSetShadow(ATMTD[29], 0);
	TextDrawSetOutline(ATMTD[29], 0);
	TextDrawBackgroundColor(ATMTD[29], 150);
	TextDrawFont(ATMTD[29], 1);
	TextDrawSetProportional(ATMTD[29], 1);

	ATMTD[30] = TextDrawCreate(217.000, 219.000, "Card Holder");
	TextDrawLetterSize(ATMTD[30], 0.128, 0.898);
	TextDrawAlignment(ATMTD[30], 1);
	TextDrawColor(ATMTD[30], -1);
	TextDrawSetShadow(ATMTD[30], 0);
	TextDrawSetOutline(ATMTD[30], 0);
	TextDrawBackgroundColor(ATMTD[30], 150);
	TextDrawFont(ATMTD[30], 1);
	TextDrawSetProportional(ATMTD[30], 1);

	ATMTD[31] = TextDrawCreate(271.000, 214.000, "Balance");
	TextDrawLetterSize(ATMTD[31], 0.128, 0.799);
	TextDrawAlignment(ATMTD[31], 1);
	TextDrawColor(ATMTD[31], -1);
	TextDrawSetShadow(ATMTD[31], 0);
	TextDrawSetOutline(ATMTD[31], 0);
	TextDrawBackgroundColor(ATMTD[31], 150);
	TextDrawFont(ATMTD[31], 1);
	TextDrawSetProportional(ATMTD[31], 1);

	ATMTD[32] = TextDrawCreate(247.000, 240.000, "Card Number");
	TextDrawLetterSize(ATMTD[32], 0.128, 0.898);
	TextDrawAlignment(ATMTD[32], 1);
	TextDrawColor(ATMTD[32], -1);
	TextDrawSetShadow(ATMTD[32], 0);
	TextDrawSetOutline(ATMTD[32], 0);
	TextDrawBackgroundColor(ATMTD[32], 150);
	TextDrawFont(ATMTD[32], 1);
	TextDrawSetProportional(ATMTD[32], 1);

	ATMTD[33] = TextDrawCreate(324.000, 187.000, "Withdraw Cash");
	TextDrawLetterSize(ATMTD[33], 0.150, 0.898);
	TextDrawAlignment(ATMTD[33], 1);
	TextDrawColor(ATMTD[33], -1);
	TextDrawSetShadow(ATMTD[33], 0);
	TextDrawSetOutline(ATMTD[33], 0);
	TextDrawBackgroundColor(ATMTD[33], 150);
	TextDrawFont(ATMTD[33], 1);
	TextDrawSetProportional(ATMTD[33], 1);

	ATMTD[34] = TextDrawCreate(390.000, 187.000, "Deposit Cash");
	TextDrawLetterSize(ATMTD[34], 0.150, 0.898);
	TextDrawAlignment(ATMTD[34], 1);
	TextDrawColor(ATMTD[34], -1);
	TextDrawSetShadow(ATMTD[34], 0);
	TextDrawSetOutline(ATMTD[34], 0);
	TextDrawBackgroundColor(ATMTD[34], 150);
	TextDrawFont(ATMTD[34], 1);
	TextDrawSetProportional(ATMTD[34], 1);

	ATMTD[35] = TextDrawCreate(317.000, 200.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[35], 23.000, 9.000);
	TextDrawAlignment(ATMTD[35], 1);
	TextDrawColor(ATMTD[35], -1);
	TextDrawSetShadow(ATMTD[35], 0);
	TextDrawSetOutline(ATMTD[35], 0);
	TextDrawBackgroundColor(ATMTD[35], 255);
	TextDrawFont(ATMTD[35], 4);
	TextDrawSetProportional(ATMTD[35], 1);
	TextDrawSetSelectable(ATMTD[35], 1);

	ATMTD[36] = TextDrawCreate(346.000, 200.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[36], 23.000, 9.000);
	TextDrawAlignment(ATMTD[36], 1);
	TextDrawColor(ATMTD[36], -1);
	TextDrawSetShadow(ATMTD[36], 0);
	TextDrawSetOutline(ATMTD[36], 0);
	TextDrawBackgroundColor(ATMTD[36], 255);
	TextDrawFont(ATMTD[36], 4);
	TextDrawSetProportional(ATMTD[36], 1);
	TextDrawSetSelectable(ATMTD[36], 1);

	ATMTD[37] = TextDrawCreate(346.000, 218.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[37], 23.000, 9.000);
	TextDrawAlignment(ATMTD[37], 1);
	TextDrawColor(ATMTD[37], -1);
	TextDrawSetShadow(ATMTD[37], 0);
	TextDrawSetOutline(ATMTD[37], 0);
	TextDrawBackgroundColor(ATMTD[37], 255);
	TextDrawFont(ATMTD[37], 4);
	TextDrawSetProportional(ATMTD[37], 1);
	TextDrawSetSelectable(ATMTD[37], 1);

	ATMTD[38] = TextDrawCreate(317.000, 218.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[38], 23.000, 9.000);
	TextDrawAlignment(ATMTD[38], 1);
	TextDrawColor(ATMTD[38], -1);
	TextDrawSetShadow(ATMTD[38], 0);
	TextDrawSetOutline(ATMTD[38], 0);
	TextDrawBackgroundColor(ATMTD[38], 255);
	TextDrawFont(ATMTD[38], 4);
	TextDrawSetProportional(ATMTD[38], 1);
	TextDrawSetSelectable(ATMTD[38], 1);

	ATMTD[39] = TextDrawCreate(380.000, 200.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[39], 23.000, 9.000);
	TextDrawAlignment(ATMTD[39], 1);
	TextDrawColor(ATMTD[39], -1);
	TextDrawSetShadow(ATMTD[39], 0);
	TextDrawSetOutline(ATMTD[39], 0);
	TextDrawBackgroundColor(ATMTD[39], 255);
	TextDrawFont(ATMTD[39], 4);
	TextDrawSetProportional(ATMTD[39], 1);
	TextDrawSetSelectable(ATMTD[39], 1);

	ATMTD[40] = TextDrawCreate(409.000, 200.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[40], 23.000, 9.000);
	TextDrawAlignment(ATMTD[40], 1);
	TextDrawColor(ATMTD[40], -1);
	TextDrawSetShadow(ATMTD[40], 0);
	TextDrawSetOutline(ATMTD[40], 0);
	TextDrawBackgroundColor(ATMTD[40], 255);
	TextDrawFont(ATMTD[40], 4);
	TextDrawSetProportional(ATMTD[40], 1);
	TextDrawSetSelectable(ATMTD[40], 1);

	ATMTD[41] = TextDrawCreate(409.000, 218.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[41], 23.000, 9.000);
	TextDrawAlignment(ATMTD[41], 1);
	TextDrawColor(ATMTD[41], -1);
	TextDrawSetShadow(ATMTD[41], 0);
	TextDrawSetOutline(ATMTD[41], 0);
	TextDrawBackgroundColor(ATMTD[41], 255);
	TextDrawFont(ATMTD[41], 4);
	TextDrawSetProportional(ATMTD[41], 1);
	TextDrawSetSelectable(ATMTD[41], 1);

	ATMTD[42] = TextDrawCreate(380.000, 218.000, "LD_BUM:blkdot");
	TextDrawTextSize(ATMTD[42], 23.000, 9.000);
	TextDrawAlignment(ATMTD[42], 1);
	TextDrawColor(ATMTD[42], -1);
	TextDrawSetShadow(ATMTD[42], 0);
	TextDrawSetOutline(ATMTD[42], 0);
	TextDrawBackgroundColor(ATMTD[42], 255);
	TextDrawFont(ATMTD[42], 4);
	TextDrawSetProportional(ATMTD[42], 1);
	TextDrawSetSelectable(ATMTD[42], 1);

	ATMTD[43] = TextDrawCreate(319.000, 199.000, "$10.000");
	TextDrawLetterSize(ATMTD[43], 0.128, 1.098);
	TextDrawAlignment(ATMTD[43], 1);
	TextDrawColor(ATMTD[43], -849584897);
	TextDrawSetShadow(ATMTD[43], 0);
	TextDrawSetOutline(ATMTD[43], 0);
	TextDrawBackgroundColor(ATMTD[43], 150);
	TextDrawFont(ATMTD[43], 1);
	TextDrawSetProportional(ATMTD[43], 1);

	ATMTD[44] = TextDrawCreate(348.000, 199.000, "$50.000");
	TextDrawLetterSize(ATMTD[44], 0.128, 1.098);
	TextDrawAlignment(ATMTD[44], 1);
	TextDrawColor(ATMTD[44], -849584897);
	TextDrawSetShadow(ATMTD[44], 0);
	TextDrawSetOutline(ATMTD[44], 0);
	TextDrawBackgroundColor(ATMTD[44], 150);
	TextDrawFont(ATMTD[44], 1);
	TextDrawSetProportional(ATMTD[44], 1);

	ATMTD[45] = TextDrawCreate(318.000, 217.000, "$250.000");
	TextDrawLetterSize(ATMTD[45], 0.128, 1.098);
	TextDrawAlignment(ATMTD[45], 1);
	TextDrawColor(ATMTD[45], -849584897);
	TextDrawSetShadow(ATMTD[45], 0);
	TextDrawSetOutline(ATMTD[45], 0);
	TextDrawBackgroundColor(ATMTD[45], 150);
	TextDrawFont(ATMTD[45], 1);
	TextDrawSetProportional(ATMTD[45], 1);

	ATMTD[46] = TextDrawCreate(347.000, 217.000, "$500.000");
	TextDrawLetterSize(ATMTD[46], 0.128, 1.098);
	TextDrawAlignment(ATMTD[46], 1);
	TextDrawColor(ATMTD[46], -849584897);
	TextDrawSetShadow(ATMTD[46], 0);
	TextDrawSetOutline(ATMTD[46], 0);
	TextDrawBackgroundColor(ATMTD[46], 150);
	TextDrawFont(ATMTD[46], 1);
	TextDrawSetProportional(ATMTD[46], 1);

	ATMTD[47] = TextDrawCreate(410.000, 217.000, "$500.000");
	TextDrawLetterSize(ATMTD[47], 0.128, 1.098);
	TextDrawAlignment(ATMTD[47], 1);
	TextDrawColor(ATMTD[47], -849584897);
	TextDrawSetShadow(ATMTD[47], 0);
	TextDrawSetOutline(ATMTD[47], 0);
	TextDrawBackgroundColor(ATMTD[47], 150);
	TextDrawFont(ATMTD[47], 1);
	TextDrawSetProportional(ATMTD[47], 1);

	ATMTD[48] = TextDrawCreate(381.000, 217.000, "$250.000");
	TextDrawLetterSize(ATMTD[48], 0.128, 1.098);
	TextDrawAlignment(ATMTD[48], 1);
	TextDrawColor(ATMTD[48], -849584897);
	TextDrawSetShadow(ATMTD[48], 0);
	TextDrawSetOutline(ATMTD[48], 0);
	TextDrawBackgroundColor(ATMTD[48], 150);
	TextDrawFont(ATMTD[48], 1);
	TextDrawSetProportional(ATMTD[48], 1);

	ATMTD[49] = TextDrawCreate(411.000, 199.000, "$50.000");
	TextDrawLetterSize(ATMTD[49], 0.128, 1.098);
	TextDrawAlignment(ATMTD[49], 1);
	TextDrawColor(ATMTD[49], -849584897);
	TextDrawSetShadow(ATMTD[49], 0);
	TextDrawSetOutline(ATMTD[49], 0);
	TextDrawBackgroundColor(ATMTD[49], 150);
	TextDrawFont(ATMTD[49], 1);
	TextDrawSetProportional(ATMTD[49], 1);

	ATMTD[50] = TextDrawCreate(383.000, 199.000, "$10.000");
	TextDrawLetterSize(ATMTD[50], 0.128, 1.098);
	TextDrawAlignment(ATMTD[50], 1);
	TextDrawColor(ATMTD[50], -849584897);
	TextDrawSetShadow(ATMTD[50], 0);
	TextDrawSetOutline(ATMTD[50], 0);
	TextDrawBackgroundColor(ATMTD[50], 150);
	TextDrawFont(ATMTD[50], 1);
	TextDrawSetProportional(ATMTD[50], 1);

}

CreateATMPTD(playerid)
{
	ATMPTD[playerid][0] = CreatePlayerTextDraw(playerid, 271.000, 221.000, "$10.000");
	PlayerTextDrawLetterSize(playerid, ATMPTD[playerid][0], 0.188, 1.498);
	PlayerTextDrawAlignment(playerid, ATMPTD[playerid][0], 1);
	PlayerTextDrawColor(playerid, ATMPTD[playerid][0], -1);
	PlayerTextDrawSetShadow(playerid, ATMPTD[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid, ATMPTD[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid, ATMPTD[playerid][0], 150);
	PlayerTextDrawFont(playerid, ATMPTD[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, ATMPTD[playerid][0], 1);

	ATMPTD[playerid][1] = CreatePlayerTextDraw(playerid, 248.000, 247.000, "908876");
	PlayerTextDrawLetterSize(playerid, ATMPTD[playerid][1], 0.188, 1.498);
	PlayerTextDrawAlignment(playerid, ATMPTD[playerid][1], 1);
	PlayerTextDrawColor(playerid, ATMPTD[playerid][1], -1);
	PlayerTextDrawSetShadow(playerid, ATMPTD[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid, ATMPTD[playerid][1], 0);
	PlayerTextDrawBackgroundColor(playerid, ATMPTD[playerid][1], 150);
	PlayerTextDrawFont(playerid, ATMPTD[playerid][1], 1);
	PlayerTextDrawSetProportional(playerid, ATMPTD[playerid][1], 1);

	ATMPTD[playerid][2] = CreatePlayerTextDraw(playerid, 360.000, 169.000, "$3.000");
	PlayerTextDrawLetterSize(playerid, ATMPTD[playerid][2], 0.188, 1.498);
	PlayerTextDrawAlignment(playerid, ATMPTD[playerid][2], 1);
	PlayerTextDrawColor(playerid, ATMPTD[playerid][2], -1);
	PlayerTextDrawSetShadow(playerid, ATMPTD[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid, ATMPTD[playerid][2], 0);
	PlayerTextDrawBackgroundColor(playerid, ATMPTD[playerid][2], 150);
	PlayerTextDrawFont(playerid, ATMPTD[playerid][2], 1);
	PlayerTextDrawSetProportional(playerid, ATMPTD[playerid][2], 1);	

	ATMPTD[playerid][3] = CreatePlayerTextDraw(playerid, 217.000, 227.000, "Vyn Yutup");
	PlayerTextDrawLetterSize(playerid, ATMPTD[playerid][3], 0.148, 0.898);
	PlayerTextDrawAlignment(playerid, ATMPTD[playerid][3], 1);
	PlayerTextDrawColor(playerid, ATMPTD[playerid][3], -1);
	PlayerTextDrawSetShadow(playerid, ATMPTD[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid, ATMPTD[playerid][3], 0);
	PlayerTextDrawBackgroundColor(playerid, ATMPTD[playerid][3], 150);
	PlayerTextDrawFont(playerid, ATMPTD[playerid][3], 1);
	PlayerTextDrawSetProportional(playerid, ATMPTD[playerid][3], 1);

}

ShowATMTD(playerid)
{
	HideHBETD(playerid);
	HideStatsTD(playerid);
	//HideRadioVoiceInfoTD(playerid);
	HideServerNameTD(playerid);

    for(new x; x < 51; x++)
    {
        TextDrawShowForPlayer(playerid, ATMTD[x]);
    }

    PlayerTextDrawSetString(playerid, ATMPTD[playerid][0], sprintf("$%s", FormatMoney(AccountData[playerid][pBankMoney])));
    PlayerTextDrawSetString(playerid, ATMPTD[playerid][1], sprintf("%d", AccountData[playerid][pBankNumber]));
	PlayerTextDrawSetString(playerid, ATMPTD[playerid][2], sprintf("$%s", FormatMoney(AccountData[playerid][pMoney])));
    PlayerTextDrawSetString(playerid, ATMPTD[playerid][3], sprintf("%s", AccountData[playerid][pName]));

    PlayerTextDrawShow(playerid, ATMPTD[playerid][0]);
    PlayerTextDrawShow(playerid, ATMPTD[playerid][1]);
    PlayerTextDrawShow(playerid, ATMPTD[playerid][2]);
    PlayerTextDrawShow(playerid, ATMPTD[playerid][3]);

    SelectTextDraw(playerid, 0xff91a4cc);
    return 1;
}

HideATMTD(playerid)
{
    for(new x; x < 51; x++)
    {
        TextDrawHideForPlayer(playerid, ATMTD[x]);
    }

    PlayerTextDrawHide(playerid, ATMPTD[playerid][0]);
    PlayerTextDrawHide(playerid, ATMPTD[playerid][1]);
    PlayerTextDrawHide(playerid, ATMPTD[playerid][2]);
    PlayerTextDrawHide(playerid, ATMPTD[playerid][3]);

	ShowHBETD(playerid);
	ShowStatsTD(playerid);
	
	ShowServerNameTD(playerid);

    CancelSelectTextDraw(playerid);
    return 1;
}