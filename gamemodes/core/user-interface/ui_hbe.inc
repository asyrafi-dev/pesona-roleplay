new MakanCircle[MAX_PLAYERS];
new MinumCircle[MAX_PLAYERS];
new StressCircle[MAX_PLAYERS];
new Text: CircleHbe[12];

new Text:StressTD;

CreateHBETextdraw()
{
	//V1
	CircleHbe[0] = TextDrawCreate(283.000, 424.000, "LD_BEAT:chit");
	TextDrawTextSize(CircleHbe[0], 20.000, 20.000);
	TextDrawAlignment(CircleHbe[0], 1);
	TextDrawColor(CircleHbe[0], 255);
	TextDrawSetShadow(CircleHbe[0], 0);
	TextDrawSetOutline(CircleHbe[0], 0);
	TextDrawBackgroundColor(CircleHbe[0], 255);
	TextDrawFont(CircleHbe[0], 4);
	TextDrawSetProportional(CircleHbe[0], 1);

	CircleHbe[1] = TextDrawCreate(305.000, 424.000, "LD_BEAT:chit");
	TextDrawTextSize(CircleHbe[1], 21.000, 20.000);
	TextDrawAlignment(CircleHbe[1], 1);
	TextDrawColor(CircleHbe[1], 255);
	TextDrawSetShadow(CircleHbe[1], 0);
	TextDrawSetOutline(CircleHbe[1], 0);
	TextDrawBackgroundColor(CircleHbe[1], 255);
	TextDrawFont(CircleHbe[1], 4);
	TextDrawSetProportional(CircleHbe[1], 1);

	CircleHbe[2] = TextDrawCreate(327.000, 424.000, "LD_BEAT:chit");
	TextDrawTextSize(CircleHbe[2], 21.000, 20.000);
	TextDrawAlignment(CircleHbe[2], 1);
	TextDrawColor(CircleHbe[2], 255);
	TextDrawSetShadow(CircleHbe[2], 0);
	TextDrawSetOutline(CircleHbe[2], 0);
	TextDrawBackgroundColor(CircleHbe[2], 255);
	TextDrawFont(CircleHbe[2], 4);
	TextDrawSetProportional(CircleHbe[2], 1);

	CircleHbe[3] = TextDrawCreate(287.000, 428.000, "LD_BEAT:chit");
	TextDrawTextSize(CircleHbe[3], 12.000, 7.000);
	TextDrawAlignment(CircleHbe[3], 1);
	TextDrawColor(CircleHbe[3], -1);
	TextDrawSetShadow(CircleHbe[3], 0);
	TextDrawSetOutline(CircleHbe[3], 0);
	TextDrawBackgroundColor(CircleHbe[3], 255);
	TextDrawFont(CircleHbe[3], 4);
	TextDrawSetProportional(CircleHbe[3], 1);

	CircleHbe[4] = TextDrawCreate(287.000, 434.000, "LD_BEAT:chit");
	TextDrawTextSize(CircleHbe[4], 12.000, 4.000);
	TextDrawAlignment(CircleHbe[4], 1);
	TextDrawColor(CircleHbe[4], -1);
	TextDrawSetShadow(CircleHbe[4], 0);
	TextDrawSetOutline(CircleHbe[4], 0);
	TextDrawBackgroundColor(CircleHbe[4], 255);
	TextDrawFont(CircleHbe[4], 4);
	TextDrawSetProportional(CircleHbe[4], 1);

	CircleHbe[5] = TextDrawCreate(292.000, 430.000, "LD_BEAT:chit");
	TextDrawTextSize(CircleHbe[5], 4.000, 3.000);
	TextDrawAlignment(CircleHbe[5], 1);
	TextDrawColor(CircleHbe[5], 255);
	TextDrawSetShadow(CircleHbe[5], 0);
	TextDrawSetOutline(CircleHbe[5], 0);
	TextDrawBackgroundColor(CircleHbe[5], 255);
	TextDrawFont(CircleHbe[5], 4);
	TextDrawSetProportional(CircleHbe[5], 1);

	CircleHbe[6] = TextDrawCreate(312.000, 430.000, "LD_SPAC:white");
	TextDrawTextSize(CircleHbe[6], 5.000, 8.000);
	TextDrawAlignment(CircleHbe[6], 1);
	TextDrawColor(CircleHbe[6], -1);
	TextDrawSetShadow(CircleHbe[6], 0);
	TextDrawSetOutline(CircleHbe[6], 0);
	TextDrawBackgroundColor(CircleHbe[6], 255);
	TextDrawFont(CircleHbe[6], 4);
	TextDrawSetProportional(CircleHbe[6], 1);

	CircleHbe[7] = TextDrawCreate(315.000, 431.000, "LD_SPAC:white");
	TextDrawTextSize(CircleHbe[7], 3.000, 1.000);
	TextDrawAlignment(CircleHbe[7], 1);
	TextDrawColor(CircleHbe[7], -1);
	TextDrawSetShadow(CircleHbe[7], 0);
	TextDrawSetOutline(CircleHbe[7], 0);
	TextDrawBackgroundColor(CircleHbe[7], 255);
	TextDrawFont(CircleHbe[7], 4);
	TextDrawSetProportional(CircleHbe[7], 1);

	CircleHbe[8] = TextDrawCreate(316.000, 435.000, "LD_SPAC:white");
	TextDrawTextSize(CircleHbe[8], 3.000, 1.000);
	TextDrawAlignment(CircleHbe[8], 1);
	TextDrawColor(CircleHbe[8], -1);
	TextDrawSetShadow(CircleHbe[8], 0);
	TextDrawSetOutline(CircleHbe[8], 0);
	TextDrawBackgroundColor(CircleHbe[8], 255);
	TextDrawFont(CircleHbe[8], 4);
	TextDrawSetProportional(CircleHbe[8], 1);

	CircleHbe[9] = TextDrawCreate(318.000, 435.000, "LD_SPAC:white");
	TextDrawTextSize(CircleHbe[9], 1.000, -4.000);
	TextDrawAlignment(CircleHbe[9], 1);
	TextDrawColor(CircleHbe[9], -1);
	TextDrawSetShadow(CircleHbe[9], 0);
	TextDrawSetOutline(CircleHbe[9], 0);
	TextDrawBackgroundColor(CircleHbe[9], 255);
	TextDrawFont(CircleHbe[9], 4);
	TextDrawSetProportional(CircleHbe[9], 1);

	CircleHbe[10] = TextDrawCreate(313.000, 430.000, "LD_SPAC:white");
	TextDrawTextSize(CircleHbe[10], 3.000, 2.000);
	TextDrawAlignment(CircleHbe[10], 1);
	TextDrawColor(CircleHbe[10], 255);
	TextDrawSetShadow(CircleHbe[10], 0);
	TextDrawSetOutline(CircleHbe[10], 0);
	TextDrawBackgroundColor(CircleHbe[10], 255);
	TextDrawFont(CircleHbe[10], 4);
	TextDrawSetProportional(CircleHbe[10], 1);

	CircleHbe[11] = TextDrawCreate(331.000, 428.000, "HUD:radar_centre");
	TextDrawTextSize(CircleHbe[11], 13.000, 10.000);
	TextDrawAlignment(CircleHbe[11], 1);
	TextDrawColor(CircleHbe[11], -1);
	TextDrawSetShadow(CircleHbe[11], 0);
	TextDrawSetOutline(CircleHbe[11], 0);
	TextDrawBackgroundColor(CircleHbe[11], 255);
	TextDrawFont(CircleHbe[11], 4);
	TextDrawSetProportional(CircleHbe[11], 1);
}

