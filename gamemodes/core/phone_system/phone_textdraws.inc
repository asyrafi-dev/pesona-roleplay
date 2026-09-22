#define MAX_CONTACTS 100

new  
    Text:LockScreenTD[18],//sudah
    Text:HomeButtonPhone,//sudah
    Text:FingerButtonPhone,//sudah
    Text:RedButtonIncomingPhone,//
    Text:RedButtonOutcomingPhone,//
    Text:GreenButtonIncomingPhone,//
    Text:BankingTD[12],//

    Text:TwitterLoginTD[6],//
    Text:TwitterMainTD[5],//
    Text:SpotifyTD[14],//
    Text:UberPhoneTD[12],//

    //menu
    Text:MainMenuTD[14],//
    Text:PhoneMainMenuClock,//
    Text:BateraiTD[8],//
    Text:KontakButtonPhone,//
    Text:GPSButtonPhone,//
    Text:AirdropButtonPhone,//
    Text:BankingButtonPhone,//
    Text:AppStoreButtonPhone,//
    Text:SettingsButtonPhone,//
    Text:CallButtonPhone,//
    Text:WhatsappButtonPhone[3],//
    Text:SpotifyButtonPhone[3],//
    Text:TwitterButtonPhone[3],//
    Text:UberButtonPhone[3],//
    Text:YellowButtonPhone[3],//

    //appstore
    Text:AppStoreTD[26],//sudah
    Text:InstallWAButtonPhone,//sudah
    Text:InstallSpotifyButtonPhone,//sudah
    Text:InstallTwitterButtonPhone,//sudah
    Text:InstallUberButtonPhone,//sudah
    Text:InstallYellowButtonPhone,//sudah

    //contact
    Text:ContactTD[5],//

    //settings
    Text:SettingsTD[3];//

new PlayerText:ContactNameTD[MAX_PLAYERS],//
    PlayerText:StatusDialingTD[MAX_PLAYERS],//
    PlayerText:PlayerBankingTD[MAX_PLAYERS][3],//sudah
    PlayerText:TwitterInfoTD[MAX_PLAYERS],
    PlayerText:UberMainTD[MAX_PLAYERS][2];

CreatePhoneLockScreenTD()
{
    //Player Textdraws
LockScreenTD[0] = TextDrawCreate(365.500, 151.399, "ld_pool:ball");
TextDrawLetterSize(LockScreenTD[0], 0.600, 2.000);
TextDrawTextSize(LockScreenTD[0], 12.000, 13.000);
TextDrawAlignment(LockScreenTD[0], 1);
TextDrawColor(LockScreenTD[0], 255);
TextDrawSetShadow(LockScreenTD[0], 0);
TextDrawSetOutline(LockScreenTD[0], 0);
TextDrawBackgroundColor(LockScreenTD[0], 255);
TextDrawFont(LockScreenTD[0], 4);
TextDrawSetProportional(LockScreenTD[0], 1);

LockScreenTD[1] = TextDrawCreate(453.500, 151.399, "ld_pool:ball");
TextDrawLetterSize(LockScreenTD[1], 0.600, 2.000);
TextDrawTextSize(LockScreenTD[1], 15.000, 14.000);
TextDrawAlignment(LockScreenTD[1], 1);
TextDrawColor(LockScreenTD[1], 255);
TextDrawSetShadow(LockScreenTD[1], 0);
TextDrawSetOutline(LockScreenTD[1], 0);
TextDrawBackgroundColor(LockScreenTD[1], 255);
TextDrawFont(LockScreenTD[1], 4);
TextDrawSetProportional(LockScreenTD[1], 1);

LockScreenTD[2] = TextDrawCreate(454.000, 381.000, "ld_pool:ball");
TextDrawLetterSize(LockScreenTD[2], 0.600, 2.000);
TextDrawTextSize(LockScreenTD[2], 15.000, 16.000);
TextDrawAlignment(LockScreenTD[2], 1);
TextDrawColor(LockScreenTD[2], 255);
TextDrawSetShadow(LockScreenTD[2], 0);
TextDrawSetOutline(LockScreenTD[2], 0);
TextDrawBackgroundColor(LockScreenTD[2], 255);
TextDrawFont(LockScreenTD[2], 4);
TextDrawSetProportional(LockScreenTD[2], 1);

LockScreenTD[3] = TextDrawCreate(365.500, 381.000, "ld_pool:ball");
TextDrawLetterSize(LockScreenTD[3], 0.600, 2.000);
TextDrawTextSize(LockScreenTD[3], 13.000, 16.000);
TextDrawAlignment(LockScreenTD[3], 1);
TextDrawColor(LockScreenTD[3], 255);
TextDrawSetShadow(LockScreenTD[3], 0);
TextDrawSetOutline(LockScreenTD[3], 0);
TextDrawBackgroundColor(LockScreenTD[3], -8323073);
TextDrawFont(LockScreenTD[3], 4);
TextDrawSetProportional(LockScreenTD[3], 1);

LockScreenTD[4] = TextDrawCreate(417.000, 161.000, "_");
TextDrawLetterSize(LockScreenTD[4], 0.600, 25.099);
TextDrawTextSize(LockScreenTD[4], 299.500, 100.000);
TextDrawAlignment(LockScreenTD[4], 2);
TextDrawColor(LockScreenTD[4], -1);
TextDrawUseBox(LockScreenTD[4], 1);
TextDrawBoxColor(LockScreenTD[4], 255);
TextDrawSetShadow(LockScreenTD[4], 0);
TextDrawSetOutline(LockScreenTD[4], 0);
TextDrawBackgroundColor(LockScreenTD[4], 255);
TextDrawFont(LockScreenTD[4], 0);
TextDrawSetProportional(LockScreenTD[4], 1);

LockScreenTD[5] = TextDrawCreate(418.000, 154.000, "_");
TextDrawLetterSize(LockScreenTD[5], 0.606, 26.649);
TextDrawTextSize(LockScreenTD[5], 299.500, 87.500);
TextDrawAlignment(LockScreenTD[5], 2);
TextDrawColor(LockScreenTD[5], 255);
TextDrawUseBox(LockScreenTD[5], 1);
TextDrawBoxColor(LockScreenTD[5], 255);
TextDrawSetShadow(LockScreenTD[5], 0);
TextDrawSetOutline(LockScreenTD[5], 0);
TextDrawBackgroundColor(LockScreenTD[5], 255);
TextDrawFont(LockScreenTD[5], 0);
TextDrawSetProportional(LockScreenTD[5], 1);

LockScreenTD[6] = TextDrawCreate(366.000, 167.000, "LD_SPAC:white");
TextDrawTextSize(LockScreenTD[6], 102.000, 217.000);
TextDrawAlignment(LockScreenTD[6], 1);
TextDrawColor(LockScreenTD[6], -260013825);
TextDrawSetShadow(LockScreenTD[6], 0);
TextDrawSetOutline(LockScreenTD[6], 0);
TextDrawBackgroundColor(LockScreenTD[6], 255);
TextDrawFont(LockScreenTD[6], 4);
TextDrawSetProportional(LockScreenTD[6], 1);

LockScreenTD[7] = TextDrawCreate(366.500, 153.399, "ld_pool:ball");
TextDrawLetterSize(LockScreenTD[7], 0.600, 2.000);
TextDrawTextSize(LockScreenTD[7], 11.000, 13.000);
TextDrawAlignment(LockScreenTD[7], 1);
TextDrawColor(LockScreenTD[7], -260013825);
TextDrawSetShadow(LockScreenTD[7], 0);
TextDrawSetOutline(LockScreenTD[7], 0);
TextDrawBackgroundColor(LockScreenTD[7], 255);
TextDrawFont(LockScreenTD[7], 4);
TextDrawSetProportional(LockScreenTD[7], 1);

LockScreenTD[8] = TextDrawCreate(456.500, 153.399, "ld_pool:ball");
TextDrawLetterSize(LockScreenTD[8], 0.600, 2.000);
TextDrawTextSize(LockScreenTD[8], 11.000, 13.000);
TextDrawAlignment(LockScreenTD[8], 1);
TextDrawColor(LockScreenTD[8], -260013825);
TextDrawSetShadow(LockScreenTD[8], 0);
TextDrawSetOutline(LockScreenTD[8], 0);
TextDrawBackgroundColor(LockScreenTD[8], 255);
TextDrawFont(LockScreenTD[8], 4);
TextDrawSetProportional(LockScreenTD[8], 1);

LockScreenTD[9] = TextDrawCreate(456.500, 382.398, "ld_pool:ball");
TextDrawLetterSize(LockScreenTD[9], 0.600, 2.000);
TextDrawTextSize(LockScreenTD[9], 11.000, 13.000);
TextDrawAlignment(LockScreenTD[9], 1);
TextDrawColor(LockScreenTD[9], -260013825);
TextDrawSetShadow(LockScreenTD[9], 0);
TextDrawSetOutline(LockScreenTD[9], 0);
TextDrawBackgroundColor(LockScreenTD[9], 255);
TextDrawFont(LockScreenTD[9], 4);
TextDrawSetProportional(LockScreenTD[9], 1);

LockScreenTD[10] = TextDrawCreate(366.500, 382.398, "ld_pool:ball");
TextDrawLetterSize(LockScreenTD[10], 0.600, 2.000);
TextDrawTextSize(LockScreenTD[10], 11.000, 13.000);
TextDrawAlignment(LockScreenTD[10], 1);
TextDrawColor(LockScreenTD[10], -260013825);
TextDrawSetShadow(LockScreenTD[10], 0);
TextDrawSetOutline(LockScreenTD[10], 0);
TextDrawBackgroundColor(LockScreenTD[10], 255);
TextDrawFont(LockScreenTD[10], 4);
TextDrawSetProportional(LockScreenTD[10], 1);

LockScreenTD[11] = TextDrawCreate(366.000, 161.000, "LD_SPAC:white");
TextDrawTextSize(LockScreenTD[11], 102.000, 24.000);
TextDrawAlignment(LockScreenTD[11], 1);
TextDrawColor(LockScreenTD[11], -260013825);
TextDrawSetShadow(LockScreenTD[11], 0);
TextDrawSetOutline(LockScreenTD[11], 0);
TextDrawBackgroundColor(LockScreenTD[11], 255);
TextDrawFont(LockScreenTD[11], 4);
TextDrawSetProportional(LockScreenTD[11], 1);

LockScreenTD[12] = TextDrawCreate(366.000, 364.000, "LD_SPAC:white");
TextDrawTextSize(LockScreenTD[12], 102.000, 24.000);
TextDrawAlignment(LockScreenTD[12], 1);
TextDrawColor(LockScreenTD[12], -260013825);
TextDrawSetShadow(LockScreenTD[12], 0);
TextDrawSetOutline(LockScreenTD[12], 0);
TextDrawBackgroundColor(LockScreenTD[12], 255);
TextDrawFont(LockScreenTD[12], 4);
TextDrawSetProportional(LockScreenTD[12], 1);

LockScreenTD[13] = TextDrawCreate(372.000, 154.000, "LD_SPAC:white");
TextDrawTextSize(LockScreenTD[13], 89.000, 24.000);
TextDrawAlignment(LockScreenTD[13], 1);
TextDrawColor(LockScreenTD[13], -260013825);
TextDrawSetShadow(LockScreenTD[13], 0);
TextDrawSetOutline(LockScreenTD[13], 0);
TextDrawBackgroundColor(LockScreenTD[13], 255);
TextDrawFont(LockScreenTD[13], 4);
TextDrawSetProportional(LockScreenTD[13], 1);

LockScreenTD[14] = TextDrawCreate(372.000, 371.000, "LD_SPAC:white");
TextDrawTextSize(LockScreenTD[14], 89.000, 24.000);
TextDrawAlignment(LockScreenTD[14], 1);
TextDrawColor(LockScreenTD[14], -260013825);
TextDrawSetShadow(LockScreenTD[14], 0);
TextDrawSetOutline(LockScreenTD[14], 0);
TextDrawBackgroundColor(LockScreenTD[14], 255);
TextDrawFont(LockScreenTD[14], 4);
TextDrawSetProportional(LockScreenTD[14], 1);

LockScreenTD[15] = TextDrawCreate(413.500, 155.397, "ld_pool:ball");
TextDrawLetterSize(LockScreenTD[15], 0.600, 2.000);
TextDrawTextSize(LockScreenTD[15], 7.000, 8.000);
TextDrawAlignment(LockScreenTD[15], 1);
TextDrawColor(LockScreenTD[15], 255);
TextDrawSetShadow(LockScreenTD[15], 0);
TextDrawSetOutline(LockScreenTD[15], 0);
TextDrawBackgroundColor(LockScreenTD[15], 255);
TextDrawFont(LockScreenTD[15], 4);
TextDrawSetProportional(LockScreenTD[15], 1);

LockScreenTD[16] = TextDrawCreate(418.000, 217.000, "Jum, 30 September 2022");
TextDrawLetterSize(LockScreenTD[16], 0.128, 1.049);
TextDrawTextSize(LockScreenTD[16], 400.000, 122.000);
TextDrawAlignment(LockScreenTD[16], 2);
TextDrawColor(LockScreenTD[16], -1);
TextDrawSetShadow(LockScreenTD[16], 0);
TextDrawSetOutline(LockScreenTD[16], 0);
TextDrawBackgroundColor(LockScreenTD[16], 255);
TextDrawFont(LockScreenTD[16], 1);
TextDrawSetProportional(LockScreenTD[16], 1);

LockScreenTD[17] = TextDrawCreate(416.000, 189.000, "10:15");
TextDrawLetterSize(LockScreenTD[17], 0.481, 2.898);
TextDrawTextSize(LockScreenTD[17], 400.000, 122.000);
TextDrawAlignment(LockScreenTD[17], 2);
TextDrawColor(LockScreenTD[17], -1);
TextDrawSetShadow(LockScreenTD[17], 0);
TextDrawSetOutline(LockScreenTD[17], 0);
TextDrawBackgroundColor(LockScreenTD[17], 255);
TextDrawFont(LockScreenTD[17], 1);
TextDrawSetProportional(LockScreenTD[17], 1);

HomeButtonPhone = TextDrawCreate(394.000, 381.000, "LD_BUM:blkdot");
TextDrawTextSize(HomeButtonPhone, 47.000, 5.000);
TextDrawAlignment(HomeButtonPhone, 1);
TextDrawColor(HomeButtonPhone, -1);
TextDrawSetShadow(HomeButtonPhone, 0);
TextDrawSetOutline(HomeButtonPhone, 0);
TextDrawBackgroundColor(HomeButtonPhone, 255);
TextDrawFont(HomeButtonPhone, 4);
TextDrawSetProportional(HomeButtonPhone, 1);
TextDrawSetSelectable(HomeButtonPhone, 1);

FingerButtonPhone = TextDrawCreate(403.000, 331.000, "LD_BEAT:chit");
TextDrawTextSize(FingerButtonPhone, 29.000, 33.000);
TextDrawAlignment(FingerButtonPhone, 1);
TextDrawColor(FingerButtonPhone, -1);
TextDrawSetShadow(FingerButtonPhone, 0);
TextDrawSetOutline(FingerButtonPhone, 0);
TextDrawBackgroundColor(FingerButtonPhone, 255);
TextDrawFont(FingerButtonPhone, 4);
TextDrawSetProportional(FingerButtonPhone, 1);
TextDrawSetSelectable(FingerButtonPhone, 1);
}

