new 
	Text:NotifBoxTD[3],
	Text:GlobalFooterTD,
 	PlayerText:pNotifBoxTD[MAX_PLAYERS],
	PlayerText:FooterTD[MAX_PLAYERS],
	PlayerText:SpecInfoTD[MAX_PLAYERS],
	PlayerText:pJobMixTD[MAX_PLAYERS][10],
	PlayerText: NEXOTIS_GovTD[MAX_PLAYERS][11],
	Text:GInsurance[3],
	Text:AnnounceTD[3],
	Text:JobMixTD[11],
	Text:AreaSantaiTD[4],
	PlayerBar:pSlumpMeter[MAX_PLAYERS];

CreateInfoTextdraw()
{
	//------------------------
	AreaSantaiTD[0] = TextDrawCreate(520.000000, 100.000000, "ld_dual:white");
	TextDrawFont(AreaSantaiTD[0], 4);
	TextDrawLetterSize(AreaSantaiTD[0], 0.600000, 2.000000);
	TextDrawTextSize(AreaSantaiTD[0], 67.500000, 23.000000);
	TextDrawSetOutline(AreaSantaiTD[0], 1);
	TextDrawSetShadow(AreaSantaiTD[0], 0);
	TextDrawAlignment(AreaSantaiTD[0], 1);
	TextDrawColor(AreaSantaiTD[0], -7232257);
	TextDrawBackgroundColor(AreaSantaiTD[0], 255);
	TextDrawBoxColor(AreaSantaiTD[0], 50);
	TextDrawUseBox(AreaSantaiTD[0], 1);
	TextDrawSetProportional(AreaSantaiTD[0], 1);
	TextDrawSetSelectable(AreaSantaiTD[0], 0);

	AreaSantaiTD[1] = TextDrawCreate(563.000000, 105.000000, "Area Santai");
	TextDrawFont(AreaSantaiTD[1], 1);
	TextDrawLetterSize(AreaSantaiTD[1], 0.200000, 1.149999);
	TextDrawTextSize(AreaSantaiTD[1], 400.000000, 77.000000);
	TextDrawSetOutline(AreaSantaiTD[1], 0);
	TextDrawSetShadow(AreaSantaiTD[1], 0);
	TextDrawAlignment(AreaSantaiTD[1], 2);
	TextDrawColor(AreaSantaiTD[1], 9145343);
	TextDrawBackgroundColor(AreaSantaiTD[1], 255);
	TextDrawBoxColor(AreaSantaiTD[1], 50);
	TextDrawUseBox(AreaSantaiTD[1], 0);
	TextDrawSetProportional(AreaSantaiTD[1], 1);
	TextDrawSetSelectable(AreaSantaiTD[1], 0);

	AreaSantaiTD[2] = TextDrawCreate(526.000000, 103.000000, "HUD:radar_gangn");
	TextDrawFont(AreaSantaiTD[2], 4);
	TextDrawLetterSize(AreaSantaiTD[2], 0.600000, 2.000000);
	TextDrawTextSize(AreaSantaiTD[2], 15.000000, 15.000000);
	TextDrawSetOutline(AreaSantaiTD[2], 1);
	TextDrawSetShadow(AreaSantaiTD[2], 0);
	TextDrawAlignment(AreaSantaiTD[2], 1);
	TextDrawColor(AreaSantaiTD[2], -1);
	TextDrawBackgroundColor(AreaSantaiTD[2], 255);
	TextDrawBoxColor(AreaSantaiTD[2], 50);
	TextDrawUseBox(AreaSantaiTD[2], 1);
	TextDrawSetProportional(AreaSantaiTD[2], 1);
	TextDrawSetSelectable(AreaSantaiTD[2], 0);

	AreaSantaiTD[3] = TextDrawCreate(520.000000, 100.000000, "ld_dual:white");
	TextDrawFont(AreaSantaiTD[3], 4);
	TextDrawLetterSize(AreaSantaiTD[3], 0.600000, 2.000000);
	TextDrawTextSize(AreaSantaiTD[3], 3.000000, 23.000000);
	TextDrawSetOutline(AreaSantaiTD[3], 1);
	TextDrawSetShadow(AreaSantaiTD[3], 0);
	TextDrawAlignment(AreaSantaiTD[3], 1);
	TextDrawColor(AreaSantaiTD[3], 9145343);
	TextDrawBackgroundColor(AreaSantaiTD[3], 255);
	TextDrawBoxColor(AreaSantaiTD[3], 50);
	TextDrawUseBox(AreaSantaiTD[3], 1);
	TextDrawSetProportional(AreaSantaiTD[3], 1);
	TextDrawSetSelectable(AreaSantaiTD[3], 0);

	//------------------------
	NotifBoxTD[0] = TextDrawCreate(7.000000, 211.000000, "ld_dual:white");
	TextDrawFont(NotifBoxTD[0], 4);
	TextDrawLetterSize(NotifBoxTD[0], 0.600000, 2.000000);
	TextDrawTextSize(NotifBoxTD[0], 113.000000, 20.000000);
	TextDrawSetOutline(NotifBoxTD[0], 1);
	TextDrawSetShadow(NotifBoxTD[0], 0);
	TextDrawAlignment(NotifBoxTD[0], 1);
	TextDrawColor(NotifBoxTD[0], 0x000000ff);
	TextDrawBackgroundColor(NotifBoxTD[0], 255);
	TextDrawBoxColor(NotifBoxTD[0], 50);
	TextDrawUseBox(NotifBoxTD[0], 1);
	TextDrawSetProportional(NotifBoxTD[0], 1);
	TextDrawSetSelectable(NotifBoxTD[0], 0);

	NotifBoxTD[1] = TextDrawCreate(10.000000, 215.000000, "ld_dual:white");
	TextDrawFont(NotifBoxTD[1], 4);
	TextDrawLetterSize(NotifBoxTD[1], 0.600000, 2.000000);
	TextDrawTextSize(NotifBoxTD[1], 113.000000, 20.000000);
	TextDrawSetOutline(NotifBoxTD[1], 1);
	TextDrawSetShadow(NotifBoxTD[1], 0);
	TextDrawAlignment(NotifBoxTD[1], 1);
	TextDrawColor(NotifBoxTD[1], 0xff91a4ff);
	TextDrawBackgroundColor(NotifBoxTD[1], 255);
	TextDrawBoxColor(NotifBoxTD[1], 50);
	TextDrawUseBox(NotifBoxTD[1], 1);
	TextDrawSetProportional(NotifBoxTD[1], 1);
	TextDrawSetSelectable(NotifBoxTD[1], 0);

	NotifBoxTD[2] = TextDrawCreate(15.000000, 217.000000, "ld_chat:badchat");
	TextDrawFont(NotifBoxTD[2], 4);
	TextDrawLetterSize(NotifBoxTD[2], 0.600000, 2.000000);
	TextDrawTextSize(NotifBoxTD[2], 11.500000, 14.000000);
	TextDrawSetOutline(NotifBoxTD[2], 1);
	TextDrawSetShadow(NotifBoxTD[2], 0);
	TextDrawAlignment(NotifBoxTD[2], 1);
	TextDrawColor(NotifBoxTD[2], 0xffffffcc);
	TextDrawBackgroundColor(NotifBoxTD[2], 255);
	TextDrawBoxColor(NotifBoxTD[2], 50);
	TextDrawUseBox(NotifBoxTD[2], 1);
	TextDrawSetProportional(NotifBoxTD[2], 1);
	TextDrawSetSelectable(NotifBoxTD[2], 0);

	GlobalFooterTD = TextDrawCreate(320.000000, 352.000000, "~r~ID: 100~n~~r~Type: ~w~Medium House~n~~r~Owner: ~y~Aaaaaaaaaa_Bbbbbbbbbbbbb~n~~r~Loc: ~w~Tierra Robada");
	TextDrawFont(GlobalFooterTD, 1);
	TextDrawLetterSize(GlobalFooterTD, 0.225000, 1.599999);
	TextDrawTextSize(GlobalFooterTD, 398.000000, 164.000000);
	TextDrawSetOutline(GlobalFooterTD, true);
	TextDrawSetShadow(GlobalFooterTD, false);
	TextDrawAlignment(GlobalFooterTD, 2);
	TextDrawColor(GlobalFooterTD, -1);
	TextDrawBackgroundColor(GlobalFooterTD, 255);
	TextDrawBoxColor(GlobalFooterTD, 179);
	TextDrawUseBox(GlobalFooterTD, false);
	TextDrawSetProportional(GlobalFooterTD, true);
	TextDrawSetSelectable(GlobalFooterTD, false);

	GInsurance[0] = TextDrawCreate(448.000000, 5.000000, "ld_dual:white");
	TextDrawFont(GInsurance[0], 4);
	TextDrawLetterSize(GInsurance[0], 0.600000, 2.000000);
	TextDrawTextSize(GInsurance[0], 102.500000, 12.500000);
	TextDrawSetOutline(GInsurance[0], 1);
	TextDrawSetShadow(GInsurance[0], 0);
	TextDrawAlignment(GInsurance[0], 1);
	TextDrawColor(GInsurance[0], 150);
	TextDrawBackgroundColor(GInsurance[0], 255);
	TextDrawBoxColor(GInsurance[0], 50);
	TextDrawUseBox(GInsurance[0], 1);
	TextDrawSetProportional(GInsurance[0], 1);
	TextDrawSetSelectable(GInsurance[0], 0);

	GInsurance[1] = TextDrawCreate(456.000000, 7.000000, "Asuransi keliling 2 menit 30 detik");
	TextDrawFont(GInsurance[1], 1);
	TextDrawLetterSize(GInsurance[1], 0.158333, 0.899999);
	TextDrawTextSize(GInsurance[1], 595.000000, 17.000000);
	TextDrawSetOutline(GInsurance[1], 0);
	TextDrawSetShadow(GInsurance[1], 0);
	TextDrawAlignment(GInsurance[1], 1);
	TextDrawColor(GInsurance[1], -1);
	TextDrawBackgroundColor(GInsurance[1], 255);
	TextDrawBoxColor(GInsurance[1], 50);
	TextDrawUseBox(GInsurance[1], 0);
	TextDrawSetProportional(GInsurance[1], 1);
	TextDrawSetSelectable(GInsurance[1], 0);

	GInsurance[2] = TextDrawCreate(448.000000, 5.000000, "ld_dual:white");
	TextDrawFont(GInsurance[2], 4);
	TextDrawLetterSize(GInsurance[2], 0.600000, 2.000000);
	TextDrawTextSize(GInsurance[2], 2.500000, 12.500000);
	TextDrawSetOutline(GInsurance[2], 1);
	TextDrawSetShadow(GInsurance[2], 0);
	TextDrawAlignment(GInsurance[2], 1);
	TextDrawColor(GInsurance[2], 0xff91a4e6);
	TextDrawBackgroundColor(GInsurance[2], 255);
	TextDrawBoxColor(GInsurance[2], 50);
	TextDrawUseBox(GInsurance[2], 1);
	TextDrawSetProportional(GInsurance[2], 1);
	TextDrawSetSelectable(GInsurance[2], 0);
}

