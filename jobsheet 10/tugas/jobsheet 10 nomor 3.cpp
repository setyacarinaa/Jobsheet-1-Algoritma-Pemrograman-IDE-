/* 	nama tugas : Tugas Ke-10
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program  : Data Mahasiswa
*/
#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    char npm[20];
    char nama[100];
    char tanggal_lahir[20];
    char alamat[100];
    char hp[13];
};

int main() {
    char lagi;
    
    struct Mahasiswa mhs [50];
    int jumlahMahasiswa = 0;
    
    do {

        printf("\nMasukkan NPM : ");
        scanf("%s", mhs[jumlahMahasiswa].npm);

        printf("Masukkan nama : ");
        scanf(" %[^\n]s", mhs[jumlahMahasiswa].nama);

        printf("Masukkan tanggal lahir : ");
        scanf("%s", mhs[jumlahMahasiswa].tanggal_lahir);

        printf("Masukkan alamat : ");
        scanf(" %[^\n]s", mhs[jumlahMahasiswa].alamat);

        printf("Masukkan nomor HP : ");
        scanf("%s", mhs[jumlahMahasiswa].hp);
        
        jumlahMahasiswa++;
        
        printf("\nMau memasukan data lagi[y/t]?:");
        scanf(" %c", &lagi);
        
    } while (lagi == 'y' || lagi == 'Y');

		printf("\nData Mahasiswa:\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
		printf("%-15s%-30s%-20s%-20s%-10s\n", mhs[i].npm, mhs[i].nama, mhs[i].tanggal_lahir, 
		mhs[i].alamat, mhs[i].hp);
	}

    return 0;
}
