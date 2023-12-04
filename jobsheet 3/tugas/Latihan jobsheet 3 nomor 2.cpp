/* 	nama tugas : Tugas Ke-3
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program : Membuat Program Konversi Suhu
*/

# include <stdio.h>

int main (){
	float C, K, F, R;

    // Meminta pengguna memasukkan suhu dalam Celsius
    printf("Masukkan suhu (celcius): ");
    scanf("%f", &C);

    // Menghitung suhu dalam Kelvin
    K = C + 273.15;

    // Menghitung suhu dalam Fahrenheit
    F = (C * 1.8) + 32;

    // Menghitung suhu dalam Reamur
    R = C * 0.8;

    // Menampilkan hasil konversi
    printf("%.2f Kelvin\n", K);
    printf("%.2f Fahrenheit\n", F);
    printf("%.2f Reamur\n", R);

    return 0;
}