#include <YSI_Coding\y_hooks>

enum E_PALMTUFF
{
    STREAMER_TAG_AREA:PalmGetWoodArea[13],
    PalmWoodCountdown[13]
};
new PlayerPalmVars[MAX_PLAYERS][E_PALMTUFF];

IsPlayerTakeInTreePos(playerid)
{
    for(new x; x < sizeof(__P_TreePos); x++)
    {
        if(IsPlayerInDynamicArea(playerid, PlayerPalmVars[playerid][PalmGetWoodArea][x]))
        {
            return true;
        }
    }
    return false;
}

IsPlayerInWashLog(playerid)
{
    for(new x; x < sizeof(__P_WashLog); x++)
    {
        if(IsPlayerInDynamicArea(playerid, PalmWashLogArea[x]))
        {
            return true;
        }
    }
    return false;
}

IsPlayerInPackingLog(playerid)
{
    for(new x; x < sizeof(__P_PackLog); x++)
    {
        if(IsPlayerInDynamicArea(playerid, PalmPackArea[x]))
        {
            return true;
        }
    }
    return false;
}

CheckPalmTimer(playerid)
{
    if(pTakePalmWoodTimer[playerid]) return 1;
    else if(pWashPalmWoodTime[playerid]) return 1;
    else if(pPackPalmWoodTime[playerid]) return 1;

    return 0;
}

ptask PalmUpdateWoodCountdown[1000](playerid)
{
    for(new t; t < 13; t++)
    {
        if(PlayerPalmVars[playerid][PalmWoodCountdown][t] > 0)
        {
            PlayerPalmVars[playerid][PalmWoodCountdown][t]--;

            if(PlayerPalmVars[playerid][PalmWoodCountdown][t] <= 0)
            {
                PlayerPalmVars[playerid][PalmWoodCountdown][t] = 0;

                if(DestroyDynamicArea(PlayerPalmVars[playerid][PalmGetWoodArea][t]))
                    PlayerPalmVars[playerid][PalmGetWoodArea][t] = STREAMER_TAG_AREA: INVALID_STREAMER_ID;

                switch(t)
                {
                    case 0:
                    {
                        PlayerPalmVars[playerid][PalmGetWoodArea][0] = CreateDynamicSphere(__P_TreePos[0][0], __P_TreePos[0][1], __P_TreePos[0][2], 3.0, 0, 0, playerid);
                    }
                    case 1:
                    {
                        PlayerPalmVars[playerid][PalmGetWoodArea][1] = CreateDynamicSphere(__P_TreePos[1][0], __P_TreePos[1][1], __P_TreePos[1][2], 3.0, 0, 0, playerid);
                    }
                    case 2:
                    {
                        PlayerPalmVars[playerid][PalmGetWoodArea][2] = CreateDynamicSphere(__P_TreePos[2][0], __P_TreePos[2][1], __P_TreePos[2][2], 3.0, 0, 0, playerid);
                    }
                    case 3:
                    {
                        PlayerPalmVars[playerid][PalmGetWoodArea][3] = CreateDynamicSphere(__P_TreePos[3][0], __P_TreePos[3][1], __P_TreePos[3][2], 3.0, 0, 0, playerid);
                    }
                    case 4:
                    {
                        PlayerPalmVars[playerid][PalmGetWoodArea][4] = CreateDynamicSphere(__P_TreePos[4][0], __P_TreePos[4][1], __P_TreePos[4][2], 3.0, 0, 0, playerid);
                    }
                    case 5:
                    {
                        PlayerPalmVars[playerid][PalmGetWoodArea][5] = CreateDynamicSphere(__P_TreePos[5][0], __P_TreePos[5][1], __P_TreePos[5][2], 3.0, 0, 0, playerid);
                    }
                    case 6:
                    {
                        PlayerPalmVars[playerid][PalmGetWoodArea][6] = CreateDynamicSphere(__P_TreePos[6][0], __P_TreePos[6][1], __P_TreePos[6][2], 3.0, 0, 0, playerid);
                    }
                    case 7:
                    {
                        PlayerPalmVars[playerid][PalmGetWoodArea][7] = CreateDynamicSphere(__P_TreePos[7][0], __P_TreePos[7][1], __P_TreePos[7][2], 3.0, 0, 0, playerid);
                    }
                    case 8:
                    {
                        PlayerPalmVars[playerid][PalmGetWoodArea][8] = CreateDynamicSphere(__P_TreePos[8][0], __P_TreePos[8][1], __P_TreePos[8][2], 3.0, 0, 0, playerid);
                    }
                    case 9:
                    {
                        PlayerPalmVars[playerid][PalmGetWoodArea][9] = CreateDynamicSphere(__P_TreePos[9][0], __P_TreePos[9][1], __P_TreePos[9][2], 3.0, 0, 0, playerid);
                    }
                    case 10:
                    {
                        PlayerPalmVars[playerid][PalmGetWoodArea][10] = CreateDynamicSphere(__P_TreePos[10][0], __P_TreePos[10][1], __P_TreePos[10][2], 3.0, 0, 0, playerid);
                    }
                    case 11:
                    {
                        PlayerPalmVars[playerid][PalmGetWoodArea][11] = CreateDynamicSphere(__P_TreePos[11][0], __P_TreePos[11][1], __P_TreePos[11][2], 3.0, 0, 0, playerid);
                    }
                    case 12:
                    {
                        PlayerPalmVars[playerid][PalmGetWoodArea][12] = CreateDynamicSphere(__P_TreePos[12][0], __P_TreePos[12][1], __P_TreePos[12][2], 3.0, 0, 0, playerid);
                    }                                                                                                                                                                
                }
            }
        }
    }
    return 1;
}

