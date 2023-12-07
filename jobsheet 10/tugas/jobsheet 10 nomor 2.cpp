/* 	nama tugas : Tugas Ke-10
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program : Membuat Program Menentukan Zodiak
*/

#include <stdio.h>

struct TanggalBulanTahun {
	int tanggal;
	int bulan;
	int tahun;
};

struct zodiak {
	char namaZodiak[30];
};

int main() {
	struct TanggalBulanTahun tanggalLahir;
	struct zodiak bintang[] = {
		{"Capricorn"},
		{"Aquarius"},
		{"Pisces"},
		{"Aries"},
		{"Taurus"},
		{"Gemini"},
		{"Cancer"},
		{"Leo"},
		{"Virgo"},
		{"Libra"},
		{"Scorpio"},
		{"Sagitarius"}
	};
	
	
    printf("\n\n================================\n");
    printf("Program Menentukan Zodiak Seseorang Berdasarkan Tanggal Lahir\n\n");

    printf("\n\n==================\n\n");
    printf("Masukkan Tanggal Lahir (format: dd-mm-yyyy): ");
    scanf("%02d-%02d-%04d", &tanggalLahir.tanggal, &tanggalLahir.bulan, &tanggalLahir.tahun);

    printf("\nTanggal Lahir Anda [%02d-%02d-%04d] : %02d-%02d-%04d\n", tanggalLahir.tanggal, tanggalLahir.bulan,
	 tanggalLahir.tahun, tanggalLahir.tanggal, tanggalLahir.bulan, tanggalLahir.tahun);

    int i = -1; 

    if ((tanggalLahir.tanggal >= 21 && tanggalLahir.tanggal <= 31 && tanggalLahir.bulan == 12) || 
	(tanggalLahir.tanggal >= 1 && tanggalLahir.tanggal <= 20 && tanggalLahir.bulan == 1)) {
        i = 0;
    } else if ((tanggalLahir.tanggal >= 21 && tanggalLahir.tanggal <= 31 && tanggalLahir.bulan == 1) || 
	(tanggalLahir.tanggal >= 1 && tanggalLahir.tanggal <= 20 && tanggalLahir.bulan == 2)) {
        i = 1;
    } else if ((tanggalLahir.tanggal >= 21 && tanggalLahir.tanggal <= 28 && tanggalLahir.bulan == 2) || 
	(tanggalLahir.tanggal >= 1 && tanggalLahir.tanggal <= 20 && tanggalLahir.bulan == 3)) {
        i = 2;
    } else if ((tanggalLahir.tanggal >= 21 && tanggalLahir.tanggal <= 31 && tanggalLahir.bulan == 3) || 
	(tanggalLahir.tanggal >= 1 && tanggalLahir.tanggal <= 20 && tanggalLahir.bulan == 4)) {
        i = 3;
    } else if ((tanggalLahir.tanggal >= 21 && tanggalLahir.tanggal <= 30 && tanggalLahir.bulan == 4) || 
	(tanggalLahir.tanggal >= 1 && tanggalLahir.tanggal <= 20 && tanggalLahir.bulan == 5)) {
        i = 4;
    } else if ((tanggalLahir.tanggal >= 21 && tanggalLahir.tanggal <= 31 && tanggalLahir.bulan == 5) || 
	(tanggalLahir.tanggal >= 1 && tanggalLahir.tanggal <= 20 && tanggalLahir.bulan == 6)) {
        i = 5;
    } else if ((tanggalLahir.tanggal >= 21 && tanggalLahir.tanggal <= 30 && tanggalLahir.bulan == 6) || 
	(tanggalLahir.tanggal >= 1 && tanggalLahir.tanggal <= 20 && tanggalLahir.bulan == 7)) {
        i = 6;
    } else if ((tanggalLahir.tanggal >= 21 && tanggalLahir.tanggal <= 31 && tanggalLahir.bulan == 7) || 
	(tanggalLahir.tanggal >= 1 && tanggalLahir.tanggal <= 20 && tanggalLahir.bulan == 8)) {
        i = 7;
    } else if ((tanggalLahir.tanggal >= 21 && tanggalLahir.tanggal <= 31 && tanggalLahir.bulan == 8) || 
	(tanggalLahir.tanggal >= 1 && tanggalLahir.tanggal <= 20 && tanggalLahir.bulan == 9)) {
        i = 8;
    } else if ((tanggalLahir.tanggal >= 21 && tanggalLahir.tanggal <= 30 && tanggalLahir.bulan == 9) || 
	(tanggalLahir.tanggal >= 1 && tanggalLahir.tanggal <= 20 && tanggalLahir.bulan == 10)) {
        i = 9;
    } else if ((tanggalLahir.tanggal >= 21 && tanggalLahir.tanggal <= 31 && tanggalLahir.bulan == 10) || 
	(tanggalLahir.tanggal >= 1 && tanggalLahir.tanggal <= 20 && tanggalLahir.bulan == 11)) {
        i = 10;
    } else if ((tanggalLahir.tanggal >= 21 && tanggalLahir.tanggal <= 30 && tanggalLahir.bulan == 11) || 
	(tanggalLahir.tanggal >= 1 && tanggalLahir.tanggal <= 20 && tanggalLahir.bulan == 12)) {
        i = 11;
    }

    if (i != -1) {
        printf("Zodiak Anda adalah : %s\n", bintang[i].namaZodiak);
    } else {
        printf("Maaf, Zodiak Anda tidak diketahui\n");
    }

    printf("\n\n==================\n\n");

    return 0;
}