CreatePhoneMainMenuTD()
{
    MainMenuTD[0] = TextDrawCreate(380.299, 180.000, "_");
    TextDrawLetterSize(MainMenuTD[0], 0.608, 2.100);
    TextDrawTextSize(MainMenuTD[0], 300.500, 16.000);
    TextDrawAlignment(MainMenuTD[0], 2);
    TextDrawColor(MainMenuTD[0], -1);
    TextDrawUseBox(MainMenuTD[0], 1);
    TextDrawBoxColor(MainMenuTD[0], 9109759);
    TextDrawSetShadow(MainMenuTD[0], 0);
    TextDrawSetOutline(MainMenuTD[0], 0);
    TextDrawBackgroundColor(MainMenuTD[0], 255);
    TextDrawFont(MainMenuTD[0], 0);
    TextDrawSetProportional(MainMenuTD[0], 1);

    MainMenuTD[1] = TextDrawCreate(380.000, 202.000, "Kontak");
    TextDrawLetterSize(MainMenuTD[1], 0.162, 0.749);
    TextDrawTextSize(MainMenuTD[1], 400.000, 122.000);
    TextDrawAlignment(MainMenuTD[1], 2);
    TextDrawColor(MainMenuTD[1], -1);
    TextDrawSetShadow(MainMenuTD[1], 0);
    TextDrawSetOutline(MainMenuTD[1], 0);
    TextDrawBackgroundColor(MainMenuTD[1], 255);
    TextDrawFont(MainMenuTD[1], 1);
    TextDrawSetProportional(MainMenuTD[1], 1);

    MainMenuTD[2] = TextDrawCreate(404.599, 180.000, "_");
    TextDrawLetterSize(MainMenuTD[2], 0.608, 2.100);
    TextDrawTextSize(MainMenuTD[2], 300.500, 16.000);
    TextDrawAlignment(MainMenuTD[2], 2);
    TextDrawColor(MainMenuTD[2], -1);
    TextDrawUseBox(MainMenuTD[2], 1);
    TextDrawBoxColor(MainMenuTD[2], -1094795521);
    TextDrawSetShadow(MainMenuTD[2], 0);
    TextDrawSetOutline(MainMenuTD[2], 0);
    TextDrawBackgroundColor(MainMenuTD[2], 255);
    TextDrawFont(MainMenuTD[2], 0);
    TextDrawSetProportional(MainMenuTD[2], 1);

    MainMenuTD[3] = TextDrawCreate(404.500, 202.000, "GPS");
    TextDrawLetterSize(MainMenuTD[3], 0.162, 0.749);
    TextDrawTextSize(MainMenuTD[3], 400.000, 122.000);
    TextDrawAlignment(MainMenuTD[3], 2);
    TextDrawColor(MainMenuTD[3], -1);
    TextDrawSetShadow(MainMenuTD[3], 0);
    TextDrawSetOutline(MainMenuTD[3], 0);
    TextDrawBackgroundColor(MainMenuTD[3], 255);
    TextDrawFont(MainMenuTD[3], 1);
    TextDrawSetProportional(MainMenuTD[3], 1);

    MainMenuTD[4] = TextDrawCreate(429.500, 180.000, "_");
    TextDrawLetterSize(MainMenuTD[4], 0.608, 2.100);
    TextDrawTextSize(MainMenuTD[4], 300.500, 16.000);
    TextDrawAlignment(MainMenuTD[4], 2);
    TextDrawColor(MainMenuTD[4], -1);
    TextDrawUseBox(MainMenuTD[4], 1);
    TextDrawBoxColor(MainMenuTD[4], -1104226561);
    TextDrawSetShadow(MainMenuTD[4], 0);
    TextDrawSetOutline(MainMenuTD[4], 0);
    TextDrawBackgroundColor(MainMenuTD[4], 255);
    TextDrawFont(MainMenuTD[4], 0);
    TextDrawSetProportional(MainMenuTD[4], 1);

    MainMenuTD[5] = TextDrawCreate(429.500, 202.000, "Airdrop");
    TextDrawLetterSize(MainMenuTD[5], 0.162, 0.849);
    TextDrawTextSize(MainMenuTD[5], 400.000, 122.000);
    TextDrawAlignment(MainMenuTD[5], 2);
    TextDrawColor(MainMenuTD[5], -1);
    TextDrawSetShadow(MainMenuTD[5], 0);
    TextDrawSetOutline(MainMenuTD[5], 0);
    TextDrawBackgroundColor(MainMenuTD[5], 255);
    TextDrawFont(MainMenuTD[5], 1);
    TextDrawSetProportional(MainMenuTD[5], 1);

    MainMenuTD[6] = TextDrawCreate(454.299, 180.000, "_");
    TextDrawLetterSize(MainMenuTD[6], 0.608, 2.100);
    TextDrawTextSize(MainMenuTD[6], 300.500, 16.000);
    TextDrawAlignment(MainMenuTD[6], 2);
    TextDrawColor(MainMenuTD[6], -1);
    TextDrawUseBox(MainMenuTD[6], 1);
    TextDrawBoxColor(MainMenuTD[6], 1296911871);
    TextDrawSetShadow(MainMenuTD[6], 0);
    TextDrawSetOutline(MainMenuTD[6], 0);
    TextDrawBackgroundColor(MainMenuTD[6], 255);
    TextDrawFont(MainMenuTD[6], 0);
    TextDrawSetProportional(MainMenuTD[6], 1);

    MainMenuTD[7] = TextDrawCreate(454.500, 202.000, "Banking");
    TextDrawLetterSize(MainMenuTD[7], 0.162, 0.849);
    TextDrawTextSize(MainMenuTD[7], 400.000, 122.000);
    TextDrawAlignment(MainMenuTD[7], 2);
    TextDrawColor(MainMenuTD[7], -1);
    TextDrawSetShadow(MainMenuTD[7], 0);
    TextDrawSetOutline(MainMenuTD[7], 0);
    TextDrawBackgroundColor(MainMenuTD[7], 255);
    TextDrawFont(MainMenuTD[7], 1);
    TextDrawSetProportional(MainMenuTD[7], 1);

    MainMenuTD[8] = TextDrawCreate(429.599, 223.000, "_");
    TextDrawLetterSize(MainMenuTD[8], 0.608, 2.100);
    TextDrawTextSize(MainMenuTD[8], 300.500, 16.000);
    TextDrawAlignment(MainMenuTD[8], 2);
    TextDrawColor(MainMenuTD[8], -1);
    TextDrawUseBox(MainMenuTD[8], 1);
    TextDrawBoxColor(MainMenuTD[8], 1097458175);
    TextDrawSetShadow(MainMenuTD[8], 0);
    TextDrawSetOutline(MainMenuTD[8], 0);
    TextDrawBackgroundColor(MainMenuTD[8], 255);
    TextDrawFont(MainMenuTD[8], 0);
    TextDrawSetProportional(MainMenuTD[8], 1);

    MainMenuTD[9] = TextDrawCreate(430.500, 244.000, "AppStore");
    TextDrawLetterSize(MainMenuTD[9], 0.122, 0.849);
    TextDrawTextSize(MainMenuTD[9], 400.000, 122.000);
    TextDrawAlignment(MainMenuTD[9], 2);
    TextDrawColor(MainMenuTD[9], -1);
    TextDrawSetShadow(MainMenuTD[9], 0);
    TextDrawSetOutline(MainMenuTD[9], 0);
    TextDrawBackgroundColor(MainMenuTD[9], 255);
    TextDrawFont(MainMenuTD[9], 1);
    TextDrawSetProportional(MainMenuTD[9], 1);

    MainMenuTD[10] = TextDrawCreate(454.500, 223.000, "_");
    TextDrawLetterSize(MainMenuTD[10], 0.608, 2.100);
    TextDrawTextSize(MainMenuTD[10], 300.500, 16.000);
    TextDrawAlignment(MainMenuTD[10], 2);
    TextDrawColor(MainMenuTD[10], -1);
    TextDrawUseBox(MainMenuTD[10], 1);
    TextDrawBoxColor(MainMenuTD[10], -1);
    TextDrawSetShadow(MainMenuTD[10], 0);
    TextDrawSetOutline(MainMenuTD[10], 0);
    TextDrawBackgroundColor(MainMenuTD[10], 255);
    TextDrawFont(MainMenuTD[10], 0);
    TextDrawSetProportional(MainMenuTD[10], 1);

    MainMenuTD[11] = TextDrawCreate(454.500, 244.000, "Settings");
    TextDrawLetterSize(MainMenuTD[11], 0.142, 0.849);
    TextDrawTextSize(MainMenuTD[11], 400.000, 122.000);
    TextDrawAlignment(MainMenuTD[11], 2);
    TextDrawColor(MainMenuTD[11], -1);
    TextDrawSetShadow(MainMenuTD[11], 0);
    TextDrawSetOutline(MainMenuTD[11], 0);
    TextDrawBackgroundColor(MainMenuTD[11], 255);
    TextDrawFont(MainMenuTD[11], 1);
    TextDrawSetProportional(MainMenuTD[11], 1);

    MainMenuTD[12] = TextDrawCreate(404.500, 223.000, "_");
    TextDrawLetterSize(MainMenuTD[12], 0.608, 2.100);
    TextDrawTextSize(MainMenuTD[12], 300.500, 16.000);
    TextDrawAlignment(MainMenuTD[12], 2);
    TextDrawColor(MainMenuTD[12], -1);
    TextDrawUseBox(MainMenuTD[12], 1);
    TextDrawBoxColor(MainMenuTD[12], 9145343);
    TextDrawSetShadow(MainMenuTD[12], 0);
    TextDrawSetOutline(MainMenuTD[12], 0);
    TextDrawBackgroundColor(MainMenuTD[12], 255);
    TextDrawFont(MainMenuTD[12], 0);
    TextDrawSetProportional(MainMenuTD[12], 1);

    MainMenuTD[13] = TextDrawCreate(403.500, 245.000, "Call");
    TextDrawLetterSize(MainMenuTD[13], 0.162, 0.749);
    TextDrawTextSize(MainMenuTD[13], 400.000, 122.000);
    TextDrawAlignment(MainMenuTD[13], 2);
    TextDrawColor(MainMenuTD[13], -1);
    TextDrawSetShadow(MainMenuTD[13], 0);
    TextDrawSetOutline(MainMenuTD[13], 0);
    TextDrawBackgroundColor(MainMenuTD[13], 255);
    TextDrawFont(MainMenuTD[13], 1);
    TextDrawSetProportional(MainMenuTD[13], 1);

    KontakButtonPhone = TextDrawCreate(376.000, 185.000, "HUD:radar_savegame");
    TextDrawLetterSize(KontakButtonPhone, 0.600, 2.000);
    TextDrawTextSize(KontakButtonPhone, 8.000, 8.000);
    TextDrawAlignment(KontakButtonPhone, 1);
    TextDrawColor(KontakButtonPhone, -1);
    TextDrawSetShadow(KontakButtonPhone, 0);
    TextDrawSetOutline(KontakButtonPhone, 0);
    TextDrawBackgroundColor(KontakButtonPhone, 255);
    TextDrawFont(KontakButtonPhone, 4);
    TextDrawSetProportional(KontakButtonPhone, 1);
    TextDrawSetSelectable(KontakButtonPhone, 1);

    GPSButtonPhone = TextDrawCreate(399.500, 185.000, "HUD:radar_waypoint");
    TextDrawLetterSize(GPSButtonPhone, 0.600, 2.000);
    TextDrawTextSize(GPSButtonPhone, 10.000, 10.000);
    TextDrawAlignment(GPSButtonPhone, 1);
    TextDrawColor(GPSButtonPhone, -1);
    TextDrawSetShadow(GPSButtonPhone, 0);
    TextDrawSetOutline(GPSButtonPhone, 0);
    TextDrawBackgroundColor(GPSButtonPhone, 255);
    TextDrawFont(GPSButtonPhone, 4);
    TextDrawSetProportional(GPSButtonPhone, 1);
    TextDrawSetSelectable(GPSButtonPhone, 1);

    AirdropButtonPhone = TextDrawCreate(424.000, 184.000, "HUD:radar_triadscasino");
    TextDrawLetterSize(AirdropButtonPhone, 0.600, 2.000);
    TextDrawTextSize(AirdropButtonPhone, 11.000, 11.000);
    TextDrawAlignment(AirdropButtonPhone, 1);
    TextDrawColor(AirdropButtonPhone, -1);
    TextDrawUseBox(AirdropButtonPhone, 1);
    TextDrawBoxColor(AirdropButtonPhone, 50);
    TextDrawSetShadow(AirdropButtonPhone, 0);
    TextDrawSetOutline(AirdropButtonPhone, 0);
    TextDrawBackgroundColor(AirdropButtonPhone, 255);
    TextDrawFont(AirdropButtonPhone, 4);
    TextDrawSetProportional(AirdropButtonPhone, 1);
    TextDrawSetSelectable(AirdropButtonPhone, 1);

    AppStoreButtonPhone = TextDrawCreate(424.000, 228.000, "HUD:radar_airyard");
    TextDrawLetterSize(AppStoreButtonPhone, 0.600, 2.000);
    TextDrawTextSize(AppStoreButtonPhone, 11.000, 11.000);
    TextDrawAlignment(AppStoreButtonPhone, 1);
    TextDrawColor(AppStoreButtonPhone, -1);
    TextDrawUseBox(AppStoreButtonPhone, 1);
    TextDrawBoxColor(AppStoreButtonPhone, 50);
    TextDrawSetShadow(AppStoreButtonPhone, 0);
    TextDrawSetOutline(AppStoreButtonPhone, 0);
    TextDrawBackgroundColor(AppStoreButtonPhone, 255);
    TextDrawFont(AppStoreButtonPhone, 4);
    TextDrawSetProportional(AppStoreButtonPhone, 1);
    TextDrawSetSelectable(AppStoreButtonPhone, 1);

    CallButtonPhone = TextDrawCreate(399.000, 227.000, "ld_chat:badchat");
    TextDrawLetterSize(CallButtonPhone, 0.600, 2.000);
    TextDrawTextSize(CallButtonPhone, 11.000, 11.000);
    TextDrawAlignment(CallButtonPhone, 1);
    TextDrawColor(CallButtonPhone, -1);
    TextDrawUseBox(CallButtonPhone, 1);
    TextDrawBoxColor(CallButtonPhone, 50);
    TextDrawSetShadow(CallButtonPhone, 0);
    TextDrawSetOutline(CallButtonPhone, 0);
    TextDrawBackgroundColor(CallButtonPhone, 255);
    TextDrawFont(CallButtonPhone, 4);
    TextDrawSetProportional(CallButtonPhone, 1);
    TextDrawSetSelectable(CallButtonPhone, 1);

    BankingButtonPhone = TextDrawCreate(449.000, 184.000, "ld_card:cdback");
    TextDrawLetterSize(BankingButtonPhone, 0.600, 2.000);
    TextDrawTextSize(BankingButtonPhone, 11.000, 12.000);
    TextDrawAlignment(BankingButtonPhone, 1);
    TextDrawColor(BankingButtonPhone, -1);
    TextDrawUseBox(BankingButtonPhone, 1);
    TextDrawBoxColor(BankingButtonPhone, 50);
    TextDrawSetShadow(BankingButtonPhone, 0);
    TextDrawSetOutline(BankingButtonPhone, 0);
    TextDrawBackgroundColor(BankingButtonPhone, 255);
    TextDrawFont(BankingButtonPhone, 4);
    TextDrawSetProportional(BankingButtonPhone, 1);
    TextDrawSetSelectable(BankingButtonPhone, 1);

    SettingsButtonPhone = TextDrawCreate(449.000, 227.000, "ld_beat:upl");
    TextDrawLetterSize(SettingsButtonPhone, 0.600, 2.000);
    TextDrawTextSize(SettingsButtonPhone, 13.000, 13.000);
    TextDrawAlignment(SettingsButtonPhone, 1);
    TextDrawColor(SettingsButtonPhone, -1061109505);
    TextDrawUseBox(SettingsButtonPhone, 1);
    TextDrawBoxColor(SettingsButtonPhone, 50);
    TextDrawSetShadow(SettingsButtonPhone, 0);
    TextDrawSetOutline(SettingsButtonPhone, 0);
    TextDrawBackgroundColor(SettingsButtonPhone, 255);
    TextDrawFont(SettingsButtonPhone, 4);
    TextDrawSetProportional(SettingsButtonPhone, 1);
    TextDrawSetSelectable(SettingsButtonPhone, 1);

    WhatsappButtonPhone[0] = TextDrawCreate(381.299, 223.000, "_");
    TextDrawLetterSize(WhatsappButtonPhone[0], 0.608, 2.100);
    TextDrawTextSize(WhatsappButtonPhone[0], 298.500, 16.000);
    TextDrawAlignment(WhatsappButtonPhone[0], 2);
    TextDrawColor(WhatsappButtonPhone[0], -1);
    TextDrawUseBox(WhatsappButtonPhone[0], 1);
    TextDrawBoxColor(WhatsappButtonPhone[0], 2094792959);
    TextDrawSetShadow(WhatsappButtonPhone[0], 0);
    TextDrawSetOutline(WhatsappButtonPhone[0], 0);
    TextDrawBackgroundColor(WhatsappButtonPhone[0], 255);
    TextDrawFont(WhatsappButtonPhone[0], 0);
    TextDrawSetProportional(WhatsappButtonPhone[0], 1);

    WhatsappButtonPhone[1] = TextDrawCreate(375.000, 227.000, "ld_chat:goodcha");
    TextDrawLetterSize(WhatsappButtonPhone[1], 0.600, 2.000);
    TextDrawTextSize(WhatsappButtonPhone[1], 11.000, 11.000);
    TextDrawAlignment(WhatsappButtonPhone[1], 1);
    TextDrawColor(WhatsappButtonPhone[1], -1);
    TextDrawUseBox(WhatsappButtonPhone[1], 1);
    TextDrawBoxColor(WhatsappButtonPhone[1], 50);
    TextDrawSetShadow(WhatsappButtonPhone[1], 0);
    TextDrawSetOutline(WhatsappButtonPhone[1], 0);
    TextDrawBackgroundColor(WhatsappButtonPhone[1], 255);
    TextDrawFont(WhatsappButtonPhone[1], 4);
    TextDrawSetProportional(WhatsappButtonPhone[1], 1);
    TextDrawSetSelectable(WhatsappButtonPhone[1], 1);

    WhatsappButtonPhone[2] = TextDrawCreate(381.500, 245.000, "WhatsApp");
    TextDrawLetterSize(WhatsappButtonPhone[2], 0.132, 0.849);
    TextDrawTextSize(WhatsappButtonPhone[2], 400.000, 122.000);
    TextDrawAlignment(WhatsappButtonPhone[2], 2);
    TextDrawColor(WhatsappButtonPhone[2], -1);
    TextDrawSetShadow(WhatsappButtonPhone[2], 0);
    TextDrawSetOutline(WhatsappButtonPhone[2], 0);
    TextDrawBackgroundColor(WhatsappButtonPhone[2], 255);
    TextDrawFont(WhatsappButtonPhone[2], 1);
    TextDrawSetProportional(WhatsappButtonPhone[2], 1);

    SpotifyButtonPhone[0] = TextDrawCreate(381.299, 262.000, "_");
    TextDrawLetterSize(SpotifyButtonPhone[0], 0.608, 2.100);
    TextDrawTextSize(SpotifyButtonPhone[0], 298.500, 16.000);
    TextDrawAlignment(SpotifyButtonPhone[0], 2);
    TextDrawColor(SpotifyButtonPhone[0], -1);
    TextDrawUseBox(SpotifyButtonPhone[0], 1);
    TextDrawBoxColor(SpotifyButtonPhone[0], 255);
    TextDrawSetShadow(SpotifyButtonPhone[0], 0);
    TextDrawSetOutline(SpotifyButtonPhone[0], 0);
    TextDrawBackgroundColor(SpotifyButtonPhone[0], 255);
    TextDrawFont(SpotifyButtonPhone[0], 0);
    TextDrawSetProportional(SpotifyButtonPhone[0], 1);

    SpotifyButtonPhone[1] = TextDrawCreate(376.500, 266.000, "HUD:radar_datedisco");
    TextDrawLetterSize(SpotifyButtonPhone[1], 0.600, 2.000);
    TextDrawTextSize(SpotifyButtonPhone[1], 10.000, 12.000);
    TextDrawAlignment(SpotifyButtonPhone[1], 1);
    TextDrawColor(SpotifyButtonPhone[1], 16711935);
    TextDrawUseBox(SpotifyButtonPhone[1], 1);
    TextDrawBoxColor(SpotifyButtonPhone[1], 50);
    TextDrawSetShadow(SpotifyButtonPhone[1], 0);
    TextDrawSetOutline(SpotifyButtonPhone[1], 0);
    TextDrawBackgroundColor(SpotifyButtonPhone[1], 255);
    TextDrawFont(SpotifyButtonPhone[1], 4);
    TextDrawSetProportional(SpotifyButtonPhone[1], 1);
    TextDrawSetSelectable(SpotifyButtonPhone[1], 1);

    SpotifyButtonPhone[2] = TextDrawCreate(381.500, 284.000, "Spotify");
    TextDrawLetterSize(SpotifyButtonPhone[2], 0.132, 0.849);
    TextDrawTextSize(SpotifyButtonPhone[2], 400.000, 122.000);
    TextDrawAlignment(SpotifyButtonPhone[2], 2);
    TextDrawColor(SpotifyButtonPhone[2], -1);
    TextDrawSetShadow(SpotifyButtonPhone[2], 0);
    TextDrawSetOutline(SpotifyButtonPhone[2], 0);
    TextDrawBackgroundColor(SpotifyButtonPhone[2], 255);
    TextDrawFont(SpotifyButtonPhone[2], 1);
    TextDrawSetProportional(SpotifyButtonPhone[2], 1);

    TwitterButtonPhone[0] = TextDrawCreate(406.299, 262.000, "_");
    TextDrawLetterSize(TwitterButtonPhone[0], 0.608, 2.100);
    TextDrawTextSize(TwitterButtonPhone[0], 298.500, 16.000);
    TextDrawAlignment(TwitterButtonPhone[0], 2);
    TextDrawColor(TwitterButtonPhone[0], -1);
    TextDrawUseBox(TwitterButtonPhone[0], 1);
    TextDrawBoxColor(TwitterButtonPhone[0], 1221709055);
    TextDrawSetShadow(TwitterButtonPhone[0], 0);
    TextDrawSetOutline(TwitterButtonPhone[0], 0);
    TextDrawBackgroundColor(TwitterButtonPhone[0], 255);
    TextDrawFont(TwitterButtonPhone[0], 0);
    TextDrawSetProportional(TwitterButtonPhone[0], 1);

    TwitterButtonPhone[1] = TextDrawCreate(401.000, 265.000, "ld_grav:beea");
    TextDrawLetterSize(TwitterButtonPhone[1], 0.600, 2.000);
    TextDrawTextSize(TwitterButtonPhone[1], 12.000, 13.000);
    TextDrawAlignment(TwitterButtonPhone[1], 1);
    TextDrawColor(TwitterButtonPhone[1], -1);
    TextDrawUseBox(TwitterButtonPhone[1], 1);
    TextDrawBoxColor(TwitterButtonPhone[1], 50);
    TextDrawSetShadow(TwitterButtonPhone[1], 0);
    TextDrawSetOutline(TwitterButtonPhone[1], 0);
    TextDrawBackgroundColor(TwitterButtonPhone[1], 255);
    TextDrawFont(TwitterButtonPhone[1], 4);
    TextDrawSetProportional(TwitterButtonPhone[1], 1);
    TextDrawSetSelectable(TwitterButtonPhone[1], 1);

    TwitterButtonPhone[2] = TextDrawCreate(405.500, 284.000, "Twiter");
    TextDrawLetterSize(TwitterButtonPhone[2], 0.132, 0.849);
    TextDrawTextSize(TwitterButtonPhone[2], 400.000, 122.000);
    TextDrawAlignment(TwitterButtonPhone[2], 2);
    TextDrawColor(TwitterButtonPhone[2], -1);
    TextDrawSetShadow(TwitterButtonPhone[2], 0);
    TextDrawSetOutline(TwitterButtonPhone[2], 0);
    TextDrawBackgroundColor(TwitterButtonPhone[2], 255);
    TextDrawFont(TwitterButtonPhone[2], 1);
    TextDrawSetProportional(TwitterButtonPhone[2], 1);

    UberButtonPhone[0] = TextDrawCreate(431.299, 262.000, "_");
    TextDrawLetterSize(UberButtonPhone[0], 0.608, 2.100);
    TextDrawTextSize(UberButtonPhone[0], 298.500, 16.000);
    TextDrawAlignment(UberButtonPhone[0], 2);
    TextDrawColor(UberButtonPhone[0], -1);
    TextDrawUseBox(UberButtonPhone[0], 1);
    TextDrawBoxColor(UberButtonPhone[0], -1);
    TextDrawSetShadow(UberButtonPhone[0], 0);
    TextDrawSetOutline(UberButtonPhone[0], 0);
    TextDrawBackgroundColor(UberButtonPhone[0], 255);
    TextDrawFont(UberButtonPhone[0], 0);
    TextDrawSetProportional(UberButtonPhone[0], 1);

    UberButtonPhone[1] = TextDrawCreate(426.000, 267.000, "HUD:radar_triadscasino");
    TextDrawLetterSize(UberButtonPhone[1], 0.600, 2.000);
    TextDrawTextSize(UberButtonPhone[1], 11.000, 11.000);
    TextDrawAlignment(UberButtonPhone[1], 1);
    TextDrawColor(UberButtonPhone[1], -1094795521);
    TextDrawUseBox(UberButtonPhone[1], 1);
    TextDrawBoxColor(UberButtonPhone[1], 50);
    TextDrawSetShadow(UberButtonPhone[1], 0);
    TextDrawSetOutline(UberButtonPhone[1], 1);
    TextDrawBackgroundColor(UberButtonPhone[1], 255);
    TextDrawFont(UberButtonPhone[1], 4);
    TextDrawSetProportional(UberButtonPhone[1], 1);
    TextDrawSetSelectable(UberButtonPhone[1], 1);

    UberButtonPhone[2] = TextDrawCreate(431.500, 284.000, "Uber");
    TextDrawLetterSize(UberButtonPhone[2], 0.132, 0.849);
    TextDrawTextSize(UberButtonPhone[2], 400.000, 122.000);
    TextDrawAlignment(UberButtonPhone[2], 2);
    TextDrawColor(UberButtonPhone[2], -1);
    TextDrawSetShadow(UberButtonPhone[2], 0);
    TextDrawSetOutline(UberButtonPhone[2], 0);
    TextDrawBackgroundColor(UberButtonPhone[2], 255);
    TextDrawFont(UberButtonPhone[2], 1);
    TextDrawSetProportional(UberButtonPhone[2], 1);

    YellowButtonPhone[0] = TextDrawCreate(456.299, 262.000, "_");
    TextDrawLetterSize(YellowButtonPhone[0], 0.608, 2.100);
    TextDrawTextSize(YellowButtonPhone[0], 298.500, 16.000);
    TextDrawAlignment(YellowButtonPhone[0], 2);
    TextDrawColor(YellowButtonPhone[0], -1);
    TextDrawUseBox(YellowButtonPhone[0], 1);
    TextDrawBoxColor(YellowButtonPhone[0], -626712321);
    TextDrawSetShadow(YellowButtonPhone[0], 0);
    TextDrawSetOutline(YellowButtonPhone[0], 0);
    TextDrawBackgroundColor(YellowButtonPhone[0], 255);
    TextDrawFont(YellowButtonPhone[0], 0);
    TextDrawSetProportional(YellowButtonPhone[0], 1);

    YellowButtonPhone[1] = TextDrawCreate(450.000, 264.000, "HUD:radar_gangy");
    TextDrawLetterSize(YellowButtonPhone[1], 0.600, 2.000);
    TextDrawTextSize(YellowButtonPhone[1], 13.000, 13.000);
    TextDrawAlignment(YellowButtonPhone[1], 1);
    TextDrawColor(YellowButtonPhone[1], -1);
    TextDrawUseBox(YellowButtonPhone[1], 1);
    TextDrawBoxColor(YellowButtonPhone[1], 50);
    TextDrawSetShadow(YellowButtonPhone[1], 0);
    TextDrawSetOutline(YellowButtonPhone[1], 0);
    TextDrawBackgroundColor(YellowButtonPhone[1], 255);
    TextDrawFont(YellowButtonPhone[1], 4);
    TextDrawSetProportional(YellowButtonPhone[1], 1);
    TextDrawSetSelectable(YellowButtonPhone[1], 1);

    YellowButtonPhone[2] = TextDrawCreate(456.500, 284.000, "Yellow");
    TextDrawLetterSize(YellowButtonPhone[2], 0.132, 0.849);
    TextDrawTextSize(YellowButtonPhone[2], 400.000, 122.000);
    TextDrawAlignment(YellowButtonPhone[2], 2);
    TextDrawColor(YellowButtonPhone[2], -1);
    TextDrawSetShadow(YellowButtonPhone[2], 0);
    TextDrawSetOutline(YellowButtonPhone[2], 0);
    TextDrawBackgroundColor(YellowButtonPhone[2], 255);
    TextDrawFont(YellowButtonPhone[2], 1);
    TextDrawSetProportional(YellowButtonPhone[2], 1);

    PhoneMainMenuClock = TextDrawCreate(381.000, 155.000, "10:45");
    TextDrawLetterSize(PhoneMainMenuClock, 0.162, 1.049);
    TextDrawTextSize(PhoneMainMenuClock, 400.000, 122.000);
    TextDrawAlignment(PhoneMainMenuClock, 2);
    TextDrawColor(PhoneMainMenuClock, -1);
    TextDrawSetShadow(PhoneMainMenuClock, 0);
    TextDrawSetOutline(PhoneMainMenuClock, 0);
    TextDrawBackgroundColor(PhoneMainMenuClock, 255);
    TextDrawFont(PhoneMainMenuClock, 1);
    TextDrawSetProportional(PhoneMainMenuClock, 1);

    BateraiTD[0] = TextDrawCreate(440.000, 162.000, "LD_SPAC:white");
    TextDrawTextSize(BateraiTD[0], -1.000, -2.000);
    TextDrawAlignment(BateraiTD[0], 1);
    TextDrawColor(BateraiTD[0], -65793);
    TextDrawSetShadow(BateraiTD[0], 0);
    TextDrawSetOutline(BateraiTD[0], 0);
    TextDrawBackgroundColor(BateraiTD[0], 255);
    TextDrawFont(BateraiTD[0], 4);
    TextDrawSetProportional(BateraiTD[0], 1);

    BateraiTD[1] = TextDrawCreate(442.000, 162.000, "LD_SPAC:white");
    TextDrawTextSize(BateraiTD[1], -1.000, -4.000);
    TextDrawAlignment(BateraiTD[1], 1);
    TextDrawColor(BateraiTD[1], -65793);
    TextDrawSetShadow(BateraiTD[1], 0);
    TextDrawSetOutline(BateraiTD[1], 0);
    TextDrawBackgroundColor(BateraiTD[1], 255);
    TextDrawFont(BateraiTD[1], 4);
    TextDrawSetProportional(BateraiTD[1], 1);

    BateraiTD[2] = TextDrawCreate(444.000, 162.000, "LD_SPAC:white");
    TextDrawTextSize(BateraiTD[2], -1.000, -5.000);
    TextDrawAlignment(BateraiTD[2], 1);
    TextDrawColor(BateraiTD[2], -65793);
    TextDrawSetShadow(BateraiTD[2], 0);
    TextDrawSetOutline(BateraiTD[2], 0);
    TextDrawBackgroundColor(BateraiTD[2], 255);
    TextDrawFont(BateraiTD[2], 4);
    TextDrawSetProportional(BateraiTD[2], 1);

    BateraiTD[3] = TextDrawCreate(453.000, 162.000, "LD_SPAC:white");
    TextDrawTextSize(BateraiTD[3], 9.000, -6.000);
    TextDrawAlignment(BateraiTD[3], 1);
    TextDrawColor(BateraiTD[3], -1919707649);
    TextDrawSetShadow(BateraiTD[3], 0);
    TextDrawSetOutline(BateraiTD[3], 0);
    TextDrawBackgroundColor(BateraiTD[3], 255);
    TextDrawFont(BateraiTD[3], 4);
    TextDrawSetProportional(BateraiTD[3], 1);

    BateraiTD[4] = TextDrawCreate(464.000, 161.000, "LD_SPAC:white");
    TextDrawTextSize(BateraiTD[4], -1.000, -3.000);
    TextDrawAlignment(BateraiTD[4], 1);
    TextDrawColor(BateraiTD[4], -1919707649);
    TextDrawSetShadow(BateraiTD[4], 0);
    TextDrawSetOutline(BateraiTD[4], 0);
    TextDrawBackgroundColor(BateraiTD[4], 255);
    TextDrawFont(BateraiTD[4], 4);
    TextDrawSetProportional(BateraiTD[4], 1);

    BateraiTD[5] = TextDrawCreate(453.000, 162.000, "LD_SPAC:white");
    TextDrawTextSize(BateraiTD[5], 5.000, -6.000);
    TextDrawAlignment(BateraiTD[5], 1);
    TextDrawColor(BateraiTD[5], 1804477439);
    TextDrawSetShadow(BateraiTD[5], 0);
    TextDrawSetOutline(BateraiTD[5], 0);
    TextDrawBackgroundColor(BateraiTD[5], 255);
    TextDrawFont(BateraiTD[5], 4);
    TextDrawSetProportional(BateraiTD[5], 1);

    BateraiTD[6] = TextDrawCreate(445.000, 155.000, "4G");
    TextDrawLetterSize(BateraiTD[6], 0.150, 0.898);
    TextDrawTextSize(BateraiTD[6], -2.000, -1.000);
    TextDrawAlignment(BateraiTD[6], 1);
    TextDrawColor(BateraiTD[6], -65793);
    TextDrawSetShadow(BateraiTD[6], 0);
    TextDrawSetOutline(BateraiTD[6], 0);
    TextDrawBackgroundColor(BateraiTD[6], 150);
    TextDrawFont(BateraiTD[6], 1);
    TextDrawSetProportional(BateraiTD[6], 1);

    BateraiTD[7] = TextDrawCreate(455.000, 155.000, "60");
    TextDrawLetterSize(BateraiTD[7], 0.128, 0.799);
    TextDrawTextSize(BateraiTD[7], -2.000, -1.000);
    TextDrawAlignment(BateraiTD[7], 1);
    TextDrawColor(BateraiTD[7], 255);
    TextDrawSetShadow(BateraiTD[7], 0);
    TextDrawSetOutline(BateraiTD[7], 0);
    TextDrawBackgroundColor(BateraiTD[7], 150);
    TextDrawFont(BateraiTD[7], 1);
    TextDrawSetProportional(BateraiTD[7], 1);    

    GreenButtonIncomingPhone = TextDrawCreate(430.000, 329.000, "ld_beat:chit");
    TextDrawLetterSize(GreenButtonIncomingPhone, 0.600, 2.000);
    TextDrawTextSize(GreenButtonIncomingPhone, 28.500, 32.500);
    TextDrawAlignment(GreenButtonIncomingPhone, 1);
    TextDrawColor(GreenButtonIncomingPhone, 9109759);
    TextDrawUseBox(GreenButtonIncomingPhone, 1);
    TextDrawBoxColor(GreenButtonIncomingPhone, 50);
    TextDrawSetShadow(GreenButtonIncomingPhone, 0);
    TextDrawSetOutline(GreenButtonIncomingPhone, 0);
    TextDrawBackgroundColor(GreenButtonIncomingPhone, 255);
    TextDrawFont(GreenButtonIncomingPhone, 4);
    TextDrawSetProportional(GreenButtonIncomingPhone, 1);
    TextDrawSetSelectable(GreenButtonIncomingPhone, 1);

    RedButtonIncomingPhone = TextDrawCreate(381.000, 329.000, "ld_beat:chit");
    TextDrawLetterSize(RedButtonIncomingPhone, 0.600, 2.000);
    TextDrawTextSize(RedButtonIncomingPhone, 28.500, 32.500);
    TextDrawAlignment(RedButtonIncomingPhone, 1);
    TextDrawColor(RedButtonIncomingPhone, -1962934017);
    TextDrawUseBox(RedButtonIncomingPhone, 1);
    TextDrawBoxColor(RedButtonIncomingPhone, 50);
    TextDrawSetShadow(RedButtonIncomingPhone, 0);
    TextDrawSetOutline(RedButtonIncomingPhone, 0);
    TextDrawBackgroundColor(RedButtonIncomingPhone, 255);
    TextDrawFont(RedButtonIncomingPhone, 4);
    TextDrawSetProportional(RedButtonIncomingPhone, 1);
    TextDrawSetSelectable(RedButtonIncomingPhone, 1);

    RedButtonOutcomingPhone = TextDrawCreate(405.000, 329.000, "ld_beat:chit");
    TextDrawLetterSize(RedButtonOutcomingPhone, 0.600, 2.000);
    TextDrawTextSize(RedButtonOutcomingPhone, 28.500, 32.500);
    TextDrawAlignment(RedButtonOutcomingPhone, 1);
    TextDrawColor(RedButtonOutcomingPhone, -1962934017);
    TextDrawUseBox(RedButtonOutcomingPhone, 1);
    TextDrawBoxColor(RedButtonOutcomingPhone, 50);
    TextDrawSetShadow(RedButtonOutcomingPhone, 0);
    TextDrawSetOutline(RedButtonOutcomingPhone, 0);
    TextDrawBackgroundColor(RedButtonOutcomingPhone, 255);
    TextDrawFont(RedButtonOutcomingPhone, 4);
    TextDrawSetProportional(RedButtonOutcomingPhone, 1);
    TextDrawSetSelectable(RedButtonOutcomingPhone, 1);

    //banking
    BankingTD[0] = TextDrawCreate(388.000, 301.000, "LD_BUM:blkdot");
    TextDrawTextSize(BankingTD[0], 56.000, 18.000);
    TextDrawAlignment(BankingTD[0], 1);
    TextDrawColor(BankingTD[0], -1);
    TextDrawSetShadow(BankingTD[0], 0);
    TextDrawSetOutline(BankingTD[0], 0);
    TextDrawBackgroundColor(BankingTD[0], 255);
    TextDrawFont(BankingTD[0], 4);
    TextDrawSetProportional(BankingTD[0], 1);
    TextDrawSetSelectable(BankingTD[0], 1);

    BankingTD[1] = TextDrawCreate(386.000, 177.000, "Fleeca Bank");
    TextDrawLetterSize(BankingTD[1], 0.300, 1.500);
    TextDrawAlignment(BankingTD[1], 1);
    TextDrawColor(BankingTD[1], 16711935);
    TextDrawSetShadow(BankingTD[1], 0);
    TextDrawSetOutline(BankingTD[1], 0);
    TextDrawBackgroundColor(BankingTD[1], 150);
    TextDrawFont(BankingTD[1], 1);
    TextDrawSetProportional(BankingTD[1], 1);

    BankingTD[2] = TextDrawCreate(375.000, 202.000, "Nama");
    TextDrawLetterSize(BankingTD[2], 0.230, 1.099);
    TextDrawAlignment(BankingTD[2], 1);
    TextDrawColor(BankingTD[2], -1);
    TextDrawSetShadow(BankingTD[2], 0);
    TextDrawSetOutline(BankingTD[2], 0);
    TextDrawBackgroundColor(BankingTD[2], 150);
    TextDrawFont(BankingTD[2], 1);
    TextDrawSetProportional(BankingTD[2], 1);

    BankingTD[3] = TextDrawCreate(375.000, 226.000, "Saldo");
    TextDrawLetterSize(BankingTD[3], 0.230, 1.099);
    TextDrawAlignment(BankingTD[3], 1);
    TextDrawColor(BankingTD[3], -1);
    TextDrawSetShadow(BankingTD[3], 0);
    TextDrawSetOutline(BankingTD[3], 0);
    TextDrawBackgroundColor(BankingTD[3], 150);
    TextDrawFont(BankingTD[3], 1);
    TextDrawSetProportional(BankingTD[3], 1);

    BankingTD[4] = TextDrawCreate(375.000, 250.000, "No Rek");
    TextDrawLetterSize(BankingTD[4], 0.230, 1.099);
    TextDrawAlignment(BankingTD[4], 1);
    TextDrawColor(BankingTD[4], -1);
    TextDrawSetShadow(BankingTD[4], 0);
    TextDrawSetOutline(BankingTD[4], 0);
    TextDrawBackgroundColor(BankingTD[4], 150);
    TextDrawFont(BankingTD[4], 1);
    TextDrawSetProportional(BankingTD[4], 1);

    BankingTD[5] = TextDrawCreate(375.000, 260.000, "LD_BUM:blkdot");
    TextDrawTextSize(BankingTD[5], 73.000, 1.000);
    TextDrawAlignment(BankingTD[5], 1);
    TextDrawColor(BankingTD[5], -1);
    TextDrawSetShadow(BankingTD[5], 0);
    TextDrawSetOutline(BankingTD[5], 0);
    TextDrawBackgroundColor(BankingTD[5], 255);
    TextDrawFont(BankingTD[5], 4);
    TextDrawSetProportional(BankingTD[5], 1);

    BankingTD[6] = TextDrawCreate(375.000, 236.000, "LD_BUM:blkdot");
    TextDrawTextSize(BankingTD[6], 73.000, 1.000);
    TextDrawAlignment(BankingTD[6], 1);
    TextDrawColor(BankingTD[6], -1);
    TextDrawSetShadow(BankingTD[6], 0);
    TextDrawSetOutline(BankingTD[6], 0);
    TextDrawBackgroundColor(BankingTD[6], 255);
    TextDrawFont(BankingTD[6], 4);
    TextDrawSetProportional(BankingTD[6], 1);

    BankingTD[7] = TextDrawCreate(375.000, 212.000, "LD_BUM:blkdot");
    TextDrawTextSize(BankingTD[7], 73.000, 1.000);
    TextDrawAlignment(BankingTD[7], 1);
    TextDrawColor(BankingTD[7], -1);
    TextDrawSetShadow(BankingTD[7], 0);
    TextDrawSetOutline(BankingTD[7], 0);
    TextDrawBackgroundColor(BankingTD[7], 255);
    TextDrawFont(BankingTD[7], 4);
    TextDrawSetProportional(BankingTD[7], 1);

    BankingTD[8] = TextDrawCreate(403.000, 247.000, ":");
    TextDrawLetterSize(BankingTD[8], 0.300, 1.500);
    TextDrawAlignment(BankingTD[8], 1);
    TextDrawColor(BankingTD[8], -1);
    TextDrawSetShadow(BankingTD[8], 0);
    TextDrawSetOutline(BankingTD[8], 0);
    TextDrawBackgroundColor(BankingTD[8], 150);
    TextDrawFont(BankingTD[8], 1);
    TextDrawSetProportional(BankingTD[8], 1);

    BankingTD[9] = TextDrawCreate(403.000, 223.000, ":");
    TextDrawLetterSize(BankingTD[9], 0.300, 1.500);
    TextDrawAlignment(BankingTD[9], 1);
    TextDrawColor(BankingTD[9], -1);
    TextDrawSetShadow(BankingTD[9], 0);
    TextDrawSetOutline(BankingTD[9], 0);
    TextDrawBackgroundColor(BankingTD[9], 150);
    TextDrawFont(BankingTD[9], 1);
    TextDrawSetProportional(BankingTD[9], 1);

    BankingTD[10] = TextDrawCreate(403.000, 199.000, ":");
    TextDrawLetterSize(BankingTD[10], 0.300, 1.500);
    TextDrawAlignment(BankingTD[10], 1);
    TextDrawColor(BankingTD[10], -1);
    TextDrawSetShadow(BankingTD[10], 0);
    TextDrawSetOutline(BankingTD[10], 0);
    TextDrawBackgroundColor(BankingTD[10], 150);
    TextDrawFont(BankingTD[10], 1);
    TextDrawSetProportional(BankingTD[10], 1);

    BankingTD[11] = TextDrawCreate(397.000, 304.000, "TRANSFER");
    TextDrawLetterSize(BankingTD[11], 0.230, 1.099);
    TextDrawAlignment(BankingTD[11], 1);
    TextDrawColor(BankingTD[11], 255);
    TextDrawSetShadow(BankingTD[11], 0);
    TextDrawSetOutline(BankingTD[11], 0);
    TextDrawBackgroundColor(BankingTD[11], 150);
    TextDrawFont(BankingTD[11], 1);
    TextDrawSetProportional(BankingTD[11], 1);

}

