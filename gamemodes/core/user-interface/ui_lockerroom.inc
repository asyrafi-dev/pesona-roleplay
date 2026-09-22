new Text:LockerRoomTD[5];

CreateLockerRoomTD()
{
    LockerRoomTD[0] = TextDrawCreate(339.000, 185.000, "LD_SPAC:white");
    TextDrawTextSize(LockerRoomTD[0], 2.000, 36.000);
    TextDrawAlignment(LockerRoomTD[0], 1);
    TextDrawColor(LockerRoomTD[0], -1);
    TextDrawSetShadow(LockerRoomTD[0], 0);
    TextDrawSetOutline(LockerRoomTD[0], 0);
    TextDrawBackgroundColor(LockerRoomTD[0], 255);
    TextDrawFont(LockerRoomTD[0], 4);
    TextDrawSetProportional(LockerRoomTD[0], 1);

    LockerRoomTD[1] = TextDrawCreate(342.000, 185.000, "LD_SPAC:white");
    TextDrawTextSize(LockerRoomTD[1], 59.000, 17.000);
    TextDrawAlignment(LockerRoomTD[1], 1);
    TextDrawColor(LockerRoomTD[1], -377187329);
    TextDrawSetShadow(LockerRoomTD[1], 0);
    TextDrawSetOutline(LockerRoomTD[1], 0);
    TextDrawBackgroundColor(LockerRoomTD[1], 255);
    TextDrawFont(LockerRoomTD[1], 4);
    TextDrawSetProportional(LockerRoomTD[1], 1);
    TextDrawSetSelectable(LockerRoomTD[1], 1);

    LockerRoomTD[2] = TextDrawCreate(342.000, 204.000, "LD_SPAC:white");
    TextDrawTextSize(LockerRoomTD[2], 59.000, 17.000);
    TextDrawAlignment(LockerRoomTD[2], 1);
    TextDrawColor(LockerRoomTD[2], -377187329);
    TextDrawSetShadow(LockerRoomTD[2], 0);
    TextDrawSetOutline(LockerRoomTD[2], 0);
    TextDrawBackgroundColor(LockerRoomTD[2], 255);
    TextDrawFont(LockerRoomTD[2], 4);
    TextDrawSetProportional(LockerRoomTD[2], 1);
    TextDrawSetSelectable(LockerRoomTD[2], 1);

    LockerRoomTD[3] = TextDrawCreate(344.000, 186.000, "Baju Kerja");
    TextDrawLetterSize(LockerRoomTD[3], 0.190, 1.500);
    TextDrawAlignment(LockerRoomTD[3], 1);
    TextDrawColor(LockerRoomTD[3], -1);
    TextDrawSetShadow(LockerRoomTD[3], 0);
    TextDrawSetOutline(LockerRoomTD[3], 0);
    TextDrawBackgroundColor(LockerRoomTD[3], 150);
    TextDrawFont(LockerRoomTD[3], 1);
    TextDrawSetProportional(LockerRoomTD[3], 1);

    LockerRoomTD[4] = TextDrawCreate(344.000, 204.000, "Baju Warga");
    TextDrawLetterSize(LockerRoomTD[4], 0.190, 1.500);
    TextDrawAlignment(LockerRoomTD[4], 1);
    TextDrawColor(LockerRoomTD[4], -1);
    TextDrawSetShadow(LockerRoomTD[4], 0);
    TextDrawSetOutline(LockerRoomTD[4], 0);
    TextDrawBackgroundColor(LockerRoomTD[4], 150);
    TextDrawFont(LockerRoomTD[4], 1);
    TextDrawSetProportional(LockerRoomTD[4], 1);
}

ShowLockerTD(playerid)
{
    for(new x=0; x < 5; x++)
    {
        TextDrawShowForPlayer(playerid, LockerRoomTD[x]);
    }
    SelectTextDraw(playerid, 0xff91a4cc);
}

HideLockerTD(playerid)
{
    for(new x=0; x < 5; x++)
    {
        TextDrawHideForPlayer(playerid, LockerRoomTD[x]);
    }
    CancelSelectTextDraw(playerid);
}