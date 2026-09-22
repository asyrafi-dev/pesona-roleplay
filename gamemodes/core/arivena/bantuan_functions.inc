#include <YSI_Coding\y_hooks>
new Text: BantuanTD[26];

hook OnPlayerClickTextDraw(playerid, Text:bantuan)
{
	if(bantuan == BantuanTD[1])
	{
		PlayerPlaySound(playerid, 21001, 0.0, 0.0, 0.0);

		CancelSelectTextDraw(playerid);
		HideBantuanTD(playerid);

		ShowServerNameTD(playerid);
		//ShowStatsTD(playerid);

		ShowHBETD(playerid);
        ShowStatsTD(playerid);

	}
	else if(bantuan == BantuanTD[2]) //perintah dasar
	{
        //Dialog_Show(playerid, "UnusedDialog", DIALOG_STYLE_TABLIST_HEADERS, ""Y_NEXOTIS"Pesona Roleplay "WHITE"- Perintah Dasar",
        Dialog_Show(playerid, "PlayerHelp", DIALOG_STYLE_TABLIST_HEADERS,
        ""NEXOTIS"Pesona "WHITE"- Bantuan",
        "Daftar Perintah\tKeterangan\n\
		/cc\tuntuk membersihkan chatlog di layar\n\
		"GRAY"/togchatanim\t"GRAY"untuk toggle animasi ketika berbicara\n\
		/id\tuntuk melihat detail dari player lain\n\
		"GRAY"/admins\t"GRAY"melihat daftar admin di server\n\
		/help\tmelihat bantuan seputar CMD\n\
		"GRAY"/qa\t"GRAY"jawab quiz dari admin\n\
		/cursor\tmengembalikan cursor yang hilang\n\
		"GRAY"/setrender\t"GRAY"atur render object mappingan sesuai spek device\n\
		/stopsong\tmatikan musik yang sedang terdengar\n\
		"GRAY"/elist\t"GRAY"lihat daftar nama animasi\n\
		/flist\tlihat jumlah anggota faction on duty\n\
		"GRAY"/fams\t"GRAY"melihat badside official Pesona\n\
		/hidektd\tsembunyikan textdraw KTP\n\
		"GRAY"/report\t"GRAY"lapor sesuatu kepada admin lapangan\n\
		/pay\tberi uang\n\
		"GRAY"/accept\t"GRAY"menerima sesuatu/transaksi\n\
		/ask\tajukan pertanyaan kepada admin lapangan\n\
		"GRAY"/toggle\t"GRAY"buka pengaturan toggle\n\
		/carry\tgendong orang lain\n\
		"GRAY"/fixme\t"GRAY"auto fix bug yang sedang terjadi\n\
		/dlog\tbuka damagelog karaktermu\n\
		"GRAY"/stats\t"GRAY"melihat statistik akun/karakter\n\
		/stopsmoke\tberhenti merokok\n\
		"GRAY"/stopeating\t"GRAY"berhenti makan\n\
		/stopdrinking\tberhenti minum\n\
		"GRAY"/sid\t"GRAY"melihat ID dan Nama UCP pemain lain", "Tutup", "");
	}
	else if(bantuan == BantuanTD[3]) //perintah kendaraan
	{
		//Dialog_Show(playerid, "UnusedDialog", DIALOG_STYLE_TABLIST_HEADERS, ""Y_NEXOTIS"Pesona Roleplay "WHITE"- Perintah Kendaraan",
        Dialog_Show(playerid, "PlayerHelp", DIALOG_STYLE_TABLIST_HEADERS,
        ""NEXOTIS"Pesona "WHITE"- Perintah Kendaraan",
        "Daftar Perintah\tKeterangan\n\
		/en\tuntuk hidupkan/matikan mesin\n\
		"GRAY"/myv\t"GRAY"lihat list kendaraan yang dimiliki\n\
		/sellveh\tjual kendaraan pada orang lain\n\
		"GRAY"/sl\t"GRAY"tetapkan speed limit/matikan speed limit\n\
		/eject\tkeluarkan paksa orang lain dari kendaraan", "Tutup", "");
	}
	else if(bantuan == BantuanTD[4]) //perintah Roleplay
	{
		//Dialog_Show(playerid, "UnusedDialog", DIALOG_STYLE_TABLIST_HEADERS, ""Y_NEXOTIS"Pesona Roleplay "WHITE"- Perintah Roleplay",
        Dialog_Show(playerid, "PlayerHelp", DIALOG_STYLE_TABLIST_HEADERS,
        ""NEXOTIS"Pesona "WHITE"- Perintah Roleplay",
        "Daftar Perintah\tKeterangan\n\
		/ado\tmenerangkan situasi dengan label teks\n\
		"GRAY"/me\t"GRAY"menerangkan aktivitas rp dengan memunculkannya di atas kepala\n\
		/do\tmenjelaskan suasana rp dengan memunculkannya di atas kepala\n\
		"GRAY"/w\t"GRAY"berbisik kepada karakter lain\n\
		/b\tlokal chat OOC\n\
		"GRAY"/o\t"GRAY"global chat OOC", "Tutup", "");
	}
	else if(bantuan == BantuanTD[5]) //petunjuk dasar
	{
		//Dialog_Show(playerid, "UnusedDialog", DIALOG_STYLE_TABLIST_HEADERS, ""Y_NEXOTIS"Pesona Roleplay "WHITE"- Petunjuk Dasar",
        Dialog_Show(playerid, "PlayerHelp", DIALOG_STYLE_TABLIST_HEADERS,
        ""NEXOTIS"Pesona "WHITE"- Petunjuk Dasar",
        "Daftar Perintah\tKeterangan\n\
		/sv\tuntuk mengganti mode suara\n\
		"GRAY"/e (nama animasi)\t"GRAY"untuk memainkan animasi\n\
		/eprop (nama animasi)\tuntuk memainkan animasi property", "Tutup", "");
	}
	else if(bantuan == BantuanTD[6]) //petunjuk lapar & haus
	{
		Dialog_Show(playerid, "UnusedDialog", DIALOG_STYLE_MSGBOX,
        ""NEXOTIS"Pesona Roleplay "WHITE"- Petunjuk Lapar Haus",
		""WHITE"Dikarenakan Nexotis merupakan server dengan mode Roleplay, tentu saja karakter anda\n\
		dapat merasakan lapar dan haus hingga stress.\n\
		Bagaimana cara membedakannya dan menemukannya di layar monitor anda?\n\n\
		Secara umum ketiganya terletak di bawah layar kiri monitor anda,\n\
		Lapar -> Ditandai dengan progress bar berwarna "YELLOW"kuning "WHITE"yang terdapat icon makanan.\n\
		Haus -> Ditandai dengan progress bar berwarna {009dc4}biru.\n\
		"WHITE"Stress -> Ditandai dengan progress bar berwarna "RED"merah.\n\n\
		"WHITE"Anda harus menggunakan item makanan & minuman untuk mengisi kebutuhan lapar & haus,\n\
		apabila "ORANGE"kosong "WHITE"sama sekali maka karakter akan pingsan otomatis. Progress bar stress\n\
		sendiri dirancang cukup unik dimana anda justru mencegahnya untuk penuh, apabila stress mencapai\n\
		kategori tinggi maka karakter akan mengalami "ORANGE"pusing "WHITE"dan layar anda kebiru-biruan.\n\
		Untuk menuruni stress anda dapat pergi ke "ORANGE"GYM "WHITE"atau mengonsumsi marijuana jika\n\
		anda memilikinya ataupun mengonsumsi pil stress.", "Tutup", "");
	}
	else if(bantuan == BantuanTD[7]) //petunjuk system balapan
	{
		Dialog_Show(playerid, "UnusedDialog", DIALOG_STYLE_TABLIST_HEADERS,
        ""NEXOTIS"Pesona Roleplay "WHITE"- Perintah Racing",
		"Daftar Perintah\tKeterangan\n\
		/race create\tuntuk membuat balapan\n\
		/race reset\tmenghapus balapan yang sedang dibuat\n\
		/race start\tmembuka balapan agar dapat dimasuki player lain\n\
		/race join\tbergabung ke dalam balapan\n\
		/race leave\tkeluar dari balapan", "Tutup", "");
	}
	else if(bantuan == BantuanTD[8]) //hotkeys pc
	{
		Dialog_Show(playerid, "UnusedDialog", DIALOG_STYLE_TABLIST_HEADERS,
        ""NEXOTIS"Pesona Roleplay "WHITE"- Hotkeys",
		"Daftar Perintah\tKeterangan\n\
		Tombol P\tuntuk membuka smartphone\n\
		"GRAY"Tombol I\t"GRAY"untuk membuka tas/inventory\n\
		Tombol Z\tuntuk mengubah jarak voice chat\n\
		"GRAY"Tombol U\t"GRAY"untuk buka/kunci kendaraan\n\
		Tombol 1\tuntuk menggunakan item yang berada di slot 1\n\
		"GRAY"Tombol 2\t"GRAY"untuk menggunakan item yang berada di slot 2\n\
		Tombol 3\tuntuk menggunakan item yang berada di slot 3\n\
		"GRAY"Tombol 4\t"GRAY"untuk menggunakan item yang berada di slot 4\n\
		Tombol R\tuntuk membuka radio\n\
		"GRAY"Tombol X\t"GRAY"untuk menghentikan animasi\n\
		Tombol N\tuntuk membuka radial menu\n\
		"GRAY"Jongkok + ALT\t"GRAY"untuk mengambil item di atas tanah\n\
		Tombol F\tkeluar-masuk interior", "Tutup", "");
	}
    return 1;
}