CreatePhoneAppStoreTD()
{
    AppStoreTD[0] = TextDrawCreate(371.000, 201.000, "LD_BUM:blkdot");
    TextDrawTextSize(AppStoreTD[0], 19.000, 21.000);
    TextDrawAlignment(AppStoreTD[0], 1);
    TextDrawColor(AppStoreTD[0], 16711935);
    TextDrawSetShadow(AppStoreTD[0], 0);
    TextDrawSetOutline(AppStoreTD[0], 0);
    TextDrawBackgroundColor(AppStoreTD[0], 255);
    TextDrawFont(AppStoreTD[0], 4);
    TextDrawSetProportional(AppStoreTD[0], 1);

    AppStoreTD[1] = TextDrawCreate(371.000, 230.000, "LD_BUM:blkdot");
    TextDrawTextSize(AppStoreTD[1], 19.000, 21.000);
    TextDrawAlignment(AppStoreTD[1], 1);
    TextDrawColor(AppStoreTD[1], 255);
    TextDrawSetShadow(AppStoreTD[1], 0);
    TextDrawSetOutline(AppStoreTD[1], 0);
    TextDrawBackgroundColor(AppStoreTD[1], 255);
    TextDrawFont(AppStoreTD[1], 4);
    TextDrawSetProportional(AppStoreTD[1], 1);

    AppStoreTD[2] = TextDrawCreate(371.000, 259.000, "LD_BUM:blkdot");
    TextDrawTextSize(AppStoreTD[2], 19.000, 21.000);
    TextDrawAlignment(AppStoreTD[2], 1);
    TextDrawColor(AppStoreTD[2], 12582911);
    TextDrawSetShadow(AppStoreTD[2], 0);
    TextDrawSetOutline(AppStoreTD[2], 0);
    TextDrawBackgroundColor(AppStoreTD[2], 255);
    TextDrawFont(AppStoreTD[2], 4);
    TextDrawSetProportional(AppStoreTD[2], 1);

    AppStoreTD[3] = TextDrawCreate(371.000, 288.000, "LD_BUM:blkdot");
    TextDrawTextSize(AppStoreTD[3], 19.000, 21.000);
    TextDrawAlignment(AppStoreTD[3], 1);
    TextDrawColor(AppStoreTD[3], -1);
    TextDrawSetShadow(AppStoreTD[3], 0);
    TextDrawSetOutline(AppStoreTD[3], 0);
    TextDrawBackgroundColor(AppStoreTD[3], 255);
    TextDrawFont(AppStoreTD[3], 4);
    TextDrawSetProportional(AppStoreTD[3], 1);

    AppStoreTD[4] = TextDrawCreate(371.000, 317.000, "LD_BUM:blkdot");
    TextDrawTextSize(AppStoreTD[4], 19.000, 21.000);
    TextDrawAlignment(AppStoreTD[4], 1);
    TextDrawColor(AppStoreTD[4], -5963521);
    TextDrawSetShadow(AppStoreTD[4], 0);
    TextDrawSetOutline(AppStoreTD[4], 0);
    TextDrawBackgroundColor(AppStoreTD[4], 255);
    TextDrawFont(AppStoreTD[4], 4);
    TextDrawSetProportional(AppStoreTD[4], 1);

    AppStoreTD[5] = TextDrawCreate(371.000, 252.000, "LD_SPAC:white");
    TextDrawTextSize(AppStoreTD[5], 92.000, 1.000);
    TextDrawAlignment(AppStoreTD[5], 1);
    TextDrawColor(AppStoreTD[5], -1);
    TextDrawSetShadow(AppStoreTD[5], 0);
    TextDrawSetOutline(AppStoreTD[5], 0);
    TextDrawBackgroundColor(AppStoreTD[5], 255);
    TextDrawFont(AppStoreTD[5], 4);
    TextDrawSetProportional(AppStoreTD[5], 1);

    AppStoreTD[6] = TextDrawCreate(371.000, 281.000, "LD_SPAC:white");
    TextDrawTextSize(AppStoreTD[6], 92.000, 1.000);
    TextDrawAlignment(AppStoreTD[6], 1);
    TextDrawColor(AppStoreTD[6], -1);
    TextDrawSetShadow(AppStoreTD[6], 0);
    TextDrawSetOutline(AppStoreTD[6], 0);
    TextDrawBackgroundColor(AppStoreTD[6], 255);
    TextDrawFont(AppStoreTD[6], 4);
    TextDrawSetProportional(AppStoreTD[6], 1);

    AppStoreTD[7] = TextDrawCreate(371.000, 310.000, "LD_SPAC:white");
    TextDrawTextSize(AppStoreTD[7], 92.000, 1.000);
    TextDrawAlignment(AppStoreTD[7], 1);
    TextDrawColor(AppStoreTD[7], -1);
    TextDrawSetShadow(AppStoreTD[7], 0);
    TextDrawSetOutline(AppStoreTD[7], 0);
    TextDrawBackgroundColor(AppStoreTD[7], 255);
    TextDrawFont(AppStoreTD[7], 4);
    TextDrawSetProportional(AppStoreTD[7], 1);

    AppStoreTD[8] = TextDrawCreate(371.000, 340.000, "LD_SPAC:white");
    TextDrawTextSize(AppStoreTD[8], 92.000, 1.000);
    TextDrawAlignment(AppStoreTD[8], 1);
    TextDrawColor(AppStoreTD[8], -1);
    TextDrawSetShadow(AppStoreTD[8], 0);
    TextDrawSetOutline(AppStoreTD[8], 0);
    TextDrawBackgroundColor(AppStoreTD[8], 255);
    TextDrawFont(AppStoreTD[8], 4);
    TextDrawSetProportional(AppStoreTD[8], 1);

    AppStoreTD[9] = TextDrawCreate(371.000, 224.000, "LD_SPAC:white");
    TextDrawTextSize(AppStoreTD[9], 92.000, 1.000);
    TextDrawAlignment(AppStoreTD[9], 1);
    TextDrawColor(AppStoreTD[9], -1);
    TextDrawSetShadow(AppStoreTD[9], 0);
    TextDrawSetOutline(AppStoreTD[9], 0);
    TextDrawBackgroundColor(AppStoreTD[9], 255);
    TextDrawFont(AppStoreTD[9], 4);
    TextDrawSetProportional(AppStoreTD[9], 1);

    AppStoreTD[10] = TextDrawCreate(375.000, 206.000, "ld_chat:goodcha");
    TextDrawLetterSize(AppStoreTD[10], 0.600, 2.000);
    TextDrawTextSize(AppStoreTD[10], 11.000, 10.000);
    TextDrawAlignment(AppStoreTD[10], 1);
    TextDrawColor(AppStoreTD[10], -1);
    TextDrawUseBox(AppStoreTD[10], 1);
    TextDrawBoxColor(AppStoreTD[10], 50);
    TextDrawSetShadow(AppStoreTD[10], 0);
    TextDrawSetOutline(AppStoreTD[10], 0);
    TextDrawBackgroundColor(AppStoreTD[10], 255);
    TextDrawFont(AppStoreTD[10], 4);
    TextDrawSetProportional(AppStoreTD[10], 1);

    AppStoreTD[11] = TextDrawCreate(392.000, 208.000, "WhatsApp");
    TextDrawLetterSize(AppStoreTD[11], 0.137, 0.899);
    TextDrawTextSize(AppStoreTD[11], 605.000, 17.000);
    TextDrawAlignment(AppStoreTD[11], 1);
    TextDrawColor(AppStoreTD[11], 255);
    TextDrawSetShadow(AppStoreTD[11], 0);
    TextDrawSetOutline(AppStoreTD[11], 0);
    TextDrawBackgroundColor(AppStoreTD[11], 255);
    TextDrawFont(AppStoreTD[11], 1);
    TextDrawSetProportional(AppStoreTD[11], 1);

    AppStoreTD[12] = TextDrawCreate(392.000, 216.000, "Sederhana. Reliabel. Privat");
    TextDrawLetterSize(AppStoreTD[12], 0.108, 0.699);
    TextDrawTextSize(AppStoreTD[12], 590.000, 17.000);
    TextDrawAlignment(AppStoreTD[12], 1);
    TextDrawColor(AppStoreTD[12], -1);
    TextDrawSetShadow(AppStoreTD[12], 0);
    TextDrawSetOutline(AppStoreTD[12], 0);
    TextDrawBackgroundColor(AppStoreTD[12], 255);
    TextDrawFont(AppStoreTD[12], 1);
    TextDrawSetProportional(AppStoreTD[12], 1);

    AppStoreTD[13] = TextDrawCreate(373.000, 233.000, "HUD:radar_datedisco");
    TextDrawLetterSize(AppStoreTD[13], 0.600, 2.000);
    TextDrawTextSize(AppStoreTD[13], 14.000, 15.000);
    TextDrawAlignment(AppStoreTD[13], 1);
    TextDrawColor(AppStoreTD[13], 16711935);
    TextDrawUseBox(AppStoreTD[13], 1);
    TextDrawBoxColor(AppStoreTD[13], 50);
    TextDrawSetShadow(AppStoreTD[13], 0);
    TextDrawSetOutline(AppStoreTD[13], 0);
    TextDrawBackgroundColor(AppStoreTD[13], 255);
    TextDrawFont(AppStoreTD[13], 4);
    TextDrawSetProportional(AppStoreTD[13], 1);

    AppStoreTD[14] = TextDrawCreate(392.000, 237.000, "Spotify");
    TextDrawLetterSize(AppStoreTD[14], 0.137, 0.899);
    TextDrawTextSize(AppStoreTD[14], 605.000, 17.000);
    TextDrawAlignment(AppStoreTD[14], 1);
    TextDrawColor(AppStoreTD[14], 255);
    TextDrawSetShadow(AppStoreTD[14], 0);
    TextDrawSetOutline(AppStoreTD[14], 0);
    TextDrawBackgroundColor(AppStoreTD[14], 255);
    TextDrawFont(AppStoreTD[14], 1);
    TextDrawSetProportional(AppStoreTD[14], 1);

    AppStoreTD[15] = TextDrawCreate(392.000, 245.000, "Dengarkan playlist & musik");
    TextDrawLetterSize(AppStoreTD[15], 0.108, 0.699);
    TextDrawTextSize(AppStoreTD[15], 590.000, 17.000);
    TextDrawAlignment(AppStoreTD[15], 1);
    TextDrawColor(AppStoreTD[15], -1);
    TextDrawSetShadow(AppStoreTD[15], 0);
    TextDrawSetOutline(AppStoreTD[15], 0);
    TextDrawBackgroundColor(AppStoreTD[15], 255);
    TextDrawFont(AppStoreTD[15], 1);
    TextDrawSetProportional(AppStoreTD[15], 1);

    AppStoreTD[16] = TextDrawCreate(374.000, 261.000, "ld_grav:beea");
    TextDrawLetterSize(AppStoreTD[16], 0.600, 2.000);
    TextDrawTextSize(AppStoreTD[16], 13.000, 14.000);
    TextDrawAlignment(AppStoreTD[16], 1);
    TextDrawColor(AppStoreTD[16], -1);
    TextDrawUseBox(AppStoreTD[16], 1);
    TextDrawBoxColor(AppStoreTD[16], 50);
    TextDrawSetShadow(AppStoreTD[16], 0);
    TextDrawSetOutline(AppStoreTD[16], 0);
    TextDrawBackgroundColor(AppStoreTD[16], 255);
    TextDrawFont(AppStoreTD[16], 4);
    TextDrawSetProportional(AppStoreTD[16], 1);

    AppStoreTD[17] = TextDrawCreate(392.000, 266.000, "Twitter");
    TextDrawLetterSize(AppStoreTD[17], 0.137, 0.899);
    TextDrawTextSize(AppStoreTD[17], 605.000, 17.000);
    TextDrawAlignment(AppStoreTD[17], 1);
    TextDrawColor(AppStoreTD[17], 255);
    TextDrawSetShadow(AppStoreTD[17], 0);
    TextDrawSetOutline(AppStoreTD[17], 0);
    TextDrawBackgroundColor(AppStoreTD[17], 255);
    TextDrawFont(AppStoreTD[17], 1);
    TextDrawSetProportional(AppStoreTD[17], 1);

    AppStoreTD[18] = TextDrawCreate(392.000, 274.000, "Galau, alay, pansos, caper");
    TextDrawLetterSize(AppStoreTD[18], 0.108, 0.699);
    TextDrawTextSize(AppStoreTD[18], 590.000, 17.000);
    TextDrawAlignment(AppStoreTD[18], 1);
    TextDrawColor(AppStoreTD[18], -1);
    TextDrawSetShadow(AppStoreTD[18], 0);
    TextDrawSetOutline(AppStoreTD[18], 0);
    TextDrawBackgroundColor(AppStoreTD[18], 255);
    TextDrawFont(AppStoreTD[18], 1);
    TextDrawSetProportional(AppStoreTD[18], 1);

    AppStoreTD[19] = TextDrawCreate(374.000, 292.000, "HUD:radar_triadscasino");
    TextDrawLetterSize(AppStoreTD[19], 0.600, 2.000);
    TextDrawTextSize(AppStoreTD[19], 13.000, 13.000);
    TextDrawAlignment(AppStoreTD[19], 1);
    TextDrawColor(AppStoreTD[19], -1094795521);
    TextDrawUseBox(AppStoreTD[19], 1);
    TextDrawBoxColor(AppStoreTD[19], 50);
    TextDrawSetShadow(AppStoreTD[19], 0);
    TextDrawSetOutline(AppStoreTD[19], 0);
    TextDrawBackgroundColor(AppStoreTD[19], 255);
    TextDrawFont(AppStoreTD[19], 4);
    TextDrawSetProportional(AppStoreTD[19], 1);

    AppStoreTD[20] = TextDrawCreate(392.000, 295.000, "Uber");
    TextDrawLetterSize(AppStoreTD[20], 0.137, 0.899);
    TextDrawTextSize(AppStoreTD[20], 605.000, 17.000);
    TextDrawAlignment(AppStoreTD[20], 1);
    TextDrawColor(AppStoreTD[20], 255);
    TextDrawSetShadow(AppStoreTD[20], 0);
    TextDrawSetOutline(AppStoreTD[20], 0);
    TextDrawBackgroundColor(AppStoreTD[20], 255);
    TextDrawFont(AppStoreTD[20], 1);
    TextDrawSetProportional(AppStoreTD[20], 1);

    AppStoreTD[21] = TextDrawCreate(392.000, 303.000, "For all the places you want to go");
    TextDrawLetterSize(AppStoreTD[21], 0.108, 0.699);
    TextDrawTextSize(AppStoreTD[21], 590.000, 17.000);
    TextDrawAlignment(AppStoreTD[21], 1);
    TextDrawColor(AppStoreTD[21], -1);
    TextDrawSetShadow(AppStoreTD[21], 0);
    TextDrawSetOutline(AppStoreTD[21], 0);
    TextDrawBackgroundColor(AppStoreTD[21], 255);
    TextDrawFont(AppStoreTD[21], 1);
    TextDrawSetProportional(AppStoreTD[21], 1);

    AppStoreTD[22] = TextDrawCreate(372.000, 320.000, "HUD:radar_gangy");
    TextDrawLetterSize(AppStoreTD[22], 0.600, 2.000);
    TextDrawTextSize(AppStoreTD[22], 16.000, 14.000);
    TextDrawAlignment(AppStoreTD[22], 1);
    TextDrawColor(AppStoreTD[22], -1);
    TextDrawUseBox(AppStoreTD[22], 1);
    TextDrawBoxColor(AppStoreTD[22], 50);
    TextDrawSetShadow(AppStoreTD[22], 0);
    TextDrawSetOutline(AppStoreTD[22], 1);
    TextDrawBackgroundColor(AppStoreTD[22], 255);
    TextDrawFont(AppStoreTD[22], 4);
    TextDrawSetProportional(AppStoreTD[22], 1);

    AppStoreTD[23] = TextDrawCreate(398.000, 181.000, "Download App");
    TextDrawLetterSize(AppStoreTD[23], 0.166, 1.049);
    TextDrawTextSize(AppStoreTD[23], 400.000, 97.000);
    TextDrawAlignment(AppStoreTD[23], 2);
    TextDrawColor(AppStoreTD[23], -1);
    TextDrawSetShadow(AppStoreTD[23], 0);
    TextDrawSetOutline(AppStoreTD[23], 0);
    TextDrawBackgroundColor(AppStoreTD[23], 255);
    TextDrawFont(AppStoreTD[23], 1);
    TextDrawSetProportional(AppStoreTD[23], 1);

    AppStoreTD[24] = TextDrawCreate(392.000, 324.000, "Yellow");
    TextDrawLetterSize(AppStoreTD[24], 0.136, 0.898);
    TextDrawTextSize(AppStoreTD[24], 605.000, 17.000);
    TextDrawAlignment(AppStoreTD[24], 1);
    TextDrawColor(AppStoreTD[24], 255);
    TextDrawSetShadow(AppStoreTD[24], 0);
    TextDrawSetOutline(AppStoreTD[24], 0);
    TextDrawBackgroundColor(AppStoreTD[24], 255);
    TextDrawFont(AppStoreTD[24], 1);
    TextDrawSetProportional(AppStoreTD[24], 1);

    AppStoreTD[25] = TextDrawCreate(392.000, 332.000, "Promosi dan iklan jadi lebih mudah");
    TextDrawLetterSize(AppStoreTD[25], 0.108, 0.699);
    TextDrawTextSize(AppStoreTD[25], 590.000, 17.000);
    TextDrawAlignment(AppStoreTD[25], 1);
    TextDrawColor(AppStoreTD[25], -1);
    TextDrawSetShadow(AppStoreTD[25], 0);
    TextDrawSetOutline(AppStoreTD[25], 0);
    TextDrawBackgroundColor(AppStoreTD[25], 255);
    TextDrawFont(AppStoreTD[25], 1);
    TextDrawSetProportional(AppStoreTD[25], 1);    

    InstallWAButtonPhone = TextDrawCreate(444.000, 204.500, "PASANG");
    TextDrawLetterSize(InstallWAButtonPhone, 0.135, 0.750);
    TextDrawTextSize(InstallWAButtonPhone, 461.000, 10.000);
    TextDrawAlignment(InstallWAButtonPhone, 1);
    TextDrawColor(InstallWAButtonPhone, 255);
    TextDrawUseBox(InstallWAButtonPhone, 1);
    TextDrawBoxColor(InstallWAButtonPhone, -1);
    TextDrawSetShadow(InstallWAButtonPhone, 0);
    TextDrawSetOutline(InstallWAButtonPhone, 0);
    TextDrawBackgroundColor(InstallWAButtonPhone, 255);
    TextDrawFont(InstallWAButtonPhone, 1);
    TextDrawSetProportional(InstallWAButtonPhone, 1);
    TextDrawSetSelectable(InstallWAButtonPhone, 1);

    InstallSpotifyButtonPhone = TextDrawCreate(444.000, 234.500, "PASANG");
    TextDrawLetterSize(InstallSpotifyButtonPhone, 0.135, 0.750);
    TextDrawTextSize(InstallSpotifyButtonPhone, 461.000, 10.000);
    TextDrawAlignment(InstallSpotifyButtonPhone, 1);
    TextDrawColor(InstallSpotifyButtonPhone, 255);
    TextDrawUseBox(InstallSpotifyButtonPhone, 1);
    TextDrawBoxColor(InstallSpotifyButtonPhone, -1);
    TextDrawSetShadow(InstallSpotifyButtonPhone, 0);
    TextDrawSetOutline(InstallSpotifyButtonPhone, 0);
    TextDrawBackgroundColor(InstallSpotifyButtonPhone, 255);
    TextDrawFont(InstallSpotifyButtonPhone, 1);
    TextDrawSetProportional(InstallSpotifyButtonPhone, 1);
    TextDrawSetSelectable(InstallSpotifyButtonPhone, 1);

    InstallTwitterButtonPhone = TextDrawCreate(444.000, 264.500, "PASANG");
    TextDrawLetterSize(InstallTwitterButtonPhone, 0.135, 0.750);
    TextDrawTextSize(InstallTwitterButtonPhone, 461.000, 10.000);
    TextDrawAlignment(InstallTwitterButtonPhone, 1);
    TextDrawColor(InstallTwitterButtonPhone, 255);
    TextDrawUseBox(InstallTwitterButtonPhone, 1);
    TextDrawBoxColor(InstallTwitterButtonPhone, -1);
    TextDrawSetShadow(InstallTwitterButtonPhone, 0);
    TextDrawSetOutline(InstallTwitterButtonPhone, 0);
    TextDrawBackgroundColor(InstallTwitterButtonPhone, 255);
    TextDrawFont(InstallTwitterButtonPhone, 1);
    TextDrawSetProportional(InstallTwitterButtonPhone, 1);
    TextDrawSetSelectable(InstallTwitterButtonPhone, 1);

    InstallUberButtonPhone = TextDrawCreate(444.000, 291.500, "PASANG");
    TextDrawLetterSize(InstallUberButtonPhone, 0.135, 0.750);
    TextDrawTextSize(InstallUberButtonPhone, 461.000, 10.000);
    TextDrawAlignment(InstallUberButtonPhone, 1);
    TextDrawColor(InstallUberButtonPhone, 255);
    TextDrawUseBox(InstallUberButtonPhone, 1);
    TextDrawBoxColor(InstallUberButtonPhone, -1);
    TextDrawSetShadow(InstallUberButtonPhone, 0);
    TextDrawSetOutline(InstallUberButtonPhone, 0);
    TextDrawBackgroundColor(InstallUberButtonPhone, 255);
    TextDrawFont(InstallUberButtonPhone, 1);
    TextDrawSetProportional(InstallUberButtonPhone, 1);
    TextDrawSetSelectable(InstallUberButtonPhone, 1);

    InstallYellowButtonPhone = TextDrawCreate(444.000, 320.500, "PASANG");
    TextDrawLetterSize(InstallYellowButtonPhone, 0.135, 0.750);
    TextDrawTextSize(InstallYellowButtonPhone, 461.000, -2.000);
    TextDrawAlignment(InstallYellowButtonPhone, 1);
    TextDrawColor(InstallYellowButtonPhone, 255);
    TextDrawUseBox(InstallYellowButtonPhone, 1);
    TextDrawBoxColor(InstallYellowButtonPhone, -1);
    TextDrawSetShadow(InstallYellowButtonPhone, 0);
    TextDrawSetOutline(InstallYellowButtonPhone, 0);
    TextDrawBackgroundColor(InstallYellowButtonPhone, 255);
    TextDrawFont(InstallYellowButtonPhone, 1);
    TextDrawSetProportional(InstallYellowButtonPhone, 1);
    TextDrawSetSelectable(InstallYellowButtonPhone, 1);
}

