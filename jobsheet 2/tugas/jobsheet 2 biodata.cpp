/* 	nama tugas : Tugas Ke-2
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program : Membuat Program Bio Data
*/

#include <stdio.h>

int main(){
	char name[20], NIM[8], Prodi[15], Fakultas[20];
	int Nilai_Praktikum;
	int Nilai_UTS;
	int Nilai_UAS;
	float Nilai_Akhir;
	
	printf("Nama:  ");
	scanf("%[^\n]s", &name);
	
	printf("NIM:  ");
	scanf("%i", &NIM);

	printf("Prodi:  ");
	scanf("%s", &Prodi);
	
	printf("Fakultas:  ");
	scanf("%s", &Fakultas);
	
	printf("Nilai Praktikum:  ");
	scanf("%d", &Nilai_Praktikum);
	
	printf("Nilai UTS:  ");
	scanf("%d", &Nilai_UTS);
	
	printf("Nilai UAS:  ");
	scanf("%d", &Nilai_UAS);
	
	Nilai_Akhir = (0.3) * Nilai_Praktikum + (0.3) * Nilai_UTS + (0.4) * Nilai_UAS;
	
	printf("Nilai Akhir: %.2f", Nilai_Akhir);
	
	printf("\n---------------------------------\n");

	
	return 0;
}
