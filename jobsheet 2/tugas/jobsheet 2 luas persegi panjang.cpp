/* 	nama tugas : Tugas Ke-2
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program : Membuat Program Luas Persegi Panjang
*/

#include <stdio.h>

int main(){
	
	int panjang, lebar, hasil;
	
	printf("Inputkan nilai panjang:  ");
	scanf("%icm", &panjang);
	
	printf("Inputkan nilai lebar:  ");
	scanf("%icm", &lebar);
	
	hasil = panjang * lebar;
	
	printf("Luas Persegi Panjang adalah: %icm", hasil);
	
	return 0;
	
}