CreatePhoneContactTD()
{
    ContactTD[0] = TextDrawCreate(417.000, 243.000, "_");
    TextDrawLetterSize(ContactTD[0], 0.528, 2.200);
    TextDrawTextSize(ContactTD[0], 298.500, 85.000);
    TextDrawAlignment(ContactTD[0], 2);
    TextDrawColor(ContactTD[0], -1);
    TextDrawUseBox(ContactTD[0], 1);
    TextDrawBoxColor(ContactTD[0], -1094795521);
    TextDrawSetShadow(ContactTD[0], 0);
    TextDrawSetOutline(ContactTD[0], 0);
    TextDrawBackgroundColor(ContactTD[0], 255);
    TextDrawFont(ContactTD[0], 0);
    TextDrawSetProportional(ContactTD[0], 1);

    ContactTD[1] = TextDrawCreate(389.000, 247.000, "Tambah kontak baru");
    TextDrawLetterSize(ContactTD[1], 0.166, 1.049);
    TextDrawTextSize(ContactTD[1], 607.000, 10.000);
    TextDrawAlignment(ContactTD[1], 1);
    TextDrawColor(ContactTD[1], 255);
    TextDrawSetShadow(ContactTD[1], 0);
    TextDrawSetOutline(ContactTD[1], 0);
    TextDrawBackgroundColor(ContactTD[1], 255);
    TextDrawFont(ContactTD[1], 1);
    TextDrawSetProportional(ContactTD[1], 1);
    TextDrawSetSelectable(ContactTD[1], 1);

    ContactTD[2] = TextDrawCreate(417.000, 269.000, "_");
    TextDrawLetterSize(ContactTD[2], 0.608, 2.100);
    TextDrawTextSize(ContactTD[2], 298.500, 85.000);
    TextDrawAlignment(ContactTD[2], 2);
    TextDrawColor(ContactTD[2], -1);
    TextDrawUseBox(ContactTD[2], 1);
    TextDrawBoxColor(ContactTD[2], -1094795521);
    TextDrawSetShadow(ContactTD[2], 0);
    TextDrawSetOutline(ContactTD[2], 0);
    TextDrawBackgroundColor(ContactTD[2], 255);
    TextDrawFont(ContactTD[2], 0);
    TextDrawSetProportional(ContactTD[2], 1);

    ContactTD[3] = TextDrawCreate(398.000, 274.000, "Daftar kontak");
    TextDrawLetterSize(ContactTD[3], 0.166, 1.049);
    TextDrawTextSize(ContactTD[3], 605.000, 10.000);
    TextDrawAlignment(ContactTD[3], 1);
    TextDrawColor(ContactTD[3], 255);
    TextDrawSetShadow(ContactTD[3], 0);
    TextDrawSetOutline(ContactTD[3], 0);
    TextDrawBackgroundColor(ContactTD[3], 255);
    TextDrawFont(ContactTD[3], 1);
    TextDrawSetProportional(ContactTD[3], 1);
    TextDrawSetSelectable(ContactTD[3], 1);

    ContactTD[4] = TextDrawCreate(384.000, 170.000, "Kontak");
    TextDrawLetterSize(ContactTD[4], 0.166, 1.049);
    TextDrawTextSize(ContactTD[4], 400.000, 97.000);
    TextDrawAlignment(ContactTD[4], 2);
    TextDrawColor(ContactTD[4], 255);
    TextDrawSetShadow(ContactTD[4], 0);
    TextDrawSetOutline(ContactTD[4], 0);
    TextDrawBackgroundColor(ContactTD[4], 255);
    TextDrawFont(ContactTD[4], 1);
    TextDrawSetProportional(ContactTD[4], 1);
}

