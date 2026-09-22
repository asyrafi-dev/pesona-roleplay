#include <YSI_Coding\y_hooks>

#define MAX_RENTAL    20

enum e_BikeRents
{
    Name[64],
    Model[2],
    Cost[2],
    Float:Pos[3],
    Float:SpawnPos[4],
    World,
    Interior,

    //not saved
    STREAMER_TAG_PICKUP:Pickup,
    STREAMER_TAG_3D_TEXT_LABEL:Label
};
new RentalData[MAX_RENTAL][e_BikeRents],
    Iterator:Rentals<MAX_RENTAL>;

Rental_Nearest(playerid)
{
    foreach(new i : Rentals) if (IsPlayerInRangeOfPoint(playerid, 3.0, RentalData[i][Pos][0], RentalData[i][Pos][1], RentalData[i][Pos][2]))
	{
		if (GetPlayerInterior(playerid) == RentalData[i][Interior] && GetPlayerVirtualWorld(playerid) == RentalData[i][World])
			return i;
	}
	return -1;
}

Rental_Save(brid)
{
    new dquery[552];
    mysql_format(g_SQL, dquery, sizeof(dquery), "UPDATE `rentals` SET `Model1`='%d', `Model2`='%d', `Cost1`='%d', `Cost2`='%d', `PosX`='%f', \
    `PosY`='%f', `PosZ`='%f', `SpawnX`='%f', `SpawnY`='%f', `SpawnZ`='%f', `SpawnA`='%f', `World`='%d', `Interior`='%d' WHERE `ID`='%d'",
    RentalData[brid][Model][0], RentalData[brid][Model][1], RentalData[brid][Cost][0], RentalData[brid][Cost][1], RentalData[brid][Pos][0], RentalData[brid][Pos][1], 
    RentalData[brid][Pos][2], RentalData[brid][SpawnPos][0], RentalData[brid][SpawnPos][1], RentalData[brid][SpawnPos][2], RentalData[brid][SpawnPos][3], RentalData[brid][World], RentalData[brid][Interior], brid);
    mysql_pquery(g_SQL, dquery);
    return 1;
}

Rental_Refresh(brid)
{
    if(brid != -1)
    {
        Streamer_SetItemPos(STREAMER_TYPE_PICKUP, RentalData[brid][Pickup], RentalData[brid][Pos][0], RentalData[brid][Pos][1], RentalData[brid][Pos][2]);
        Streamer_SetIntData(STREAMER_TYPE_PICKUP, RentalData[brid][Pickup], E_STREAMER_WORLD_ID, RentalData[brid][World]);
        Streamer_SetIntData(STREAMER_TYPE_PICKUP, RentalData[brid][Pickup], E_STREAMER_INTERIOR_ID, RentalData[brid][Interior]);

        Streamer_SetItemPos(STREAMER_TYPE_3D_TEXT_LABEL, RentalData[brid][Label], RentalData[brid][Pos][0], RentalData[brid][Pos][1], RentalData[brid][Pos][2]+0.85);
        Streamer_SetIntData(STREAMER_TYPE_3D_TEXT_LABEL, RentalData[brid][Label], E_STREAMER_WORLD_ID, RentalData[brid][World]);
        Streamer_SetIntData(STREAMER_TYPE_3D_TEXT_LABEL, RentalData[brid][Label], E_STREAMER_INTERIOR_ID, RentalData[brid][Interior]);
    }
    return 1;
}

Rental_Rebuild(brid)
{
    if(brid != -1)
    {
        RentalData[brid][Pickup] = CreateDynamicPickup(1239, 23, RentalData[brid][Pos][0], RentalData[brid][Pos][1], RentalData[brid][Pos][2], RentalData[brid][World], RentalData[brid][Interior], -1, 30.00, -1, 0);
        
        static string[258];
        format(string, sizeof(string), "[Sewa Kendaraan]\n"CYAN"%s\n"GREEN"[Y] "WHITE"untuk membuka menu rental", RentalData[brid][Name]);
        RentalData[brid][Label] = CreateDynamic3DTextLabel(string, 0xc0c0c8A6, RentalData[brid][Pos][0], RentalData[brid][Pos][1], RentalData[brid][Pos][2]+0.85, 10.00, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 0, RentalData[brid][World], RentalData[brid][Interior], -1, 10.00, -1, 0);
    }
    return 1;
}

forward LoadRentals();
public LoadRentals()
{
    new rows = cache_num_rows();
 	if(rows)
  	{
 		new brid;
		for(new i; i < rows; i++)
		{
            cache_get_value_name_int(i, "ID", brid);
            cache_get_value_name(i, "Name", RentalData[brid][Name]);
            cache_get_value_name_int(i, "Model1", RentalData[brid][Model][0]);
            cache_get_value_name_int(i, "Model2", RentalData[brid][Model][1]);
            cache_get_value_name_int(i, "Cost1", RentalData[brid][Cost][0]);
            cache_get_value_name_int(i, "Cost2", RentalData[brid][Cost][1]);
            cache_get_value_name_float(i, "PosX", RentalData[brid][Pos][0]);
            cache_get_value_name_float(i, "PosY", RentalData[brid][Pos][1]);
            cache_get_value_name_float(i, "PosZ", RentalData[brid][Pos][2]);
            cache_get_value_name_float(i, "SpawnX", RentalData[brid][SpawnPos][0]);
            cache_get_value_name_float(i, "SpawnY", RentalData[brid][SpawnPos][1]);
            cache_get_value_name_float(i, "SpawnZ", RentalData[brid][SpawnPos][2]);
            cache_get_value_name_float(i, "SpawnA", RentalData[brid][SpawnPos][3]);
            cache_get_value_name_int(i, "World", RentalData[brid][World]);
            cache_get_value_name_int(i, "Interior", RentalData[brid][Interior]);
            
			Rental_Rebuild(brid);
			Iter_Add(Rentals, brid);
        }
        printf("[Dynamic Rentals] Total number of loaded Rentals: %d.", rows);
	}
}

forward OnRentalCreated(playerid, brid);
public OnRentalCreated(playerid, brid)
{
    Rental_Save(brid);

    SendStaffMessage(Y_LIGHTRED, "AdmCmd: %s created Rental with ID: %d.", AccountData[playerid][pAdminname], brid);
    return 1;
}

hook OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
    if(newkeys & KEY_YES && GetPlayerState(playerid) == PLAYER_STATE_ONFOOT)
    {
        new brid = Rental_Nearest(playerid), brstr[512];

        if(brid == -1) return 1;

        if(Iter_Count(UberDuty) >= 8) return ShowTDN(playerid, NOTIFICATION_ERROR, "Tidak dapat akses rental, silakan pesan Uber!");

        AccountData[playerid][pInRent] = brid;
        format(brstr, sizeof(brstr), 
        "Vehicle Type\tRental Cost\n\
        %s\t$%s/hr\n\
        %s\t$%s/hr\n\
        "YELLOW"> Pilih ini untuk mengembalikan kendaraan rental.", GetVehicleModelName(RentalData[brid][Model][0]), FormatMoney(RentalData[brid][Cost][0]), GetVehicleModelName(RentalData[brid][Model][1]), FormatMoney(RentalData[brid][Cost][1]));
        ShowRentaLTD(playerid);
    }
    return 1;
}