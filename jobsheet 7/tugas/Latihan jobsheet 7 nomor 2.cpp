/* 	nama tugas : Tugas Ke-7
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program : Membuat Program Input Siswa
*/

#include <stdio.h>

int main() {
	
    int n; // Jumlah mahasiswa
    printf("Masukkan jumlah nama mahasiswa : ");
    scanf("%d", &n);

    // Deklarasi array untuk menampung nama mahasiswa
    char nama_mahasiswa[n][100]; // Maksimum 100 karakter per nama

    // Meminta input nama mahasiswa
    for (int i = 0; i < n; i++) {
        printf("Masukkan nama mahasiswa ke-%d : ", i + 1);
        scanf("%s", nama_mahasiswa[i]);
    }

    // Menampilkan nama-nama mahasiswa
    printf("\nNama-nama mahasiswa :\n");
    for (int i = 0; i < n; i++) {
        printf("Mahasiswa ke-%d : %s\n", i + 1, nama_mahasiswa[i]);
    }

    return 0;
}