CreatePhoneSettingsTD()
{
    SettingsTD[0] = TextDrawCreate(391.000, 171.000, "Pengaturan");
    TextDrawLetterSize(SettingsTD[0], 0.166, 1.049);
    TextDrawTextSize(SettingsTD[0], 400.000, 97.000);
    TextDrawAlignment(SettingsTD[0], 2);
    TextDrawColor(SettingsTD[0], 255);
    TextDrawSetShadow(SettingsTD[0], 0);
    TextDrawSetOutline(SettingsTD[0], 0);
    TextDrawBackgroundColor(SettingsTD[0], 255);
    TextDrawFont(SettingsTD[0], 1);
    TextDrawSetProportional(SettingsTD[0], 1);

    SettingsTD[1] = TextDrawCreate(389.000, 254.000, "Tentang ponsel");
    TextDrawLetterSize(SettingsTD[1], 0.186, 1.049);
    TextDrawTextSize(SettingsTD[1], 437.000, 10.000);
    TextDrawAlignment(SettingsTD[1], 1);
    TextDrawColor(SettingsTD[1], 255);
    TextDrawUseBox(SettingsTD[1], 1);
    TextDrawBoxColor(SettingsTD[1], -1);
    TextDrawSetShadow(SettingsTD[1], 0);
    TextDrawSetOutline(SettingsTD[1], 0);
    TextDrawBackgroundColor(SettingsTD[1], 255);
    TextDrawFont(SettingsTD[1], 1);
    TextDrawSetProportional(SettingsTD[1], 1);
    TextDrawSetSelectable(SettingsTD[1], 1);
}