CreateAnnounceTD()
{
	AnnounceTD[0] = TextDrawCreate(-4.000, 175.000, "LD_BUM:blkdot");
	TextDrawTextSize(AnnounceTD[0], 648.000, 90.000);
	TextDrawAlignment(AnnounceTD[0], 1);
	TextDrawColor(AnnounceTD[0], 200);
	TextDrawSetShadow(AnnounceTD[0], 0);
	TextDrawSetOutline(AnnounceTD[0], 0);
	TextDrawBackgroundColor(AnnounceTD[0], 255);
	TextDrawFont(AnnounceTD[0], 4);
	TextDrawSetProportional(AnnounceTD[0], 1);

	AnnounceTD[1] = TextDrawCreate(319.000, 195.000, "pengumuman");
	TextDrawLetterSize(AnnounceTD[1], 0.597, 3.098);
	TextDrawAlignment(AnnounceTD[1], 2);
	TextDrawColor(AnnounceTD[1], -39681);
	TextDrawSetShadow(AnnounceTD[1], 1);
	TextDrawSetOutline(AnnounceTD[1], 1);
	TextDrawBackgroundColor(AnnounceTD[1], 0);
	TextDrawFont(AnnounceTD[1], 3);
	TextDrawSetProportional(AnnounceTD[1], 1);

	AnnounceTD[2] = TextDrawCreate(319.000, 229.000, "Amaksmdkasmdam kamdkasmdkamkmkmkmkmk amsdkam kamksdmaksdmaks maksdmka smdkasm dkasmdk amskdmkasmkamsdamskdamk amskdamskdamskdma");
	TextDrawLetterSize(AnnounceTD[2], 0.170, 0.999);
	TextDrawAlignment(AnnounceTD[2], 2);
	TextDrawColor(AnnounceTD[2], -1);
	TextDrawSetShadow(AnnounceTD[2], 1);
	TextDrawSetOutline(AnnounceTD[2], 1);
	TextDrawBackgroundColor(AnnounceTD[2], 0);
	TextDrawFont(AnnounceTD[2], 1);
	TextDrawSetProportional(AnnounceTD[2], 1);
}

