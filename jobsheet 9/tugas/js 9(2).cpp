/* 	nama tugas : Tugas Ke-9
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program  : B. Menggunakan Asteris
*/
#include <stdio.h>
#include <string.h>

void balikkanString(char *str) {
    int panjang = strlen(str);
    int start = 0;
    int end = panjang - 1;

    while (start < end) {
        // menukar karakter di posisi awal dan akhir
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // pindah ke karakter selanjutnya
        start++;
        end--;
    }
}

int main() {
    char kalimat[100];

    // Input kalimat dari pengguna
    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    // Hapus karakter newline dari input
    kalimat[strcspn(kalimat, "\n")] = '\0';

    // Panggil fungsi untuk membalikkan kalimat
    balikkanString(kalimat);

    // Tampilkan kalimat yang sudah dibalik
    printf("Kebalikannya: %s\n", kalimat);

    return 0;
}
