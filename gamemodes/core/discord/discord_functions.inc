//#include <YSI_Coding\y_hooks>

forward OnServerOnline();
public OnServerOnline()
{
    new DCC_Embed:embedonl, description[512];

    embedonl = DCC_CreateEmbed("Nexotis", "", .color = 0xFF91A4, .footer_text = "Penjaga Pintu Theater #1", .footer_icon_url = "https://media.discordapp.net/attachments/1012271786911612938/1012547423199055902/Logo_Transparent.png?width=663&height=663", .image_url = "https://cdn.discordapp.com/attachments/1019532074119593984/1019825997727662130/onlinecut.png");
    format(description, sizeof(description), 
    "**SEBELUM BERMAIN WAJIB BACA:\n\
    <#1011812617624494090>\n\
    <#1011812655700389899>\n\
    <#1011812678366400583>\n**");
    DCC_SetEmbedDescription(embedonl, description);

    DCC_SetEmbedThumbnail(embedonl, "https://media.discordapp.net/attachments/1012271786911612938/1012547423199055902/Logo_Transparent.png?width=663&height=663");
    DCC_SendChannelEmbedMessage(ANNOUNCEMENT, embedonl);
    DCC_SendChannelMessage(ANNOUNCEMENT, "<@&1011797579723440178>");
    return 1;
}

forward OnServerOffline();
public OnServerOffline()
{
    new DCC_Embed:embedmt, description[512];

    embedmt = DCC_CreateEmbed("Nexotis", "", .color = 0xFF91A4, .footer_text = "Penjaga Pintu Theater #1", .footer_icon_url = "https://media.discordapp.net/attachments/1012271786911612938/1012547423199055902/Logo_Transparent.png?width=663&height=663", .image_url = "https://cdn.discordapp.com/attachments/1019532074119593984/1019825997308252240/offlinecut.png");
    format(description, sizeof(description), 
    "**SEBELUM BERMAIN WAJIB BACA:\n\
    <#1011812617624494090>\n\
    <#1011812655700389899>\n\
    <#1011812678366400583>\n**");
    DCC_SetEmbedDescription(embedmt, description);
    DCC_SetEmbedThumbnail(embedmt, "https://media.discordapp.net/attachments/1012271786911612938/1012547423199055902/Logo_Transparent.png?width=663&height=663");
    DCC_SendChannelEmbedMessage(ANNOUNCEMENT, embedmt);
    DCC_SendChannelMessage(ANNOUNCEMENT, "<@&1011797579723440178>");
    return 1;
}