hook OnPlayerEnterDynArea(playerid, STREAMER_TAG_AREA:areaid)
{
    if(AccountData[playerid][pJob] == JOB_PALM && GetPlayerState(playerid) == PLAYER_STATE_ONFOOT)
	{
        for(new x; x < sizeof(__P_TreePos); x++)
        {
            if(areaid == PlayerPalmVars[playerid][PalmGetWoodArea][x])
            {
                ShowNotifBox(playerid, "Tekan ~p~'Y' ~w~untuk ambil sawit");
            }
        }
    }
    return 1;
}

hook OnPlayerLeaveDynArea(playerid, STREAMER_TAG_AREA:areaid)
{
    for(new x; x < sizeof(__P_TreePos); x++)
    {
        if(areaid == PlayerPalmVars[playerid][PalmGetWoodArea][x])
        {
            HideNotifBox(playerid);
            PlayerPlaySound(playerid, 30803, 0.0, 0.0, 0.0);
        }
    }
    for(new x; x < sizeof(__P_WashLog); x++)
    {
        if(areaid == PalmWashLogArea[x])
        {
            PlayerPlaySound(playerid, 30803, 0.0, 0.0, 0.0);
        }
    }
    for(new x; x < sizeof(__P_PackLog); x++)
    {
        if(areaid == PalmPackArea[x])
        {
            PlayerPlaySound(playerid, 30803, 0.0, 0.0, 0.0);
        }
    }
    return 1;
}

hook OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
    if(newkeys & KEY_YES && GetPlayerState(playerid) == PLAYER_STATE_ONFOOT)
    {
        for(new x; x < sizeof(__P_TreePos); x++)
        {
            if(IsPlayerInDynamicArea(playerid, PlayerPalmVars[playerid][PalmGetWoodArea][x]))
            {
                if(AccountData[playerid][pJob] != JOB_PALM) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda bukan seorang Tukang Sawit!");
                if(AccountData[playerid][pActivityTime] != 0) return ShowTDN(playerid, NOTIFICATION_WARNING, "Anda sedang melakukan sesuatu, mohon tunggu progress bar selesai!");

                new Float:countingtotalweight;
                countingtotalweight = GetTotalWeightFloat(playerid) + float(2 * GetItemWeight("Sawit"))/1000;
                if(countingtotalweight > GetPlayerInventoryWeight(playerid)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Inventory anda sudah penuh!");

                AccountData[playerid][pActivityTime] = 1;
                AccountData[playerid][pInTree] = x;
                pTakePalmWoodTimer[playerid] = true;
                PlayerTextDrawSetString(playerid, ProgressBar[playerid][1], "MENGAMBIL SAWIT");
                ShowProgressBar(playerid);

                SetPlayerAttachedObject(playerid, 9, 341, 6, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.000000, 1.000000, 1.000000);
                ApplyAnimation(playerid, "CHAINSAW", "WEAPON_csaw", 1.33, 1, 0, 0, 0, 0, 1);

                HideNotifBox(playerid);
            }
        }

        if(IsPlayerInWashLog(playerid))
        {
            if(AccountData[playerid][pJob] != JOB_PALM) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda bukan seorang Tukang Sawit!");
            if(Inventory_Count(playerid, "Sawit") < 5) return ShowTDN(playerid, NOTIFICATION_ERROR, "Sawit anda tidak cukup! (Min: 5)");
            if(AccountData[playerid][pActivityTime] != 0) return ShowTDN(playerid, NOTIFICATION_WARNING, "Anda sedang melakukan sesuatu, mohon tunggu progress bar selesai!");

            new Float:countingtotalweight;
            countingtotalweight = GetTotalWeightFloat(playerid) + float(5 * GetItemWeight("Sawit Bersih"))/1000;
            if(countingtotalweight > GetPlayerInventoryWeight(playerid)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Inventory anda sudah penuh!");

            AccountData[playerid][pActivityTime] = 1;
            pWashPalmWoodTime[playerid] = true;
            PlayerTextDrawSetString(playerid, ProgressBar[playerid][1], "MENCUCI SAWIT");
            ShowProgressBar(playerid);

            ApplyAnimation(playerid,"BD_FIRE","wash_up",4.1, 1, 0, 0, 0, 0, 1);
        }

        if(IsPlayerInPackingLog(playerid))
        {
            if(AccountData[playerid][pJob] != JOB_PALM) return ShowTDN(playerid, NOTIFICATION_ERROR, "Anda bukan seorang Tukang Sawit!");
            if(Inventory_Count(playerid, "Sawit Bersih") < 5) return ShowTDN(playerid, NOTIFICATION_ERROR, "Sawit Bersih anda tidak cukup! (Min: 5)");
            if(AccountData[playerid][pActivityTime] != 0) return ShowTDN(playerid, NOTIFICATION_WARNING, "Anda sedang melakukan sesuatu, mohon tunggu progress bar selesai!");

            new Float:countingtotalweight;
            countingtotalweight = GetTotalWeightFloat(playerid) + float(5 * GetItemWeight("Minyak Sawit"))/1000;
            if(countingtotalweight > GetPlayerInventoryWeight(playerid)) return ShowTDN(playerid, NOTIFICATION_ERROR, "Inventory anda sudah penuh!");

            AccountData[playerid][pActivityTime] = 1;
            pPackPalmWoodTime[playerid] = true;
            PlayerTextDrawSetString(playerid, ProgressBar[playerid][1], "MEMBUAT MINYAK SAWIT");
            ShowProgressBar(playerid);

            ApplyAnimation(playerid,"BD_FIRE","wash_up",4.1, 1, 0, 0, 0, 0, 1);
        }
    }
    return 1;
}