CreatePhoneSpotifyTD()
{
    SpotifyTD[0] = TextDrawCreate(417.000, 174.000, "_");
    TextDrawLetterSize(SpotifyTD[0], 0.608, 22.300);
    TextDrawTextSize(SpotifyTD[0], 298.500, 98.000);
    TextDrawAlignment(SpotifyTD[0], 2);
    TextDrawColor(SpotifyTD[0], -1);
    TextDrawUseBox(SpotifyTD[0], 1);
    TextDrawBoxColor(SpotifyTD[0], -260013825);
    TextDrawSetShadow(SpotifyTD[0], 0);
    TextDrawSetOutline(SpotifyTD[0], 0);
    TextDrawBackgroundColor(SpotifyTD[0], 255);
    TextDrawFont(SpotifyTD[0], 0);
    TextDrawSetProportional(SpotifyTD[0], 1);

    SpotifyTD[1] = TextDrawCreate(417.000, 222.000, "_");
    TextDrawLetterSize(SpotifyTD[1], 0.608, 2.300);
    TextDrawTextSize(SpotifyTD[1], 298.500, 98.000);
    TextDrawAlignment(SpotifyTD[1], 2);
    TextDrawColor(SpotifyTD[1], -1);
    TextDrawUseBox(SpotifyTD[1], 1);
    TextDrawBoxColor(SpotifyTD[1], 1768516095);
    TextDrawSetShadow(SpotifyTD[1], 0);
    TextDrawSetOutline(SpotifyTD[1], 0);
    TextDrawBackgroundColor(SpotifyTD[1], 255);
    TextDrawFont(SpotifyTD[1], 0);
    TextDrawSetProportional(SpotifyTD[1], 1);

    SpotifyTD[2] = TextDrawCreate(392.000, 227.000, "Putar di boombox");
    TextDrawLetterSize(SpotifyTD[2], 0.166, 1.049);
    TextDrawTextSize(SpotifyTD[2], 620.500, 10.000);
    TextDrawAlignment(SpotifyTD[2], 1);
    TextDrawColor(SpotifyTD[2], -1);
    TextDrawSetShadow(SpotifyTD[2], 0);
    TextDrawSetOutline(SpotifyTD[2], 0);
    TextDrawBackgroundColor(SpotifyTD[2], 255);
    TextDrawFont(SpotifyTD[2], 1);
    TextDrawSetProportional(SpotifyTD[2], 1);
    TextDrawSetSelectable(SpotifyTD[2], 1);

    SpotifyTD[3] = TextDrawCreate(417.000, 196.000, "_");
    TextDrawLetterSize(SpotifyTD[3], 0.608, 2.300);
    TextDrawTextSize(SpotifyTD[3], 298.500, 98.000);
    TextDrawAlignment(SpotifyTD[3], 2);
    TextDrawColor(SpotifyTD[3], -1);
    TextDrawUseBox(SpotifyTD[3], 1);
    TextDrawBoxColor(SpotifyTD[3], 1768516095);
    TextDrawSetShadow(SpotifyTD[3], 0);
    TextDrawSetOutline(SpotifyTD[3], 0);
    TextDrawBackgroundColor(SpotifyTD[3], 255);
    TextDrawFont(SpotifyTD[3], 0);
    TextDrawSetProportional(SpotifyTD[3], 1);

    SpotifyTD[4] = TextDrawCreate(431.000, 248.000, "Hai, bagaimana hari ini?");
    TextDrawLetterSize(SpotifyTD[4], 0.166, 1.049);
    TextDrawTextSize(SpotifyTD[4], 400.000, 97.000);
    TextDrawAlignment(SpotifyTD[4], 2);
    TextDrawColor(SpotifyTD[4], -1);
    TextDrawSetShadow(SpotifyTD[4], 0);
    TextDrawSetOutline(SpotifyTD[4], 0);
    TextDrawBackgroundColor(SpotifyTD[4], 255);
    TextDrawFont(SpotifyTD[4], 1);
    TextDrawSetProportional(SpotifyTD[4], 1);

    SpotifyTD[5] = TextDrawCreate(392.000, 200.000, "Putar di earphone");
    TextDrawLetterSize(SpotifyTD[5], 0.166, 1.049);
    TextDrawTextSize(SpotifyTD[5], 621.000, 10.000);
    TextDrawAlignment(SpotifyTD[5], 1);
    TextDrawColor(SpotifyTD[5], -1);
    TextDrawSetShadow(SpotifyTD[5], 0);
    TextDrawSetOutline(SpotifyTD[5], 0);
    TextDrawBackgroundColor(SpotifyTD[5], 255);
    TextDrawFont(SpotifyTD[5], 1);
    TextDrawSetProportional(SpotifyTD[5], 1);
    TextDrawSetSelectable(SpotifyTD[5], 1);

    SpotifyTD[6] = TextDrawCreate(394.000, 279.000, "Dipilih untukmu");
    TextDrawLetterSize(SpotifyTD[6], 0.166, 1.049);
    TextDrawTextSize(SpotifyTD[6], 400.000, 97.000);
    TextDrawAlignment(SpotifyTD[6], 2);
    TextDrawColor(SpotifyTD[6], -1);
    TextDrawSetShadow(SpotifyTD[6], 0);
    TextDrawSetOutline(SpotifyTD[6], 0);
    TextDrawBackgroundColor(SpotifyTD[6], 255);
    TextDrawFont(SpotifyTD[6], 1);
    TextDrawSetProportional(SpotifyTD[6], 1);

    SpotifyTD[7] = TextDrawCreate(417.000, 298.000, "_");
    TextDrawLetterSize(SpotifyTD[7], 0.608, 3.500);
    TextDrawTextSize(SpotifyTD[7], 298.500, 84.000);
    TextDrawAlignment(SpotifyTD[7], 2);
    TextDrawColor(SpotifyTD[7], -1);
    TextDrawUseBox(SpotifyTD[7], 1);
    TextDrawBoxColor(SpotifyTD[7], 1768516095);
    TextDrawSetShadow(SpotifyTD[7], 0);
    TextDrawSetOutline(SpotifyTD[7], 0);
    TextDrawBackgroundColor(SpotifyTD[7], 255);
    TextDrawFont(SpotifyTD[7], 0);
    TextDrawSetProportional(SpotifyTD[7], 1);

    SpotifyTD[8] = TextDrawCreate(410.000, 297.000, "Album");
    TextDrawLetterSize(SpotifyTD[8], 0.166, 1.049);
    TextDrawTextSize(SpotifyTD[8], 400.000, 97.000);
    TextDrawAlignment(SpotifyTD[8], 2);
    TextDrawColor(SpotifyTD[8], -1094795521);
    TextDrawSetShadow(SpotifyTD[8], 0);
    TextDrawSetOutline(SpotifyTD[8], 0);
    TextDrawBackgroundColor(SpotifyTD[8], 255);
    TextDrawFont(SpotifyTD[8], 1);
    TextDrawSetProportional(SpotifyTD[8], 1);

    SpotifyTD[9] = TextDrawCreate(430.000, 305.000, "Berpisah Lebih Indah");
    TextDrawLetterSize(SpotifyTD[9], 0.166, 1.049);
    TextDrawTextSize(SpotifyTD[9], 400.000, 97.000);
    TextDrawAlignment(SpotifyTD[9], 2);
    TextDrawColor(SpotifyTD[9], -1);
    TextDrawSetShadow(SpotifyTD[9], 0);
    TextDrawSetOutline(SpotifyTD[9], 0);
    TextDrawBackgroundColor(SpotifyTD[9], 255);
    TextDrawFont(SpotifyTD[9], 1);
    TextDrawSetProportional(SpotifyTD[9], 1);

    SpotifyTD[10] = TextDrawCreate(402.000, 315.000, "Dengarkan single terbaru Raissa Ramadhani sekarang!");
    TextDrawLetterSize(SpotifyTD[10], 0.064, 0.799);
    TextDrawTextSize(SpotifyTD[10], 621.000, 97.000);
    TextDrawAlignment(SpotifyTD[10], 1);
    TextDrawColor(SpotifyTD[10], -1094795521);
    TextDrawSetShadow(SpotifyTD[10], 0);
    TextDrawSetOutline(SpotifyTD[10], 0);
    TextDrawBackgroundColor(SpotifyTD[10], 255);
    TextDrawFont(SpotifyTD[10], 1);
    TextDrawSetProportional(SpotifyTD[10], 1);

    SpotifyTD[11] = TextDrawCreate(453.000, 279.000, ":");
    TextDrawLetterSize(SpotifyTD[11], 0.166, 1.049);
    TextDrawTextSize(SpotifyTD[11], 400.000, 97.000);
    TextDrawAlignment(SpotifyTD[11], 2);
    TextDrawColor(SpotifyTD[11], -1);
    TextDrawSetShadow(SpotifyTD[11], 0);
    TextDrawSetOutline(SpotifyTD[11], 0);
    TextDrawBackgroundColor(SpotifyTD[11], 255);
    TextDrawFont(SpotifyTD[11], 0);
    TextDrawSetProportional(SpotifyTD[11], 1);

    SpotifyTD[12] = TextDrawCreate(374.000, 297.000, "ld_bum:bum1");
    TextDrawLetterSize(SpotifyTD[12], 0.600, 2.000);
    TextDrawTextSize(SpotifyTD[12], 27.000, 34.500);
    TextDrawAlignment(SpotifyTD[12], 1);
    TextDrawColor(SpotifyTD[12], -186);
    TextDrawUseBox(SpotifyTD[12], 1);
    TextDrawBoxColor(SpotifyTD[12], 50);
    TextDrawSetShadow(SpotifyTD[12], 0);
    TextDrawSetOutline(SpotifyTD[12], 0);
    TextDrawBackgroundColor(SpotifyTD[12], 255);
    TextDrawFont(SpotifyTD[12], 4);
    TextDrawSetProportional(SpotifyTD[12], 1);

    SpotifyTD[13] = TextDrawCreate(370.000, 297.000, "Preview_Model");
    TextDrawLetterSize(SpotifyTD[13], 0.600, 2.000);
    TextDrawTextSize(SpotifyTD[13], 34.000, 35.500);
    TextDrawAlignment(SpotifyTD[13], 1);
    TextDrawColor(SpotifyTD[13], -1);
    TextDrawSetShadow(SpotifyTD[13], 0);
    TextDrawSetOutline(SpotifyTD[13], 0);
    TextDrawBackgroundColor(SpotifyTD[13], 0);
    TextDrawFont(SpotifyTD[13], 5);
    TextDrawSetProportional(SpotifyTD[13], 1);
    TextDrawSetPreviewModel(SpotifyTD[13], 169);
    TextDrawSetPreviewRot(SpotifyTD[13], -10.000, 0.000, 2.000, 0.789);
    TextDrawSetPreviewVehCol(SpotifyTD[13], 1, 0);
}

