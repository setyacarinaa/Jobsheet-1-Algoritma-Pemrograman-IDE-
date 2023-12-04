/* 	nama tugas : Tugas Ke-4
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program : Membuat Program Kasir Barang
*/

#include <stdio.h>

int main() {
    char namaPembeli[100];
    char namaBarang[100];
    float hargaBarangSatuan;
    int jumlahBarang;
    float hargaTotal;

    // memasukkan nama pembeli, nama  barang, harga dan jumlah barang
    printf("Masukkan nama pembeli: ");
    scanf("%s", namaPembeli);

    printf("Masukkan nama barang: ");
    scanf("%s", namaBarang);

    printf("Masukkan harga barang satuan: ");
    scanf("%f", &hargaBarangSatuan);

    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlahBarang);

    // Menghitung harga total
    hargaTotal = hargaBarangSatuan * jumlahBarang;

    // Menampilkan struk pembelian
    printf("\nStruk Pembelian:\n");
    printf("Nama Pembeli: %s\n", namaPembeli);
    printf("Nama Barang: %s\n", namaBarang);
    printf("Harga Barang Satuan: %.2f\n", hargaBarangSatuan);
    printf("Jumlah Barang: %d\n", jumlahBarang);
    printf("Harga Total: %.2f\n", hargaTotal);

    return 0;
}




