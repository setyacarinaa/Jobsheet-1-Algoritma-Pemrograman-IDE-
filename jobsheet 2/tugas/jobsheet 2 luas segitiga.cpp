/* 	nama tugas : Tugas Ke-2
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program : Membuat Program Luas Segitiga
*/

#include <stdio.h>

int main(){
	
	int alas, tinggi, hasil;
	
	printf("Inputkan nilai alas:  ");
	scanf("%icm", &alas);
	
	printf("Inputkan nilai tinggi:  ");
	scanf("%icm", &tinggi);
	
	hasil = (alas * tinggi)/2;
	
	printf("Luas Segitiga adalah: %icm", hasil);
	
	return 0;
	
}
