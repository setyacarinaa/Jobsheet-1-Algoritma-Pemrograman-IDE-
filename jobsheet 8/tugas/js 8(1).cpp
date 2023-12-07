/* 	nama tugas : Tugas Ke-8
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program : Membuat Program Perkalian Dua Buah Bilangan Bulat Positif
*/

#include <stdio.h>

int perkalian_rekursif(int a, int b) {
    // Kasus dasar: jika salah satu bilangan adalah 0, hasilnya adalah 0
    if (a == 0 || b == 0) {
        return 0;
    }
    // Kasus rekursif: a * b dapat dihitung sebagai a + (a * (b-1))
    else {
        return a + perkalian_rekursif(a, b - 1);
    }
}

int main() {
    int bilangan1 = 12;
    int bilangan2 = 6;

    // Memanggil fungsi rekursif untuk menghitung hasil perkalian
    int hasil_perkalian = perkalian_rekursif(bilangan1, bilangan2);

    // Menampilkan hasil perkalian
    printf("Hasil perkalian %d x %d adalah: %d\n", bilangan1, bilangan2, hasil_perkalian);

    return 0;
}