CreateInfoTextDrawPlayer(playerid)
{
	pNotifBoxTD[playerid] = CreatePlayerTextDraw(playerid, 30.000000, 220.000000, "Tekan 'Y' Akses Garasi Kota");
	PlayerTextDrawFont(playerid, pNotifBoxTD[playerid], 1);
	PlayerTextDrawLetterSize(playerid, pNotifBoxTD[playerid], 0.187500, 0.950000);
	PlayerTextDrawTextSize(playerid, pNotifBoxTD[playerid], 117.500000, 17.000000);
	PlayerTextDrawSetOutline(playerid, pNotifBoxTD[playerid], false);
	PlayerTextDrawSetShadow(playerid, pNotifBoxTD[playerid], false);
	PlayerTextDrawAlignment(playerid, pNotifBoxTD[playerid], true);
	PlayerTextDrawColor(playerid, pNotifBoxTD[playerid], 0xffffffff);
	PlayerTextDrawBackgroundColor(playerid, pNotifBoxTD[playerid], 255);
	PlayerTextDrawBoxColor(playerid, pNotifBoxTD[playerid], 50);
	PlayerTextDrawUseBox(playerid, pNotifBoxTD[playerid], false);
	PlayerTextDrawSetProportional(playerid, pNotifBoxTD[playerid], true);
	PlayerTextDrawSetSelectable(playerid, pNotifBoxTD[playerid], false);

	SpecInfoTD[playerid] = CreatePlayerTextDraw(playerid, 318.000000, 330.000000, "Michael Corleone (144)~n~HP: 100.00~n~AP: 0.0~n~Cash: $100,000.00~n~World: 70 // Int: 123~n~Keys 10 20 30~n~FPS: 120 // Ping: 20");
	PlayerTextDrawFont(playerid, SpecInfoTD[playerid], 1);
	PlayerTextDrawLetterSize(playerid, SpecInfoTD[playerid], 0.300000, 1.500000);
	PlayerTextDrawTextSize(playerid, SpecInfoTD[playerid], 400.000000, 180.000000);
	PlayerTextDrawSetOutline(playerid, SpecInfoTD[playerid], 1);
	PlayerTextDrawSetShadow(playerid, SpecInfoTD[playerid], 0);
	PlayerTextDrawAlignment(playerid, SpecInfoTD[playerid], 2);
	PlayerTextDrawColor(playerid, SpecInfoTD[playerid], -1);
	PlayerTextDrawBackgroundColor(playerid, SpecInfoTD[playerid], 255);
	PlayerTextDrawBoxColor(playerid, SpecInfoTD[playerid], 190);
	PlayerTextDrawUseBox(playerid, SpecInfoTD[playerid], 1);
	PlayerTextDrawSetProportional(playerid, SpecInfoTD[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, SpecInfoTD[playerid], 0);
}

CreateFooterTD(playerid)
{
	FooterTD[playerid] = CreatePlayerTextDraw(playerid, 325.666625, 400.5, "_");
    PlayerTextDrawLetterSize(playerid, FooterTD[playerid], 0.400000, 1.600000);
    PlayerTextDrawAlignment(playerid, FooterTD[playerid], 2);
    PlayerTextDrawColor(playerid, FooterTD[playerid], 0xe8e8e8ff);
    PlayerTextDrawSetShadow(playerid, FooterTD[playerid], 2);
    PlayerTextDrawSetOutline(playerid, FooterTD[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, FooterTD[playerid], 255);
    PlayerTextDrawFont(playerid, FooterTD[playerid], 1);
    PlayerTextDrawSetProportional(playerid, FooterTD[playerid], 1);
    PlayerTextDrawSetShadow(playerid, FooterTD[playerid], 1);
    PlayerTextDrawShow(playerid, FooterTD[playerid]);
}

CreateGovTD(playerid)
{
	NEXOTIS_GovTD[playerid][0] = CreatePlayerTextDraw(playerid, 358.000, 171.000, "LD_SPAC:white");
	PlayerTextDrawTextSize(playerid, NEXOTIS_GovTD[playerid][0], 76.000, 15.000);
	PlayerTextDrawAlignment(playerid, NEXOTIS_GovTD[playerid][0], 1);
	PlayerTextDrawColor(playerid, NEXOTIS_GovTD[playerid][0], -377187329);
	PlayerTextDrawSetShadow(playerid, NEXOTIS_GovTD[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid, NEXOTIS_GovTD[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid, NEXOTIS_GovTD[playerid][0], 255);
	PlayerTextDrawFont(playerid, NEXOTIS_GovTD[playerid][0], 4);
	PlayerTextDrawSetProportional(playerid, NEXOTIS_GovTD[playerid][0], 1);

	NEXOTIS_GovTD[playerid][1] = CreatePlayerTextDraw(playerid, 360.000, 174.000, "Menu Pemerintah");
	PlayerTextDrawLetterSize(playerid, NEXOTIS_GovTD[playerid][1], 0.168, 0.898);
	PlayerTextDrawTextSize(playerid, NEXOTIS_GovTD[playerid][1], 449.000, -179.000);
	PlayerTextDrawAlignment(playerid, NEXOTIS_GovTD[playerid][1], 1);
	PlayerTextDrawColor(playerid, NEXOTIS_GovTD[playerid][1], -1);
	PlayerTextDrawSetShadow(playerid, NEXOTIS_GovTD[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid, NEXOTIS_GovTD[playerid][1], 0);
	PlayerTextDrawBackgroundColor(playerid, NEXOTIS_GovTD[playerid][1], 150);
	PlayerTextDrawFont(playerid, NEXOTIS_GovTD[playerid][1], 1);
	PlayerTextDrawSetProportional(playerid, NEXOTIS_GovTD[playerid][1], 1);

	NEXOTIS_GovTD[playerid][2] = CreatePlayerTextDraw(playerid, 360.000, 194.000, "Untuk Mengambil Pekerjaan");
	PlayerTextDrawLetterSize(playerid, NEXOTIS_GovTD[playerid][2], 0.098, 0.797);
	PlayerTextDrawTextSize(playerid, NEXOTIS_GovTD[playerid][2], 467.000, -179.000);
	PlayerTextDrawAlignment(playerid, NEXOTIS_GovTD[playerid][2], 1);
	PlayerTextDrawColor(playerid, NEXOTIS_GovTD[playerid][2], -1);
	PlayerTextDrawSetShadow(playerid, NEXOTIS_GovTD[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid, NEXOTIS_GovTD[playerid][2], 0);
	PlayerTextDrawBackgroundColor(playerid, NEXOTIS_GovTD[playerid][2], 150);
	PlayerTextDrawFont(playerid, NEXOTIS_GovTD[playerid][2], 1);
	PlayerTextDrawSetProportional(playerid, NEXOTIS_GovTD[playerid][2], 1);

	NEXOTIS_GovTD[playerid][3] = CreatePlayerTextDraw(playerid, 358.000, 188.000, "LD_SPAC:white");
	PlayerTextDrawTextSize(playerid, NEXOTIS_GovTD[playerid][3], 76.000, 15.000);
	PlayerTextDrawAlignment(playerid, NEXOTIS_GovTD[playerid][3], 1);
	PlayerTextDrawColor(playerid, NEXOTIS_GovTD[playerid][3], -377187329);
	PlayerTextDrawSetShadow(playerid, NEXOTIS_GovTD[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid, NEXOTIS_GovTD[playerid][3], 0);
	PlayerTextDrawBackgroundColor(playerid, NEXOTIS_GovTD[playerid][3], 255);
	PlayerTextDrawFont(playerid, NEXOTIS_GovTD[playerid][3], 4);
	PlayerTextDrawSetProportional(playerid, NEXOTIS_GovTD[playerid][3], 1);
	PlayerTextDrawSetSelectable(playerid, NEXOTIS_GovTD[playerid][3], 1);

	NEXOTIS_GovTD[playerid][4] = CreatePlayerTextDraw(playerid, 360.000, 188.000, "AMBIL PEKERJAAN");
	PlayerTextDrawLetterSize(playerid, NEXOTIS_GovTD[playerid][4], 0.148, 0.797);
	PlayerTextDrawTextSize(playerid, NEXOTIS_GovTD[playerid][4], 449.000, -179.000);
	PlayerTextDrawAlignment(playerid, NEXOTIS_GovTD[playerid][4], 1);
	PlayerTextDrawColor(playerid, NEXOTIS_GovTD[playerid][4], -1);
	PlayerTextDrawSetShadow(playerid, NEXOTIS_GovTD[playerid][4], 0);
	PlayerTextDrawSetOutline(playerid, NEXOTIS_GovTD[playerid][4], 0);
	PlayerTextDrawBackgroundColor(playerid, NEXOTIS_GovTD[playerid][4], 150);
	PlayerTextDrawFont(playerid, NEXOTIS_GovTD[playerid][4], 1);
	PlayerTextDrawSetProportional(playerid, NEXOTIS_GovTD[playerid][4], 1);

	NEXOTIS_GovTD[playerid][5] = CreatePlayerTextDraw(playerid, 358.000, 205.000, "LD_SPAC:white");
	PlayerTextDrawTextSize(playerid, NEXOTIS_GovTD[playerid][5], 76.000, 15.000);
	PlayerTextDrawAlignment(playerid, NEXOTIS_GovTD[playerid][5], 1);
	PlayerTextDrawColor(playerid, NEXOTIS_GovTD[playerid][5], -377187329);
	PlayerTextDrawSetShadow(playerid, NEXOTIS_GovTD[playerid][5], 0);
	PlayerTextDrawSetOutline(playerid, NEXOTIS_GovTD[playerid][5], 0);
	PlayerTextDrawBackgroundColor(playerid, NEXOTIS_GovTD[playerid][5], 255);
	PlayerTextDrawFont(playerid, NEXOTIS_GovTD[playerid][5], 4);
	PlayerTextDrawSetProportional(playerid, NEXOTIS_GovTD[playerid][5], 1);
	PlayerTextDrawSetSelectable(playerid, NEXOTIS_GovTD[playerid][5], 1);

	NEXOTIS_GovTD[playerid][6] = CreatePlayerTextDraw(playerid, 360.000, 206.000, "MEMBUAT KTP");
	PlayerTextDrawLetterSize(playerid, NEXOTIS_GovTD[playerid][6], 0.148, 0.797);
	PlayerTextDrawTextSize(playerid, NEXOTIS_GovTD[playerid][6], 449.000, -179.000);
	PlayerTextDrawAlignment(playerid, NEXOTIS_GovTD[playerid][6], 1);
	PlayerTextDrawColor(playerid, NEXOTIS_GovTD[playerid][6], -1);
	PlayerTextDrawSetShadow(playerid, NEXOTIS_GovTD[playerid][6], 0);
	PlayerTextDrawSetOutline(playerid, NEXOTIS_GovTD[playerid][6], 0);
	PlayerTextDrawBackgroundColor(playerid, NEXOTIS_GovTD[playerid][6], 150);
	PlayerTextDrawFont(playerid, NEXOTIS_GovTD[playerid][6], 1);
	PlayerTextDrawSetProportional(playerid, NEXOTIS_GovTD[playerid][6], 1);

	NEXOTIS_GovTD[playerid][7] = CreatePlayerTextDraw(playerid, 360.000, 211.000, "Untuk Membuat Ktp");
	PlayerTextDrawLetterSize(playerid, NEXOTIS_GovTD[playerid][7], 0.098, 0.797);
	PlayerTextDrawTextSize(playerid, NEXOTIS_GovTD[playerid][7], 467.000, -179.000);
	PlayerTextDrawAlignment(playerid, NEXOTIS_GovTD[playerid][7], 1);
	PlayerTextDrawColor(playerid, NEXOTIS_GovTD[playerid][7], -1);
	PlayerTextDrawSetShadow(playerid, NEXOTIS_GovTD[playerid][7], 0);
	PlayerTextDrawSetOutline(playerid, NEXOTIS_GovTD[playerid][7], 0);
	PlayerTextDrawBackgroundColor(playerid, NEXOTIS_GovTD[playerid][7], 150);
	PlayerTextDrawFont(playerid, NEXOTIS_GovTD[playerid][7], 1);
	PlayerTextDrawSetProportional(playerid, NEXOTIS_GovTD[playerid][7], 1);

	NEXOTIS_GovTD[playerid][8] = CreatePlayerTextDraw(playerid, 358.000, 223.000, "LD_SPAC:white");
	PlayerTextDrawTextSize(playerid, NEXOTIS_GovTD[playerid][8], 76.000, 15.000);
	PlayerTextDrawAlignment(playerid, NEXOTIS_GovTD[playerid][8], 1);
	PlayerTextDrawColor(playerid, NEXOTIS_GovTD[playerid][8], -377187329);
	PlayerTextDrawSetShadow(playerid, NEXOTIS_GovTD[playerid][8], 0);
	PlayerTextDrawSetOutline(playerid, NEXOTIS_GovTD[playerid][8], 0);
	PlayerTextDrawBackgroundColor(playerid, NEXOTIS_GovTD[playerid][8], 255);
	PlayerTextDrawFont(playerid, NEXOTIS_GovTD[playerid][8], 4);
	PlayerTextDrawSetProportional(playerid, NEXOTIS_GovTD[playerid][8], 1);
	PlayerTextDrawSetSelectable(playerid, NEXOTIS_GovTD[playerid][8], 1);

	NEXOTIS_GovTD[playerid][9] = CreatePlayerTextDraw(playerid, 360.000, 226.000, "KELUAR");
	PlayerTextDrawLetterSize(playerid, NEXOTIS_GovTD[playerid][9], 0.168, 0.898);
	PlayerTextDrawTextSize(playerid, NEXOTIS_GovTD[playerid][9], 449.000, -179.000);
	PlayerTextDrawAlignment(playerid, NEXOTIS_GovTD[playerid][9], 1);
	PlayerTextDrawColor(playerid, NEXOTIS_GovTD[playerid][9], -1);
	PlayerTextDrawSetShadow(playerid, NEXOTIS_GovTD[playerid][9], 0);
	PlayerTextDrawSetOutline(playerid, NEXOTIS_GovTD[playerid][9], 0);
	PlayerTextDrawBackgroundColor(playerid, NEXOTIS_GovTD[playerid][9], 150);
	PlayerTextDrawFont(playerid, NEXOTIS_GovTD[playerid][9], 1);
	PlayerTextDrawSetProportional(playerid, NEXOTIS_GovTD[playerid][9], 1);

	NEXOTIS_GovTD[playerid][10] = CreatePlayerTextDraw(playerid, 357.000, 171.000, "LD_SPAC:white");
	PlayerTextDrawTextSize(playerid, NEXOTIS_GovTD[playerid][10], 1.000, 67.000);
	PlayerTextDrawAlignment(playerid, NEXOTIS_GovTD[playerid][10], 1);
	PlayerTextDrawColor(playerid, NEXOTIS_GovTD[playerid][10], -1);
	PlayerTextDrawSetShadow(playerid, NEXOTIS_GovTD[playerid][10], 0);
	PlayerTextDrawSetOutline(playerid, NEXOTIS_GovTD[playerid][10], 0);
	PlayerTextDrawBackgroundColor(playerid, NEXOTIS_GovTD[playerid][10], 255);
	PlayerTextDrawFont(playerid, NEXOTIS_GovTD[playerid][10], 4);
	PlayerTextDrawSetProportional(playerid, NEXOTIS_GovTD[playerid][10], 1);
    return 1;
}

stock ShowGovTD(playerid)
{
    for(new i = 0; i < 11; i++)
    {
        if(NEXOTIS_GovTD[playerid][i] != PlayerText:INVALID_TEXT_DRAW)
        {
            PlayerTextDrawShow(playerid, NEXOTIS_GovTD[playerid][i]);
        }
    }
    SelectTextDraw(playerid, 0xff91a4cc);
}

stock HideGovTD(playerid)
{
    for(new i = 0; i < 11; i++)
    {
        if(NEXOTIS_GovTD[playerid][i] != PlayerText:INVALID_TEXT_DRAW)
        {
            PlayerTextDrawHide(playerid, NEXOTIS_GovTD[playerid][i]);
        }
    }
    CancelSelectTextDraw(playerid);
}

CreateJobMixTD()
{
	JobMixTD[0] = TextDrawCreate(212.000000, 168.000000, "ld_dual:white");
	TextDrawFont(JobMixTD[0], 4);
	TextDrawLetterSize(JobMixTD[0], 0.600000, 2.000000);
	TextDrawTextSize(JobMixTD[0], 204.000000, 77.000000);
	TextDrawSetOutline(JobMixTD[0], 1);
	TextDrawSetShadow(JobMixTD[0], 0);
	TextDrawAlignment(JobMixTD[0], 1);
	TextDrawColor(JobMixTD[0], 255);
	TextDrawBackgroundColor(JobMixTD[0], 255);
	TextDrawBoxColor(JobMixTD[0], 50);
	TextDrawUseBox(JobMixTD[0], 1);
	TextDrawSetProportional(JobMixTD[0], 1);
	TextDrawSetSelectable(JobMixTD[0], 0);

	JobMixTD[1] = TextDrawCreate(242.000000, 186.000000, "SEMEN");
	TextDrawFont(JobMixTD[1], 1);
	TextDrawLetterSize(JobMixTD[1], 0.261999, 1.350000);
	TextDrawTextSize(JobMixTD[1], 400.000000, 72.000000);
	TextDrawSetOutline(JobMixTD[1], 1);
	TextDrawSetShadow(JobMixTD[1], 0);
	TextDrawAlignment(JobMixTD[1], 2);
	TextDrawColor(JobMixTD[1], -1);
	TextDrawBackgroundColor(JobMixTD[1], 255);
	TextDrawBoxColor(JobMixTD[1], 50);
	TextDrawUseBox(JobMixTD[1], 0);
	TextDrawSetProportional(JobMixTD[1], 1);
	TextDrawSetSelectable(JobMixTD[1], 0);

	JobMixTD[2] = TextDrawCreate(321.000000, 159.000000, "Job Mix");
	TextDrawFont(JobMixTD[2], 0);
	TextDrawLetterSize(JobMixTD[2], 0.425000, 2.249999);
	TextDrawTextSize(JobMixTD[2], 400.000000, 67.000000);
	TextDrawSetOutline(JobMixTD[2], 1);
	TextDrawSetShadow(JobMixTD[2], 0);
	TextDrawAlignment(JobMixTD[2], 2);
	TextDrawColor(JobMixTD[2], -1);
	TextDrawBackgroundColor(JobMixTD[2], 255);
	TextDrawBoxColor(JobMixTD[2], 50);
	TextDrawUseBox(JobMixTD[2], 0);
	TextDrawSetProportional(JobMixTD[2], 1);
	TextDrawSetSelectable(JobMixTD[2], 0);

	JobMixTD[3] = TextDrawCreate(280.000000, 186.000000, "PASIR");
	TextDrawFont(JobMixTD[3], 1);
	TextDrawLetterSize(JobMixTD[3], 0.261999, 1.350000);
	TextDrawTextSize(JobMixTD[3], 400.000000, 72.000000);
	TextDrawSetOutline(JobMixTD[3], 1);
	TextDrawSetShadow(JobMixTD[3], 0);
	TextDrawAlignment(JobMixTD[3], 2);
	TextDrawColor(JobMixTD[3], -1);
	TextDrawBackgroundColor(JobMixTD[3], 255);
	TextDrawBoxColor(JobMixTD[3], 50);
	TextDrawUseBox(JobMixTD[3], 0);
	TextDrawSetProportional(JobMixTD[3], 1);
	TextDrawSetSelectable(JobMixTD[3], 0);

	JobMixTD[4] = TextDrawCreate(317.000000, 186.000000, "KRIKIL~n~1-2");
	TextDrawFont(JobMixTD[4], 1);
	TextDrawLetterSize(JobMixTD[4], 0.261999, 1.350000);
	TextDrawTextSize(JobMixTD[4], 400.000000, 72.000000);
	TextDrawSetOutline(JobMixTD[4], 1);
	TextDrawSetShadow(JobMixTD[4], 0);
	TextDrawAlignment(JobMixTD[4], 2);
	TextDrawColor(JobMixTD[4], -1);
	TextDrawBackgroundColor(JobMixTD[4], 255);
	TextDrawBoxColor(JobMixTD[4], 50);
	TextDrawUseBox(JobMixTD[4], 0);
	TextDrawSetProportional(JobMixTD[4], 1);
	TextDrawSetSelectable(JobMixTD[4], 0);

	JobMixTD[5] = TextDrawCreate(357.000000, 186.000000, "KRIKIL~n~2-3");
	TextDrawFont(JobMixTD[5], 1);
	TextDrawLetterSize(JobMixTD[5], 0.262499, 1.350000);
	TextDrawTextSize(JobMixTD[5], 400.000000, 72.000000);
	TextDrawSetOutline(JobMixTD[5], 1);
	TextDrawSetShadow(JobMixTD[5], 0);
	TextDrawAlignment(JobMixTD[5], 2);
	TextDrawColor(JobMixTD[5], -1);
	TextDrawBackgroundColor(JobMixTD[5], 255);
	TextDrawBoxColor(JobMixTD[5], 50);
	TextDrawUseBox(JobMixTD[5], 0);
	TextDrawSetProportional(JobMixTD[5], 1);
	TextDrawSetSelectable(JobMixTD[5], 0);

	JobMixTD[6] = TextDrawCreate(390.000000, 186.000000, "AIR");
	TextDrawFont(JobMixTD[6], 1);
	TextDrawLetterSize(JobMixTD[6], 0.262499, 1.350000);
	TextDrawTextSize(JobMixTD[6], 400.000000, 72.000000);
	TextDrawSetOutline(JobMixTD[6], 1);
	TextDrawSetShadow(JobMixTD[6], 0);
	TextDrawAlignment(JobMixTD[6], 2);
	TextDrawColor(JobMixTD[6], -1);
	TextDrawBackgroundColor(JobMixTD[6], 255);
	TextDrawBoxColor(JobMixTD[6], 50);
	TextDrawUseBox(JobMixTD[6], 0);
	TextDrawSetProportional(JobMixTD[6], 1);
	TextDrawSetSelectable(JobMixTD[6], 0);

	JobMixTD[7] = TextDrawCreate(212.000000, 251.000000, "ld_dual:white");
	TextDrawFont(JobMixTD[7], 4);
	TextDrawLetterSize(JobMixTD[7], 0.600000, 2.000000);
	TextDrawTextSize(JobMixTD[7], 204.000000, 45.000000);
	TextDrawSetOutline(JobMixTD[7], 1);
	TextDrawSetShadow(JobMixTD[7], 0);
	TextDrawAlignment(JobMixTD[7], 1);
	TextDrawColor(JobMixTD[7], 255);
	TextDrawBackgroundColor(JobMixTD[7], 255);
	TextDrawBoxColor(JobMixTD[7], 50);
	TextDrawUseBox(JobMixTD[7], 1);
	TextDrawSetProportional(JobMixTD[7], 1);
	TextDrawSetSelectable(JobMixTD[7], 0);

	JobMixTD[8] = TextDrawCreate(321.000000, 246.000000, "Batching");
	TextDrawFont(JobMixTD[8], 0);
	TextDrawLetterSize(JobMixTD[8], 0.425000, 2.250000);
	TextDrawTextSize(JobMixTD[8], 69.500000, 52.000000);
	TextDrawSetOutline(JobMixTD[8], 1);
	TextDrawSetShadow(JobMixTD[8], 0);
	TextDrawAlignment(JobMixTD[8], 2);
	TextDrawColor(JobMixTD[8], -1);
	TextDrawBackgroundColor(JobMixTD[8], 255);
	TextDrawBoxColor(JobMixTD[8], 50);
	TextDrawUseBox(JobMixTD[8], 0);
	TextDrawSetProportional(JobMixTD[8], 1);
	TextDrawSetSelectable(JobMixTD[8], 0);

	JobMixTD[9] = TextDrawCreate(294.000000, 309.000000, "KONFIRMASI");
	TextDrawFont(JobMixTD[9], 1);
	TextDrawLetterSize(JobMixTD[9], 0.261999, 1.350000);
	TextDrawTextSize(JobMixTD[9], 351.500000, 13.000000);
	TextDrawSetOutline(JobMixTD[9], 1);
	TextDrawSetShadow(JobMixTD[9], 0);
	TextDrawAlignment(JobMixTD[9], 1);
	TextDrawColor(JobMixTD[9], -1);
	TextDrawBackgroundColor(JobMixTD[9], 255);
	TextDrawBoxColor(JobMixTD[9], -16776961);
	TextDrawUseBox(JobMixTD[9], 1);
	TextDrawSetProportional(JobMixTD[9], 1);
	TextDrawSetSelectable(JobMixTD[9], 1);

	JobMixTD[10] = TextDrawCreate(442.000000, 222.000000, "Slump");
	TextDrawFont(JobMixTD[10], 2);
	TextDrawLetterSize(JobMixTD[10], 0.358333, 2.000000);
	TextDrawTextSize(JobMixTD[10], 486.500000, 17.000000);
	TextDrawSetOutline(JobMixTD[10], 1);
	TextDrawSetShadow(JobMixTD[10], 0);
	TextDrawAlignment(JobMixTD[10], 1);
	TextDrawColor(JobMixTD[10], -1);
	TextDrawBackgroundColor(JobMixTD[10], 255);
	TextDrawBoxColor(JobMixTD[10], 50);
	TextDrawUseBox(JobMixTD[10], 0);
	TextDrawSetProportional(JobMixTD[10], 1);
	TextDrawSetSelectable(JobMixTD[10], 0);
}

CreatePlayerJMixTD(playerid)
{
	pJobMixTD[playerid][0] = CreatePlayerTextDraw(playerid, 242.000000, 218.000000, "1100");
	PlayerTextDrawFont(playerid, pJobMixTD[playerid][0], 1);
	PlayerTextDrawLetterSize(playerid, pJobMixTD[playerid][0], 0.261999, 1.350000);
	PlayerTextDrawTextSize(playerid, pJobMixTD[playerid][0], 400.000000, 72.000000);
	PlayerTextDrawSetOutline(playerid, pJobMixTD[playerid][0], 1);
	PlayerTextDrawSetShadow(playerid, pJobMixTD[playerid][0], 0);
	PlayerTextDrawAlignment(playerid, pJobMixTD[playerid][0], 2);
	PlayerTextDrawColor(playerid, pJobMixTD[playerid][0], -1962934017);
	PlayerTextDrawBackgroundColor(playerid, pJobMixTD[playerid][0], 255);
	PlayerTextDrawBoxColor(playerid, pJobMixTD[playerid][0], 50);
	PlayerTextDrawUseBox(playerid, pJobMixTD[playerid][0], 0);
	PlayerTextDrawSetProportional(playerid, pJobMixTD[playerid][0], 1);
	PlayerTextDrawSetSelectable(playerid, pJobMixTD[playerid][0], 0);

	pJobMixTD[playerid][1] = CreatePlayerTextDraw(playerid, 280.000000, 218.000000, "234");
	PlayerTextDrawFont(playerid, pJobMixTD[playerid][1], 1);
	PlayerTextDrawLetterSize(playerid, pJobMixTD[playerid][1], 0.261999, 1.350000);
	PlayerTextDrawTextSize(playerid, pJobMixTD[playerid][1], 400.000000, 72.000000);
	PlayerTextDrawSetOutline(playerid, pJobMixTD[playerid][1], 1);
	PlayerTextDrawSetShadow(playerid, pJobMixTD[playerid][1], 0);
	PlayerTextDrawAlignment(playerid, pJobMixTD[playerid][1], 2);
	PlayerTextDrawColor(playerid, pJobMixTD[playerid][1], -1962934017);
	PlayerTextDrawBackgroundColor(playerid, pJobMixTD[playerid][1], 255);
	PlayerTextDrawBoxColor(playerid, pJobMixTD[playerid][1], 50);
	PlayerTextDrawUseBox(playerid, pJobMixTD[playerid][1], 0);
	PlayerTextDrawSetProportional(playerid, pJobMixTD[playerid][1], 1);
	PlayerTextDrawSetSelectable(playerid, pJobMixTD[playerid][1], 0);

	pJobMixTD[playerid][2] = CreatePlayerTextDraw(playerid, 317.000000, 218.000000, "400");
	PlayerTextDrawFont(playerid, pJobMixTD[playerid][2], 1);
	PlayerTextDrawLetterSize(playerid, pJobMixTD[playerid][2], 0.261999, 1.350000);
	PlayerTextDrawTextSize(playerid, pJobMixTD[playerid][2], 400.000000, 72.000000);
	PlayerTextDrawSetOutline(playerid, pJobMixTD[playerid][2], 1);
	PlayerTextDrawSetShadow(playerid, pJobMixTD[playerid][2], 0);
	PlayerTextDrawAlignment(playerid, pJobMixTD[playerid][2], 2);
	PlayerTextDrawColor(playerid, pJobMixTD[playerid][2], -1962934017);
	PlayerTextDrawBackgroundColor(playerid, pJobMixTD[playerid][2], 255);
	PlayerTextDrawBoxColor(playerid, pJobMixTD[playerid][2], 50);
	PlayerTextDrawUseBox(playerid, pJobMixTD[playerid][2], 0);
	PlayerTextDrawSetProportional(playerid, pJobMixTD[playerid][2], 1);
	PlayerTextDrawSetSelectable(playerid, pJobMixTD[playerid][2], 0);

	pJobMixTD[playerid][3] = CreatePlayerTextDraw(playerid, 357.000000, 218.000000, "332");
	PlayerTextDrawFont(playerid, pJobMixTD[playerid][3], 1);
	PlayerTextDrawLetterSize(playerid, pJobMixTD[playerid][3], 0.261999, 1.350000);
	PlayerTextDrawTextSize(playerid, pJobMixTD[playerid][3], 400.000000, 72.000000);
	PlayerTextDrawSetOutline(playerid, pJobMixTD[playerid][3], 1);
	PlayerTextDrawSetShadow(playerid, pJobMixTD[playerid][3], 0);
	PlayerTextDrawAlignment(playerid, pJobMixTD[playerid][3], 2);
	PlayerTextDrawColor(playerid, pJobMixTD[playerid][3], -1962934017);
	PlayerTextDrawBackgroundColor(playerid, pJobMixTD[playerid][3], 255);
	PlayerTextDrawBoxColor(playerid, pJobMixTD[playerid][3], 50);
	PlayerTextDrawUseBox(playerid, pJobMixTD[playerid][3], 0);
	PlayerTextDrawSetProportional(playerid, pJobMixTD[playerid][3], 1);
	PlayerTextDrawSetSelectable(playerid, pJobMixTD[playerid][3], 0);

	pJobMixTD[playerid][4] = CreatePlayerTextDraw(playerid, 390.000000, 218.000000, "762");
	PlayerTextDrawFont(playerid, pJobMixTD[playerid][4], 1);
	PlayerTextDrawLetterSize(playerid, pJobMixTD[playerid][4], 0.261999, 1.350000);
	PlayerTextDrawTextSize(playerid, pJobMixTD[playerid][4], 400.000000, 72.000000);
	PlayerTextDrawSetOutline(playerid, pJobMixTD[playerid][4], 1);
	PlayerTextDrawSetShadow(playerid, pJobMixTD[playerid][4], 0);
	PlayerTextDrawAlignment(playerid, pJobMixTD[playerid][4], 2);
	PlayerTextDrawColor(playerid, pJobMixTD[playerid][4], -1962934017);
	PlayerTextDrawBackgroundColor(playerid, pJobMixTD[playerid][4], 255);
	PlayerTextDrawBoxColor(playerid, pJobMixTD[playerid][4], 50);
	PlayerTextDrawUseBox(playerid, pJobMixTD[playerid][4], 0);
	PlayerTextDrawSetProportional(playerid, pJobMixTD[playerid][4], 1);
	PlayerTextDrawSetSelectable(playerid, pJobMixTD[playerid][4], 0);

	pJobMixTD[playerid][5] = CreatePlayerTextDraw(playerid, 223.000000, 273.000000, "TS");
	PlayerTextDrawFont(playerid, pJobMixTD[playerid][5], 1);
	PlayerTextDrawLetterSize(playerid, pJobMixTD[playerid][5], 0.261999, 1.350000);
	PlayerTextDrawTextSize(playerid, pJobMixTD[playerid][5], 250.500000, 13.000000);
	PlayerTextDrawSetOutline(playerid, pJobMixTD[playerid][5], 1);
	PlayerTextDrawSetShadow(playerid, pJobMixTD[playerid][5], 0);
	PlayerTextDrawAlignment(playerid, pJobMixTD[playerid][5], 1);
	PlayerTextDrawColor(playerid, pJobMixTD[playerid][5], -1);
	PlayerTextDrawBackgroundColor(playerid, pJobMixTD[playerid][5], 255);
	PlayerTextDrawBoxColor(playerid, pJobMixTD[playerid][5], 9109759);
	PlayerTextDrawUseBox(playerid, pJobMixTD[playerid][5], 1);
	PlayerTextDrawSetProportional(playerid, pJobMixTD[playerid][5], 1);
	PlayerTextDrawSetSelectable(playerid, pJobMixTD[playerid][5], 1);

	pJobMixTD[playerid][6] = CreatePlayerTextDraw(playerid, 261.000000, 273.000000, "TP");
	PlayerTextDrawFont(playerid, pJobMixTD[playerid][6], 1);
	PlayerTextDrawLetterSize(playerid, pJobMixTD[playerid][6], 0.261999, 1.350000);
	PlayerTextDrawTextSize(playerid, pJobMixTD[playerid][6], 288.500000, 13.000000);
	PlayerTextDrawSetOutline(playerid, pJobMixTD[playerid][6], 1);
	PlayerTextDrawSetShadow(playerid, pJobMixTD[playerid][6], 0);
	PlayerTextDrawAlignment(playerid, pJobMixTD[playerid][6], 1);
	PlayerTextDrawColor(playerid, pJobMixTD[playerid][6], -1);
	PlayerTextDrawBackgroundColor(playerid, pJobMixTD[playerid][6], 255);
	PlayerTextDrawBoxColor(playerid, pJobMixTD[playerid][6], 9109759);
	PlayerTextDrawUseBox(playerid, pJobMixTD[playerid][6], 1);
	PlayerTextDrawSetProportional(playerid, pJobMixTD[playerid][6], 1);
	PlayerTextDrawSetSelectable(playerid, pJobMixTD[playerid][6], 1);

	pJobMixTD[playerid][7] = CreatePlayerTextDraw(playerid, 299.000000, 273.000000, "TK");
	PlayerTextDrawFont(playerid, pJobMixTD[playerid][7], 1);
	PlayerTextDrawLetterSize(playerid, pJobMixTD[playerid][7], 0.261999, 1.350000);
	PlayerTextDrawTextSize(playerid, pJobMixTD[playerid][7], 327.000000, 13.000000);
	PlayerTextDrawSetOutline(playerid, pJobMixTD[playerid][7], 1);
	PlayerTextDrawSetShadow(playerid, pJobMixTD[playerid][7], 0);
	PlayerTextDrawAlignment(playerid, pJobMixTD[playerid][7], 1);
	PlayerTextDrawColor(playerid, pJobMixTD[playerid][7], -1);
	PlayerTextDrawBackgroundColor(playerid, pJobMixTD[playerid][7], 255);
	PlayerTextDrawBoxColor(playerid, pJobMixTD[playerid][7], 9109759);
	PlayerTextDrawUseBox(playerid, pJobMixTD[playerid][7], 1);
	PlayerTextDrawSetProportional(playerid, pJobMixTD[playerid][7], 1);
	PlayerTextDrawSetSelectable(playerid, pJobMixTD[playerid][7], 1);

	pJobMixTD[playerid][8] = CreatePlayerTextDraw(playerid, 337.000000, 273.000000, "TK2");
	PlayerTextDrawFont(playerid, pJobMixTD[playerid][8], 1);
	PlayerTextDrawLetterSize(playerid, pJobMixTD[playerid][8], 0.261999, 1.350000);
	PlayerTextDrawTextSize(playerid, pJobMixTD[playerid][8], 365.000000, 13.000000);
	PlayerTextDrawSetOutline(playerid, pJobMixTD[playerid][8], 1);
	PlayerTextDrawSetShadow(playerid, pJobMixTD[playerid][8], 0);
	PlayerTextDrawAlignment(playerid, pJobMixTD[playerid][8], 1);
	PlayerTextDrawColor(playerid, pJobMixTD[playerid][8], -1);
	PlayerTextDrawBackgroundColor(playerid, pJobMixTD[playerid][8], 255);
	PlayerTextDrawBoxColor(playerid, pJobMixTD[playerid][8], 9109759);
	PlayerTextDrawUseBox(playerid, pJobMixTD[playerid][8], 1);
	PlayerTextDrawSetProportional(playerid, pJobMixTD[playerid][8], 1);
	PlayerTextDrawSetSelectable(playerid, pJobMixTD[playerid][8], 1);

	pJobMixTD[playerid][9] = CreatePlayerTextDraw(playerid, 376.000000, 273.000000, "TA");
	PlayerTextDrawFont(playerid, pJobMixTD[playerid][9], 1);
	PlayerTextDrawLetterSize(playerid, pJobMixTD[playerid][9], 0.261999, 1.350000);
	PlayerTextDrawTextSize(playerid, pJobMixTD[playerid][9], 404.500000, 13.000000);
	PlayerTextDrawSetOutline(playerid, pJobMixTD[playerid][9], 1);
	PlayerTextDrawSetShadow(playerid, pJobMixTD[playerid][9], 0);
	PlayerTextDrawAlignment(playerid, pJobMixTD[playerid][9], 1);
	PlayerTextDrawColor(playerid, pJobMixTD[playerid][9], -1);
	PlayerTextDrawBackgroundColor(playerid, pJobMixTD[playerid][9], 255);
	PlayerTextDrawBoxColor(playerid, pJobMixTD[playerid][9], 9109759);
	PlayerTextDrawUseBox(playerid, pJobMixTD[playerid][9], 1);
	PlayerTextDrawSetProportional(playerid, pJobMixTD[playerid][9], 1);
	PlayerTextDrawSetSelectable(playerid, pJobMixTD[playerid][9], 1);

	pSlumpMeter[playerid] = CreatePlayerProgressBar(playerid, 432.000000, 243.000000, 72.500000, 6.500000, -1, 100.000000, BAR_DIRECTION_RIGHT);
}

ShowAsuransiTD(const textual[])
{
	TextDrawSetString(GInsurance[1], textual);

	TextDrawShowForAll(GInsurance[0]);
	TextDrawShowForAll(GInsurance[1]);
	TextDrawShowForAll(GInsurance[2]);
}

ShowAnnounceTD(playerid, const pokok[], const descr[])
{
	TextDrawShowForPlayer(playerid, AnnounceTD[0]);

	TextDrawSetString(AnnounceTD[1], pokok);
	TextDrawSetString(AnnounceTD[2], descr);
	TextDrawShowForPlayer(playerid, AnnounceTD[1]);
	TextDrawShowForPlayer(playerid, AnnounceTD[2]);
}

ShowAreaSantaiTD(playerid)
{
	for(new x; x < 4; x++)
	{
		TextDrawShowForPlayer(playerid, AreaSantaiTD[x]);
	}
}

HideAreaSantaiTD(playerid)
{
	TextDrawHideForPlayer(playerid, AreaSantaiTD[0]);
	TextDrawHideForPlayer(playerid, AreaSantaiTD[1]);
	TextDrawHideForPlayer(playerid, AreaSantaiTD[2]);
	TextDrawHideForPlayer(playerid, AreaSantaiTD[3]);
}