CreateBantuanTD()
{
    BantuanTD[0] = TextDrawCreate(353.000, 134.000, "LD_SPAC:white");
    TextDrawTextSize(BantuanTD[0], 90.000, 22.000);
    TextDrawAlignment(BantuanTD[0], 1);
    TextDrawColor(BantuanTD[0], -377187329);
    TextDrawSetShadow(BantuanTD[0], 0);
    TextDrawSetOutline(BantuanTD[0], 0);
    TextDrawBackgroundColor(BantuanTD[0], 255);
    TextDrawFont(BantuanTD[0], 4);
    TextDrawSetProportional(BantuanTD[0], 1);

    BantuanTD[1] = TextDrawCreate(353.000, 317.000, "LD_SPAC:white");
    TextDrawTextSize(BantuanTD[1], 90.000, 21.000);
    TextDrawAlignment(BantuanTD[1], 1);
    TextDrawColor(BantuanTD[1], -377187329);
    TextDrawSetShadow(BantuanTD[1], 0);
    TextDrawSetOutline(BantuanTD[1], 0);
    TextDrawBackgroundColor(BantuanTD[1], 255);
    TextDrawFont(BantuanTD[1], 4);
    TextDrawSetProportional(BantuanTD[1], 1);
    TextDrawSetSelectable(BantuanTD[1], 1);

    BantuanTD[2] = TextDrawCreate(353.000, 158.000, "LD_SPAC:white");
    TextDrawTextSize(BantuanTD[2], 90.000, 21.000);
    TextDrawAlignment(BantuanTD[2], 1);
    TextDrawColor(BantuanTD[2], -377121878);
    TextDrawSetShadow(BantuanTD[2], 0);
    TextDrawSetOutline(BantuanTD[2], 0);
    TextDrawBackgroundColor(BantuanTD[2], 255);
    TextDrawFont(BantuanTD[2], 4);
    TextDrawSetProportional(BantuanTD[2], 1);
    TextDrawSetSelectable(BantuanTD[2], 1);

    BantuanTD[3] = TextDrawCreate(353.000, 181.000, "LD_SPAC:white");
    TextDrawTextSize(BantuanTD[3], 90.000, 21.000);
    TextDrawAlignment(BantuanTD[3], 1);
    TextDrawColor(BantuanTD[3], -377187158);
    TextDrawSetShadow(BantuanTD[3], 0);
    TextDrawSetOutline(BantuanTD[3], 0);
    TextDrawBackgroundColor(BantuanTD[3], 255);
    TextDrawFont(BantuanTD[3], 4);
    TextDrawSetProportional(BantuanTD[3], 1);
    TextDrawSetSelectable(BantuanTD[3], 1);

    BantuanTD[4] = TextDrawCreate(353.000, 204.000, "LD_SPAC:white");
    TextDrawTextSize(BantuanTD[4], 90.000, 20.000);
    TextDrawAlignment(BantuanTD[4], 1);
    TextDrawColor(BantuanTD[4], -377187158);
    TextDrawSetShadow(BantuanTD[4], 0);
    TextDrawSetOutline(BantuanTD[4], 0);
    TextDrawBackgroundColor(BantuanTD[4], 255);
    TextDrawFont(BantuanTD[4], 4);
    TextDrawSetProportional(BantuanTD[4], 1);
    TextDrawSetSelectable(BantuanTD[4], 1);

    BantuanTD[5] = TextDrawCreate(353.000, 227.000, "LD_SPAC:white");
    TextDrawTextSize(BantuanTD[5], 90.000, 21.000);
    TextDrawAlignment(BantuanTD[5], 1);
    TextDrawColor(BantuanTD[5], -377187158);
    TextDrawSetShadow(BantuanTD[5], 0);
    TextDrawSetOutline(BantuanTD[5], 0);
    TextDrawBackgroundColor(BantuanTD[5], 255);
    TextDrawFont(BantuanTD[5], 4);
    TextDrawSetProportional(BantuanTD[5], 1);
    TextDrawSetSelectable(BantuanTD[5], 1);

    BantuanTD[6] = TextDrawCreate(353.000, 250.000, "LD_SPAC:white");
    TextDrawTextSize(BantuanTD[6], 90.000, 19.000);
    TextDrawAlignment(BantuanTD[6], 1);
    TextDrawColor(BantuanTD[6], -377187158);
    TextDrawSetShadow(BantuanTD[6], 0);
    TextDrawSetOutline(BantuanTD[6], 0);
    TextDrawBackgroundColor(BantuanTD[6], 255);
    TextDrawFont(BantuanTD[6], 4);
    TextDrawSetProportional(BantuanTD[6], 1);
    TextDrawSetSelectable(BantuanTD[6], 1);

    BantuanTD[7] = TextDrawCreate(353.000, 271.000, "LD_SPAC:white");
    TextDrawTextSize(BantuanTD[7], 90.000, 21.000);
    TextDrawAlignment(BantuanTD[7], 1);
    TextDrawColor(BantuanTD[7], -377187158);
    TextDrawSetShadow(BantuanTD[7], 0);
    TextDrawSetOutline(BantuanTD[7], 0);
    TextDrawBackgroundColor(BantuanTD[7], 255);
    TextDrawFont(BantuanTD[7], 4);
    TextDrawSetProportional(BantuanTD[7], 1);
    TextDrawSetSelectable(BantuanTD[7], 1);

    BantuanTD[8] = TextDrawCreate(353.000, 294.000, "LD_SPAC:white");
    TextDrawTextSize(BantuanTD[8], 90.000, 21.000);
    TextDrawAlignment(BantuanTD[8], 1);
    TextDrawColor(BantuanTD[8], -377187158);
    TextDrawSetShadow(BantuanTD[8], 0);
    TextDrawSetOutline(BantuanTD[8], 0);
    TextDrawBackgroundColor(BantuanTD[8], 255);
    TextDrawFont(BantuanTD[8], 4);
    TextDrawSetProportional(BantuanTD[8], 1);
    TextDrawSetSelectable(BantuanTD[8], 1);

    BantuanTD[9] = TextDrawCreate(370.000, 137.000, "JENIS BANTUAN");
    TextDrawLetterSize(BantuanTD[9], 0.210, 1.399);
    TextDrawAlignment(BantuanTD[9], 1);
    TextDrawColor(BantuanTD[9], -1);
    TextDrawSetShadow(BantuanTD[9], 0);
    TextDrawSetOutline(BantuanTD[9], 0);
    TextDrawBackgroundColor(BantuanTD[9], 150);
    TextDrawFont(BantuanTD[9], 1);
    TextDrawSetProportional(BantuanTD[9], 1);

    BantuanTD[10] = TextDrawCreate(356.000, 159.000, "PERINTAH DASAR");
    TextDrawLetterSize(BantuanTD[10], 0.189, 1.098);
    TextDrawAlignment(BantuanTD[10], 1);
    TextDrawColor(BantuanTD[10], -1);
    TextDrawSetShadow(BantuanTD[10], 0);
    TextDrawSetOutline(BantuanTD[10], 0);
    TextDrawBackgroundColor(BantuanTD[10], 150);
    TextDrawFont(BantuanTD[10], 1);
    TextDrawSetProportional(BantuanTD[10], 1);

    BantuanTD[11] = TextDrawCreate(356.000, 249.000, "PETUNJUK LAPAR & HAUS");
    TextDrawLetterSize(BantuanTD[11], 0.179, 1.199);
    TextDrawAlignment(BantuanTD[11], 1);
    TextDrawColor(BantuanTD[11], -1);
    TextDrawSetShadow(BantuanTD[11], 0);
    TextDrawSetOutline(BantuanTD[11], 0);
    TextDrawBackgroundColor(BantuanTD[11], 150);
    TextDrawFont(BantuanTD[11], 1);
    TextDrawSetProportional(BantuanTD[11], 1);

    BantuanTD[12] = TextDrawCreate(356.000, 270.000, "PERINTAH RACING");
    TextDrawLetterSize(BantuanTD[12], 0.179, 0.998);
    TextDrawAlignment(BantuanTD[12], 1);
    TextDrawColor(BantuanTD[12], -1);
    TextDrawSetShadow(BantuanTD[12], 0);
    TextDrawSetOutline(BantuanTD[12], 0);
    TextDrawBackgroundColor(BantuanTD[12], 150);
    TextDrawFont(BantuanTD[12], 1);
    TextDrawSetProportional(BantuanTD[12], 1);

    BantuanTD[13] = TextDrawCreate(356.000, 294.000, "HOTKEYS");
    TextDrawLetterSize(BantuanTD[13], 0.189, 0.998);
    TextDrawAlignment(BantuanTD[13], 1);
    TextDrawColor(BantuanTD[13], -1);
    TextDrawSetShadow(BantuanTD[13], 0);
    TextDrawSetOutline(BantuanTD[13], 0);
    TextDrawBackgroundColor(BantuanTD[13], 150);
    TextDrawFont(BantuanTD[13], 1);
    TextDrawSetProportional(BantuanTD[13], 1);

    BantuanTD[14] = TextDrawCreate(356.000, 181.000, "PERINTAH KENDARAAN");
    TextDrawLetterSize(BantuanTD[14], 0.159, 1.199);
    TextDrawAlignment(BantuanTD[14], 1);
    TextDrawColor(BantuanTD[14], -1);
    TextDrawSetShadow(BantuanTD[14], 0);
    TextDrawSetOutline(BantuanTD[14], 0);
    TextDrawBackgroundColor(BantuanTD[14], 150);
    TextDrawFont(BantuanTD[14], 1);
    TextDrawSetProportional(BantuanTD[14], 1);

    BantuanTD[15] = TextDrawCreate(356.000, 203.000, "PERINTAH ROLEPLAY");
    TextDrawLetterSize(BantuanTD[15], 0.159, 1.199);
    TextDrawAlignment(BantuanTD[15], 1);
    TextDrawColor(BantuanTD[15], -1);
    TextDrawSetShadow(BantuanTD[15], 0);
    TextDrawSetOutline(BantuanTD[15], 0);
    TextDrawBackgroundColor(BantuanTD[15], 150);
    TextDrawFont(BantuanTD[15], 1);
    TextDrawSetProportional(BantuanTD[15], 1);

    BantuanTD[16] = TextDrawCreate(356.000, 226.000, "PETUNJUK DASAR");
    TextDrawLetterSize(BantuanTD[16], 0.179, 1.199);
    TextDrawAlignment(BantuanTD[16], 1);
    TextDrawColor(BantuanTD[16], -1);
    TextDrawSetShadow(BantuanTD[16], 0);
    TextDrawSetOutline(BantuanTD[16], 0);
    TextDrawBackgroundColor(BantuanTD[16], 150);
    TextDrawFont(BantuanTD[16], 1);
    TextDrawSetProportional(BantuanTD[16], 1);

    BantuanTD[17] = TextDrawCreate(356.000, 167.000, "Berisi beberapa cmd dasar player");
    TextDrawLetterSize(BantuanTD[17], 0.119, 1.098);
    TextDrawAlignment(BantuanTD[17], 1);
    TextDrawColor(BantuanTD[17], -1);
    TextDrawSetShadow(BantuanTD[17], 0);
    TextDrawSetOutline(BantuanTD[17], 0);
    TextDrawBackgroundColor(BantuanTD[17], 150);
    TextDrawFont(BantuanTD[17], 1);
    TextDrawSetProportional(BantuanTD[17], 1);

    BantuanTD[18] = TextDrawCreate(356.000, 189.000, "Berisi beberapa cmd seputar kendaraan");
    TextDrawLetterSize(BantuanTD[18], 0.109, 1.199);
    TextDrawAlignment(BantuanTD[18], 1);
    TextDrawColor(BantuanTD[18], -251662081);
    TextDrawSetShadow(BantuanTD[18], 0);
    TextDrawSetOutline(BantuanTD[18], 0);
    TextDrawBackgroundColor(BantuanTD[18], 150);
    TextDrawFont(BantuanTD[18], 1);
    TextDrawSetProportional(BantuanTD[18], 1);

    BantuanTD[19] = TextDrawCreate(356.000, 212.000, "Berisi beberapa cmd untuk roleplay");
    TextDrawLetterSize(BantuanTD[19], 0.119, 1.098);
    TextDrawAlignment(BantuanTD[19], 1);
    TextDrawColor(BantuanTD[19], -251662081);
    TextDrawSetShadow(BantuanTD[19], 0);
    TextDrawSetOutline(BantuanTD[19], 0);
    TextDrawBackgroundColor(BantuanTD[19], 150);
    TextDrawFont(BantuanTD[19], 1);
    TextDrawSetProportional(BantuanTD[19], 1);

    BantuanTD[20] = TextDrawCreate(356.000, 234.000, "Berisi Beberapa Petunjuk Dasar Server");
    TextDrawLetterSize(BantuanTD[20], 0.109, 1.199);
    TextDrawAlignment(BantuanTD[20], 1);
    TextDrawColor(BantuanTD[20], -251662081);
    TextDrawSetShadow(BantuanTD[20], 0);
    TextDrawSetOutline(BantuanTD[20], 0);
    TextDrawBackgroundColor(BantuanTD[20], 150);
    TextDrawFont(BantuanTD[20], 1);
    TextDrawSetProportional(BantuanTD[20], 1);

    BantuanTD[21] = TextDrawCreate(355.000, 257.000, "Berisi beberapa petunjuk tentang kebutuhan karakter");
    TextDrawLetterSize(BantuanTD[21], 0.100, 1.098);
    TextDrawAlignment(BantuanTD[21], 1);
    TextDrawColor(BantuanTD[21], -251662081);
    TextDrawSetShadow(BantuanTD[21], 0);
    TextDrawSetOutline(BantuanTD[21], 0);
    TextDrawBackgroundColor(BantuanTD[21], 150);
    TextDrawFont(BantuanTD[21], 1);
    TextDrawSetProportional(BantuanTD[21], 1);

    BantuanTD[22] = TextDrawCreate(356.000, 277.000, "Berisi beberapa cmd untuk system balapan");
    TextDrawLetterSize(BantuanTD[22], 0.109, 1.199);
    TextDrawAlignment(BantuanTD[22], 1);
    TextDrawColor(BantuanTD[22], -251662081);
    TextDrawSetShadow(BantuanTD[22], 0);
    TextDrawSetOutline(BantuanTD[22], 0);
    TextDrawBackgroundColor(BantuanTD[22], 150);
    TextDrawFont(BantuanTD[22], 1);
    TextDrawSetProportional(BantuanTD[22], 1);

    BantuanTD[23] = TextDrawCreate(356.000, 302.000, "Beberapa tombol hanya bisa untuk PC");
    TextDrawLetterSize(BantuanTD[23], 0.119, 1.199);
    TextDrawAlignment(BantuanTD[23], 1);
    TextDrawColor(BantuanTD[23], -251662081);
    TextDrawSetShadow(BantuanTD[23], 0);
    TextDrawSetOutline(BantuanTD[23], 0);
    TextDrawBackgroundColor(BantuanTD[23], 150);
    TextDrawFont(BantuanTD[23], 1);
    TextDrawSetProportional(BantuanTD[23], 1);

    BantuanTD[24] = TextDrawCreate(377.000, 320.000, "KELUAR");
    TextDrawLetterSize(BantuanTD[24], 0.300, 1.500);
    TextDrawAlignment(BantuanTD[24], 1);
    TextDrawColor(BantuanTD[24], -1);
    TextDrawSetShadow(BantuanTD[24], 0);
    TextDrawSetOutline(BantuanTD[24], 0);
    TextDrawBackgroundColor(BantuanTD[24], 150);
    TextDrawFont(BantuanTD[24], 1);
    TextDrawSetProportional(BantuanTD[24], 1);

    BantuanTD[25] = TextDrawCreate(351.000, 134.000, "LD_SPAC:white");
    TextDrawTextSize(BantuanTD[25], 2.000, 204.000);
    TextDrawAlignment(BantuanTD[25], 1);
    TextDrawColor(BantuanTD[25], -1);
    TextDrawSetShadow(BantuanTD[25], 0);
    TextDrawSetOutline(BantuanTD[25], 0);
    TextDrawBackgroundColor(BantuanTD[25], 255);
    TextDrawFont(BantuanTD[25], 4);
    TextDrawSetProportional(BantuanTD[25], 1);

}

ShowBantuanTD(playerid)
{
	HideServerNameTD(playerid);
	HideHBETD(playerid);
    HideStatsTD(playerid);
	//HideStatsTD(playerid);
	//HideRadioVoiceInfoTD(playerid);

    for(new x; x < 26; x++)
    {
        TextDrawShowForPlayer(playerid, BantuanTD[x]);
    }
    SelectTextDraw(playerid, 0xff91a4cc);
}

HideBantuanTD(playerid)
{
    for(new x; x < 26; x++)
    {
        TextDrawHideForPlayer(playerid, BantuanTD[x]);
    }
}