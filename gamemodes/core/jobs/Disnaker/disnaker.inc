#include <YSI_Coding\y_hooks>

hook OnGameModeInit()
{
    CreateDynamic3DTextLabel("[Y] "WHITE"untuk ambil pekerjaan", Y_NEXOTIS, 1376.6417,1576.7018,17.0003, 5.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 1);
    return 1;
}
stock Disnaker_Select(playerid)
{
    if(!IsPlayerInRangeOfPoint(playerid, 2.0, 1376.6417,1576.7018,17.0003)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda tidak berada di area disnaker!");
    {
        if(AccountData[playerid][pHasKTP]) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda sudah memiliki KTP!");
        if(AccountData[playerid][pMoney] < 1500) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda membutuhkan $1000 untuk membuat KTP!");
                
        new count = 0;
        foreach(new i : Player) if(IsPlayerConnected(i))
        {
            if(AccountData[i][pInEvent]) count++;
        }
        if(count >= 1) return ShowTDN(playerid, NOTIFICATION_ERROR, "Tidak dapat membuat KTP otomatis jika ada Pemerintah di kota!"); 
                
        AccountData[playerid][pHasKTP] = true;
        TakePlayerMoneyEx(playerid, 1500);
        ShowTDN(playerid, NOTIFICATION_SUCCESS, "Berhasil membuat KTP!");
    }
    return 1;
}
hook OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
    if(newkeys & KEY_YES && GetPlayerState(playerid) == PLAYER_STATE_ONFOOT)
    {
        if(IsPlayerInRangeOfPoint(playerid, 2.0, 1376.6417,1576.7018,17.0003))
        {
        ShowGovTD(playerid);
        ShowHBETD(playerid);
        ShowStatsTD(playerid);
	    ShowServerNameTD(playerid);	
        }
    }
    return 1;
}