CreateStressTD()
{
    StressTD = TextDrawCreate(322.000000, -1.000000, "_");
    TextDrawFont(StressTD, true);
    TextDrawLetterSize(StressTD, 0.600000, 56.800003);
    TextDrawTextSize(StressTD, 298.500000, 675.000000);
    TextDrawSetOutline(StressTD, true);
    TextDrawSetShadow(StressTD, false);
    TextDrawAlignment(StressTD, 2);
    TextDrawColor(StressTD, -1);
    TextDrawBackgroundColor(StressTD,  155);
    TextDrawBoxColor(StressTD, 35634);
    TextDrawUseBox(StressTD, true);
    TextDrawSetProportional(StressTD, true);
    TextDrawSetSelectable(StressTD, false);
}

//V1
ShowHBETD(playerid)
{
   	for(new i = 0; i < 12; i++)
 	{
  		TextDrawShowForPlayer(playerid, CircleHbe[i]);
  	}
  	MakanCircle[playerid] = ShowCircleMakan(playerid, 292.500, 426.259, 0xFFA500FF, 0, 7.0, 0.4, 10.0);
    MinumCircle[playerid] = ShowCircleMinum(playerid, 314.500, 426.259, 5742847, 0, 7.0, 0.4, 10.0);
    StressCircle[playerid] = ShowCircleStress(playerid, 336.500, 426.259, 0xFF0000FF, 0, 7.0, 0.4, 10.0);
	//ShowStatsTD(playerid);
	ShowRadioVoiceInfoTD(playerid);
	HBETDHidden[playerid] = false;
}

HideHBETD(playerid)
{
    for(new x; x < 12; x++)
	{
        TextDrawHideForPlayer(playerid, CircleHbe[x]);
    }
    DestroyPlayerCircleProgressAll(playerid);
	//HideStatsTD(playerid);
	HideRadioVoiceInfoTD(playerid);
	HBETDHidden[playerid] = true;
}

ShowStressEffectTD(playerid)
{
    TextDrawShowForPlayer(playerid, StressTD);
}

HideStressEffectTD(playerid)
{
    TextDrawHideForPlayer(playerid, StressTD);
}