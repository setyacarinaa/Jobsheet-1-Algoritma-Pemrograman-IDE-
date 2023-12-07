/* 	nama tugas : Tugas Ke-7
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program : Membuat Program Rata-Rata
*/

#include <stdio.h>

int main() {
	
    int n = 20; // Jumlah mahasiswa
    float nilai[n]; // Array untuk menyimpan nilai

    // Meminta input nilai dari 20 mahasiswa
    for (int i = 0; i < n; i++) {
        printf("Masukkan nilai mahasiswa ke-%d : ", i + 1);
        scanf("%f", &nilai[i]);
    }

    // Menghitung total nilai
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += nilai[i];
    }

    // Menghitung rata-rata
    float rata_rata = total / n;

    // Menampilkan rata-rata nilai
    printf("Rata-rata nilai mahasiswa : %.2f\n", rata_rata);

    return 0;
}
