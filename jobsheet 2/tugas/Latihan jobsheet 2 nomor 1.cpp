/* 	nama tugas : Tugas Ke-2
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program : Membuat Program Input Nama
*/

#include <stdio.h>

int main() {
    char nama[100];

    // Menampilkan pesan permintaan nama
    printf("Hello, siapa nama lengkapmu?: ");
    
    // Membaca input nama dari pengguna
    scanf("%99[^\n]", nama);

    // Menampilkan pesan selamat datang
    printf("Selamat Datang %s dalam Pemrograman C!\n", nama );

    return 0;
}