CreatePhoneIncomingTD(playerid)
{
    ContactNameTD[playerid] = CreatePlayerTextDraw(playerid, 419.000, 211.000, "Mang Ucok Penjual Roti");
    PlayerTextDrawLetterSize(playerid, ContactNameTD[playerid], 0.180, 1.250);
    PlayerTextDrawTextSize(playerid, ContactNameTD[playerid], 400.000, 90.500);
    PlayerTextDrawAlignment(playerid, ContactNameTD[playerid], 2);
    PlayerTextDrawColor(playerid, ContactNameTD[playerid], -1);
    PlayerTextDrawSetShadow(playerid, ContactNameTD[playerid], 0);
    PlayerTextDrawSetOutline(playerid, ContactNameTD[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, ContactNameTD[playerid], 255);
    PlayerTextDrawFont(playerid, ContactNameTD[playerid], 1);
    PlayerTextDrawSetProportional(playerid, ContactNameTD[playerid], 1);

    StatusDialingTD[playerid] = CreatePlayerTextDraw(playerid, 421.000, 230.000, "Panggilan Masuk...");
    PlayerTextDrawLetterSize(playerid, StatusDialingTD[playerid], 0.220, 1.250);
    PlayerTextDrawTextSize(playerid, StatusDialingTD[playerid], 400.000, 90.500);
    PlayerTextDrawAlignment(playerid, StatusDialingTD[playerid], 2);
    PlayerTextDrawColor(playerid, StatusDialingTD[playerid], -1);
    PlayerTextDrawSetShadow(playerid, StatusDialingTD[playerid], 0);
    PlayerTextDrawSetOutline(playerid, StatusDialingTD[playerid], 0);
    PlayerTextDrawBackgroundColor(playerid, StatusDialingTD[playerid], 255);
    PlayerTextDrawFont(playerid, StatusDialingTD[playerid], 1);
    PlayerTextDrawSetProportional(playerid, StatusDialingTD[playerid], 1);
}

CreatePhoneBankingTD(playerid)
{
    PlayerBankingTD[playerid][0] = CreatePlayerTextDraw(playerid, 409.000, 227.000, "$20.000.000");
    PlayerTextDrawLetterSize(playerid, PlayerBankingTD[playerid][0], 0.179, 0.949);
    PlayerTextDrawTextSize(playerid, PlayerBankingTD[playerid][0], 605.000, 94.000);
    PlayerTextDrawAlignment(playerid, PlayerBankingTD[playerid][0], 1);
    PlayerTextDrawColor(playerid, PlayerBankingTD[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, PlayerBankingTD[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, PlayerBankingTD[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, PlayerBankingTD[playerid][0], 255);
    PlayerTextDrawFont(playerid, PlayerBankingTD[playerid][0], 1);
    PlayerTextDrawSetProportional(playerid, PlayerBankingTD[playerid][0], 1);

    PlayerBankingTD[playerid][1] = CreatePlayerTextDraw(playerid, 409.000, 202.000, "Vyn Ytp");
    PlayerTextDrawLetterSize(playerid, PlayerBankingTD[playerid][1], 0.139, 0.949);
    PlayerTextDrawTextSize(playerid, PlayerBankingTD[playerid][1], 619.000, 94.000);
    PlayerTextDrawAlignment(playerid, PlayerBankingTD[playerid][1], 1);
    PlayerTextDrawColor(playerid, PlayerBankingTD[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, PlayerBankingTD[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, PlayerBankingTD[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, PlayerBankingTD[playerid][1], 255);
    PlayerTextDrawFont(playerid, PlayerBankingTD[playerid][1], 1);
    PlayerTextDrawSetProportional(playerid, PlayerBankingTD[playerid][1], 1);

    PlayerBankingTD[playerid][2] = CreatePlayerTextDraw(playerid, 409.000, 251.000, "123456789");
    PlayerTextDrawLetterSize(playerid, PlayerBankingTD[playerid][2], 0.179, 0.949);
    PlayerTextDrawTextSize(playerid, PlayerBankingTD[playerid][2], 619.000, 94.000);
    PlayerTextDrawAlignment(playerid, PlayerBankingTD[playerid][2], 1);
    PlayerTextDrawColor(playerid, PlayerBankingTD[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, PlayerBankingTD[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, PlayerBankingTD[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, PlayerBankingTD[playerid][2], 255);
    PlayerTextDrawFont(playerid, PlayerBankingTD[playerid][2], 1);
    PlayerTextDrawSetProportional(playerid, PlayerBankingTD[playerid][2], 1);
}

CreateTwitterLoginTD()
{
    TwitterLoginTD[0] = TextDrawCreate(417.000, 168.000, "_");
    TextDrawLetterSize(TwitterLoginTD[0], 0.608, 22.300);
    TextDrawTextSize(TwitterLoginTD[0], 298.500, 98.000);
    TextDrawAlignment(TwitterLoginTD[0], 2);
    TextDrawColor(TwitterLoginTD[0], -1);
    TextDrawUseBox(TwitterLoginTD[0], 1);
    TextDrawBoxColor(TwitterLoginTD[0], -260013825);
    TextDrawSetShadow(TwitterLoginTD[0], 0);
    TextDrawSetOutline(TwitterLoginTD[0], 0);
    TextDrawBackgroundColor(TwitterLoginTD[0], 255);
    TextDrawFont(TwitterLoginTD[0], 0);
    TextDrawSetProportional(TwitterLoginTD[0], 1);

    TwitterLoginTD[1] = TextDrawCreate(417.000, 216.000, "_");
    TextDrawLetterSize(TwitterLoginTD[1], 0.608, 2.300);
    TextDrawTextSize(TwitterLoginTD[1], 298.500, 49.000);
    TextDrawAlignment(TwitterLoginTD[1], 2);
    TextDrawColor(TwitterLoginTD[1], -1);
    TextDrawUseBox(TwitterLoginTD[1], 1);
    TextDrawBoxColor(TwitterLoginTD[1], -1);
    TextDrawSetShadow(TwitterLoginTD[1], 0);
    TextDrawSetOutline(TwitterLoginTD[1], 0);
    TextDrawBackgroundColor(TwitterLoginTD[1], 255);
    TextDrawFont(TwitterLoginTD[1], 0);
    TextDrawSetProportional(TwitterLoginTD[1], 1);

    TwitterLoginTD[2] = TextDrawCreate(411.000, 221.000, "Login");
    TextDrawLetterSize(TwitterLoginTD[2], 0.166, 1.049);
    TextDrawTextSize(TwitterLoginTD[2], 598.000, 10.000);
    TextDrawAlignment(TwitterLoginTD[2], 1);
    TextDrawColor(TwitterLoginTD[2], 255);
    TextDrawSetShadow(TwitterLoginTD[2], 0);
    TextDrawSetOutline(TwitterLoginTD[2], 0);
    TextDrawBackgroundColor(TwitterLoginTD[2], 255);
    TextDrawFont(TwitterLoginTD[2], 1);
    TextDrawSetProportional(TwitterLoginTD[2], 1);
    TextDrawSetSelectable(TwitterLoginTD[2], 1);

    TwitterLoginTD[3] = TextDrawCreate(369.000, 249.000, "Belum memiliki akun?");
    TextDrawLetterSize(TwitterLoginTD[3], 0.166, 1.049);
    TextDrawTextSize(TwitterLoginTD[3], 613.000, 97.000);
    TextDrawAlignment(TwitterLoginTD[3], 1);
    TextDrawColor(TwitterLoginTD[3], -1);
    TextDrawSetShadow(TwitterLoginTD[3], 0);
    TextDrawSetOutline(TwitterLoginTD[3], 0);
    TextDrawBackgroundColor(TwitterLoginTD[3], 255);
    TextDrawFont(TwitterLoginTD[3], 1);
    TextDrawSetProportional(TwitterLoginTD[3], 1);

    TwitterLoginTD[4] = TextDrawCreate(377.000, 189.000, "Hai, selamat datang di Twitter. Silahkan login!");
    TextDrawLetterSize(TwitterLoginTD[4], 0.106, 1.149);
    TextDrawTextSize(TwitterLoginTD[4], 613.000, 97.000);
    TextDrawAlignment(TwitterLoginTD[4], 1);
    TextDrawColor(TwitterLoginTD[4], -1);
    TextDrawSetShadow(TwitterLoginTD[4], 0);
    TextDrawSetOutline(TwitterLoginTD[4], 0);
    TextDrawBackgroundColor(TwitterLoginTD[4], 255);
    TextDrawFont(TwitterLoginTD[4], 1);
    TextDrawSetProportional(TwitterLoginTD[4], 1);

    TwitterLoginTD[5] = TextDrawCreate(439.000, 249.000, "Daftar");
    TextDrawLetterSize(TwitterLoginTD[5], 0.166, 1.049);
    TextDrawTextSize(TwitterLoginTD[5], 622.000, 10.000);
    TextDrawAlignment(TwitterLoginTD[5], 1);
    TextDrawColor(TwitterLoginTD[5], 35839);
    TextDrawSetShadow(TwitterLoginTD[5], 0);
    TextDrawSetOutline(TwitterLoginTD[5], 0);
    TextDrawBackgroundColor(TwitterLoginTD[5], 255);
    TextDrawFont(TwitterLoginTD[5], 1);
    TextDrawSetProportional(TwitterLoginTD[5], 1);
    TextDrawSetSelectable(TwitterLoginTD[5], 1);
}

CreateTwitterMainTD()
{
    TwitterMainTD[0] = TextDrawCreate(417.000, 226.000, "_");
    TextDrawLetterSize(TwitterMainTD[0], 0.608, 2.300);
    TextDrawTextSize(TwitterMainTD[0], 298.500, 49.000);
    TextDrawAlignment(TwitterMainTD[0], 2);
    TextDrawColor(TwitterMainTD[0], -1);
    TextDrawUseBox(TwitterMainTD[0], 1);
    TextDrawBoxColor(TwitterMainTD[0], -1);
    TextDrawSetShadow(TwitterMainTD[0], 0);
    TextDrawSetOutline(TwitterMainTD[0], 0);
    TextDrawBackgroundColor(TwitterMainTD[0], 255);
    TextDrawFont(TwitterMainTD[0], 0);
    TextDrawSetProportional(TwitterMainTD[0], 1);

    TwitterMainTD[1] = TextDrawCreate(410.000, 231.000, "Tweet");
    TextDrawLetterSize(TwitterMainTD[1], 0.166, 1.049);
    TextDrawTextSize(TwitterMainTD[1], 598.000, 15.000);
    TextDrawAlignment(TwitterMainTD[1], 1);
    TextDrawColor(TwitterMainTD[1], 255);
    TextDrawSetShadow(TwitterMainTD[1], 0);
    TextDrawSetOutline(TwitterMainTD[1], 0);
    TextDrawBackgroundColor(TwitterMainTD[1], 255);
    TextDrawFont(TwitterMainTD[1], 1);
    TextDrawSetProportional(TwitterMainTD[1], 1);
    TextDrawSetSelectable(TwitterMainTD[1], 1);

    TwitterMainTD[2] = TextDrawCreate(375.000, 297.000, "Ingatlah untuk selalu mematuhi persyaratan pengguna kami!");
    TextDrawLetterSize(TwitterMainTD[2], 0.086, 1.049);
    TextDrawTextSize(TwitterMainTD[2], 620.500, 97.000);
    TextDrawAlignment(TwitterMainTD[2], 1);
    TextDrawColor(TwitterMainTD[2], -1);
    TextDrawSetShadow(TwitterMainTD[2], 0);
    TextDrawSetOutline(TwitterMainTD[2], 0);
    TextDrawBackgroundColor(TwitterMainTD[2], 255);
    TextDrawFont(TwitterMainTD[2], 1);
    TextDrawSetProportional(TwitterMainTD[2], 1);

    TwitterMainTD[3] = TextDrawCreate(417.000, 253.000, "_");
    TextDrawLetterSize(TwitterMainTD[3], 0.608, 2.300);
    TextDrawTextSize(TwitterMainTD[3], 298.500, 49.000);
    TextDrawAlignment(TwitterMainTD[3], 2);
    TextDrawColor(TwitterMainTD[3], -1);
    TextDrawUseBox(TwitterMainTD[3], 1);
    TextDrawBoxColor(TwitterMainTD[3], -1);
    TextDrawSetShadow(TwitterMainTD[3], 0);
    TextDrawSetOutline(TwitterMainTD[3], 0);
    TextDrawBackgroundColor(TwitterMainTD[3], 255);
    TextDrawFont(TwitterMainTD[3], 0);
    TextDrawSetProportional(TwitterMainTD[3], 1);

    TwitterMainTD[4] = TextDrawCreate(409.000, 257.000, "Logout");
    TextDrawLetterSize(TwitterMainTD[4], 0.166, 1.049);
    TextDrawTextSize(TwitterMainTD[4], 597.500, 15.000);
    TextDrawAlignment(TwitterMainTD[4], 1);
    TextDrawColor(TwitterMainTD[4], 255);
    TextDrawSetShadow(TwitterMainTD[4], 0);
    TextDrawSetOutline(TwitterMainTD[4], 0);
    TextDrawBackgroundColor(TwitterMainTD[4], 255);
    TextDrawFont(TwitterMainTD[4], 1);
    TextDrawSetProportional(TwitterMainTD[4], 1);
    TextDrawSetSelectable(TwitterMainTD[4], 1);
}

CreateUberPhoneTD()
{
    UberPhoneTD[0] = TextDrawCreate(417.000, 169.000, "_");
    TextDrawLetterSize(UberPhoneTD[0], 0.608, 22.300);
    TextDrawTextSize(UberPhoneTD[0], 298.500, 98.000);
    TextDrawAlignment(UberPhoneTD[0], 2);
    TextDrawColor(UberPhoneTD[0], -1);
    TextDrawUseBox(UberPhoneTD[0], 1);
    TextDrawBoxColor(UberPhoneTD[0], -1);
    TextDrawSetShadow(UberPhoneTD[0], 0);
    TextDrawSetOutline(UberPhoneTD[0], 1);
    TextDrawBackgroundColor(UberPhoneTD[0], 255);
    TextDrawFont(UberPhoneTD[0], 0);
    TextDrawSetProportional(UberPhoneTD[0], 1);

    UberPhoneTD[1] = TextDrawCreate(374.000, 318.000, "Go again");
    TextDrawLetterSize(UberPhoneTD[1], 0.166, 1.049);
    TextDrawTextSize(UberPhoneTD[1], 590.000, 103.500);
    TextDrawAlignment(UberPhoneTD[1], 1);
    TextDrawColor(UberPhoneTD[1], 255);
    TextDrawSetShadow(UberPhoneTD[1], 0);
    TextDrawSetOutline(UberPhoneTD[1], 0);
    TextDrawBackgroundColor(UberPhoneTD[1], 255);
    TextDrawFont(UberPhoneTD[1], 1);
    TextDrawSetProportional(UberPhoneTD[1], 1);

    UberPhoneTD[2] = TextDrawCreate(374.000, 332.000, "Work");
    TextDrawLetterSize(UberPhoneTD[2], 0.137, 0.849);
    TextDrawTextSize(UberPhoneTD[2], 590.000, 103.500);
    TextDrawAlignment(UberPhoneTD[2], 1);
    TextDrawColor(UberPhoneTD[2], 255);
    TextDrawSetShadow(UberPhoneTD[2], 0);
    TextDrawSetOutline(UberPhoneTD[2], 0);
    TextDrawBackgroundColor(UberPhoneTD[2], 255);
    TextDrawFont(UberPhoneTD[2], 1);
    TextDrawSetProportional(UberPhoneTD[2], 1);

    UberPhoneTD[3] = TextDrawCreate(374.000, 286.000, "Rides");
    TextDrawLetterSize(UberPhoneTD[3], 0.166, 1.049);
    TextDrawTextSize(UberPhoneTD[3], 590.000, 103.500);
    TextDrawAlignment(UberPhoneTD[3], 1);
    TextDrawColor(UberPhoneTD[3], 255);
    TextDrawSetShadow(UberPhoneTD[3], 0);
    TextDrawSetOutline(UberPhoneTD[3], 0);
    TextDrawBackgroundColor(UberPhoneTD[3], 255);
    TextDrawFont(UberPhoneTD[3], 1);
    TextDrawSetProportional(UberPhoneTD[3], 1);

    UberPhoneTD[4] = TextDrawCreate(421.000, 286.000, "Eats");
    TextDrawLetterSize(UberPhoneTD[4], 0.166, 1.049);
    TextDrawTextSize(UberPhoneTD[4], 599.000, 103.500);
    TextDrawAlignment(UberPhoneTD[4], 1);
    TextDrawColor(UberPhoneTD[4], 255);
    TextDrawSetShadow(UberPhoneTD[4], 0);
    TextDrawSetOutline(UberPhoneTD[4], 0);
    TextDrawBackgroundColor(UberPhoneTD[4], 255);
    TextDrawFont(UberPhoneTD[4], 1);
    TextDrawSetProportional(UberPhoneTD[4], 1);

    UberPhoneTD[5] = TextDrawCreate(372.000, 250.000, "Preview_Model");
    TextDrawLetterSize(UberPhoneTD[5], 0.600, 2.000);
    TextDrawTextSize(UberPhoneTD[5], 43.000, 52.500);
    TextDrawAlignment(UberPhoneTD[5], 1);
    TextDrawColor(UberPhoneTD[5], -1);
    TextDrawSetShadow(UberPhoneTD[5], 0);
    TextDrawSetOutline(UberPhoneTD[5], 0);
    TextDrawBackgroundColor(UberPhoneTD[5], 60);
    TextDrawFont(UberPhoneTD[5], 5);
    TextDrawSetProportional(UberPhoneTD[5], 1);
    TextDrawSetPreviewModel(UberPhoneTD[5], 410);
    TextDrawSetPreviewRot(UberPhoneTD[5], -10.000, 0.000, 33.000, 1.000);
    TextDrawSetPreviewVehCol(UberPhoneTD[5], 1, 1);
    TextDrawSetSelectable(UberPhoneTD[5], 1);

    UberPhoneTD[6] = TextDrawCreate(419.000, 250.000, "Preview_Model");
    TextDrawLetterSize(UberPhoneTD[6], 0.600, 2.000);
    TextDrawTextSize(UberPhoneTD[6], 43.000, 52.500);
    TextDrawAlignment(UberPhoneTD[6], 1);
    TextDrawColor(UberPhoneTD[6], -1);
    TextDrawSetShadow(UberPhoneTD[6], 0);
    TextDrawSetOutline(UberPhoneTD[6], 0);
    TextDrawBackgroundColor(UberPhoneTD[6], 60);
    TextDrawFont(UberPhoneTD[6], 5);
    TextDrawSetProportional(UberPhoneTD[6], 1);
    TextDrawSetPreviewModel(UberPhoneTD[6], 2222);
    TextDrawSetPreviewRot(UberPhoneTD[6], -42.000, 0.000, 238.000, 1.000);
    TextDrawSetPreviewVehCol(UberPhoneTD[6], 1, 1);
    TextDrawSetSelectable(UberPhoneTD[6], 1);

    UberPhoneTD[7] = TextDrawCreate(374.000, 340.000, "1453 Michigan St.");
    TextDrawLetterSize(UberPhoneTD[7], 0.104, 0.599);
    TextDrawTextSize(UberPhoneTD[7], 590.000, 103.500);
    TextDrawAlignment(UberPhoneTD[7], 1);
    TextDrawColor(UberPhoneTD[7], -1094795521);
    TextDrawSetShadow(UberPhoneTD[7], 0);
    TextDrawSetOutline(UberPhoneTD[7], 0);
    TextDrawBackgroundColor(UberPhoneTD[7], 255);
    TextDrawFont(UberPhoneTD[7], 1);
    TextDrawSetProportional(UberPhoneTD[7], 1);

    UberPhoneTD[8] = TextDrawCreate(438.000, 171.000, "Amber");
    TextDrawLetterSize(UberPhoneTD[8], 0.166, 1.049);
    TextDrawTextSize(UberPhoneTD[8], 7.000, 23.500);
    TextDrawAlignment(UberPhoneTD[8], 2);
    TextDrawColor(UberPhoneTD[8], -1);
    TextDrawSetShadow(UberPhoneTD[8], 0);
    TextDrawSetOutline(UberPhoneTD[8], 0);
    TextDrawBackgroundColor(UberPhoneTD[8], 255);
    TextDrawFont(UberPhoneTD[8], 1);
    TextDrawSetProportional(UberPhoneTD[8], 1);

    UberPhoneTD[9] = TextDrawCreate(417.000, 169.000, "_");
    TextDrawLetterSize(UberPhoneTD[9], 0.608, 1.650);
    TextDrawTextSize(UberPhoneTD[9], 298.500, 98.000);
    TextDrawAlignment(UberPhoneTD[9], 2);
    TextDrawColor(UberPhoneTD[9], -1);
    TextDrawUseBox(UberPhoneTD[9], 1);
    TextDrawBoxColor(UberPhoneTD[9], 1296911871);
    TextDrawSetShadow(UberPhoneTD[9], 0);
    TextDrawSetOutline(UberPhoneTD[9], 1);
    TextDrawBackgroundColor(UberPhoneTD[9], 255);
    TextDrawFont(UberPhoneTD[9], 0);
    TextDrawSetProportional(UberPhoneTD[9], 1);

    UberPhoneTD[10] = TextDrawCreate(374.000, 348.000, "Lancy Apartment");
    TextDrawLetterSize(UberPhoneTD[10], 0.137, 0.849);
    TextDrawTextSize(UberPhoneTD[10], 590.000, 103.500);
    TextDrawAlignment(UberPhoneTD[10], 1);
    TextDrawColor(UberPhoneTD[10], 255);
    TextDrawSetShadow(UberPhoneTD[10], 0);
    TextDrawSetOutline(UberPhoneTD[10], 0);
    TextDrawBackgroundColor(UberPhoneTD[10], 255);
    TextDrawFont(UberPhoneTD[10], 1);
    TextDrawSetProportional(UberPhoneTD[10], 1);

    UberPhoneTD[11] = TextDrawCreate(374.000, 356.000, "482 Riverside St.");
    TextDrawLetterSize(UberPhoneTD[11], 0.104, 0.599);
    TextDrawTextSize(UberPhoneTD[11], 590.000, 103.500);
    TextDrawAlignment(UberPhoneTD[11], 1);
    TextDrawColor(UberPhoneTD[11], -1094795521);
    TextDrawSetShadow(UberPhoneTD[11], 0);
    TextDrawSetOutline(UberPhoneTD[11], 0);
    TextDrawBackgroundColor(UberPhoneTD[11], 255);
    TextDrawFont(UberPhoneTD[11], 1);
    TextDrawSetProportional(UberPhoneTD[11], 1);
}

CreatePlayerTwitterTD(playerid)
{
    TwitterInfoTD[playerid] = CreatePlayerTextDraw(playerid, 529.000000, 229.000000, "Hai, Mukhlis-Sadewa bagaimana harimu?");
    PlayerTextDrawFont(playerid, TwitterInfoTD[playerid], true);
    PlayerTextDrawLetterSize(playerid, TwitterInfoTD[playerid], 0.187499, 1.199997);
    PlayerTextDrawTextSize(playerid, TwitterInfoTD[playerid], 613.000000, 97.000000);
    PlayerTextDrawSetOutline(playerid, TwitterInfoTD[playerid], false);
    PlayerTextDrawSetShadow(playerid, TwitterInfoTD[playerid], false);
    PlayerTextDrawAlignment(playerid, TwitterInfoTD[playerid], true);
    PlayerTextDrawColor(playerid, TwitterInfoTD[playerid], -1);
    PlayerTextDrawBackgroundColor(playerid, TwitterInfoTD[playerid], 255);
    PlayerTextDrawBoxColor(playerid, TwitterInfoTD[playerid], 50);
    PlayerTextDrawUseBox(playerid, TwitterInfoTD[playerid], false);
    PlayerTextDrawSetProportional(playerid, TwitterInfoTD[playerid], true);
    PlayerTextDrawSetSelectable(playerid, TwitterInfoTD[playerid], false);
}

CreatePlayerUberTD(playerid)
{
    UberMainTD[playerid][0] = CreatePlayerTextDraw(playerid, 528.000000, 240.000000, "Hello, Marcio Zentavious");
	PlayerTextDrawFont(playerid, UberMainTD[playerid][0], 1);
	PlayerTextDrawLetterSize(playerid, UberMainTD[playerid][0], 0.166666, 1.049998);
	PlayerTextDrawTextSize(playerid, UberMainTD[playerid][0], 620.500000, 103.500000);
	PlayerTextDrawSetOutline(playerid, UberMainTD[playerid][0], 0);
	PlayerTextDrawSetShadow(playerid, UberMainTD[playerid][0], 0);
	PlayerTextDrawAlignment(playerid, UberMainTD[playerid][0], 1);
	PlayerTextDrawColor(playerid, UberMainTD[playerid][0], -1094795521);
	PlayerTextDrawBackgroundColor(playerid, UberMainTD[playerid][0], 255);
	PlayerTextDrawBoxColor(playerid, UberMainTD[playerid][0], 50);
	PlayerTextDrawUseBox(playerid, UberMainTD[playerid][0], 0);
	PlayerTextDrawSetProportional(playerid, UberMainTD[playerid][0], 1);
	PlayerTextDrawSetSelectable(playerid, UberMainTD[playerid][0], 0);

	UberMainTD[playerid][1] = CreatePlayerTextDraw(playerid, 529.000000, 252.000000, "What are you looking for today?");
	PlayerTextDrawFont(playerid, UberMainTD[playerid][1], 1);
	PlayerTextDrawLetterSize(playerid, UberMainTD[playerid][1], 0.166666, 1.049998);
	PlayerTextDrawTextSize(playerid, UberMainTD[playerid][1], 590.000000, 103.500000);
	PlayerTextDrawSetOutline(playerid, UberMainTD[playerid][1], 0);
	PlayerTextDrawSetShadow(playerid, UberMainTD[playerid][1], 0);
	PlayerTextDrawAlignment(playerid, UberMainTD[playerid][1], 1);
	PlayerTextDrawColor(playerid, UberMainTD[playerid][1], 255);
	PlayerTextDrawBackgroundColor(playerid, UberMainTD[playerid][1], 255);
	PlayerTextDrawBoxColor(playerid, UberMainTD[playerid][1], 50);
	PlayerTextDrawUseBox(playerid, UberMainTD[playerid][1], 0);
	PlayerTextDrawSetProportional(playerid, UberMainTD[playerid][1], 1);
	PlayerTextDrawSetSelectable(playerid, UberMainTD[playerid][1], 0);
}