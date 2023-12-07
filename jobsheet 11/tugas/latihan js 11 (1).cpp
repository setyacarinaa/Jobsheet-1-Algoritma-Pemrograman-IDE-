/* 	nama tugas : Tugas Ke-11
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program  : Data Mahasiswa (file handling)
*/
#include <stdio.h>

int main()
{
	char buff[255];
	char text[255];
	FILE *fptr;
	fptr = fopen("datamahasiswa.txt", "w");
	
	for(int i = 1; i <= 2; i++){
	printf("\nMasukan data mahasiswa ke-%d\n", i);
	
	char nama [100], NIM[20], Jurusan[30], Prodi [50];
	printf("Nama: ");
	fgets(nama, sizeof(nama), stdin);
	printf ("NIM: ");
	scanf ("%s", NIM);
	getchar ();
	printf("Jurusan: ");
	fgets(Jurusan, sizeof(Jurusan), stdin);
	printf("Program Studi: ");
	fgets(Prodi, sizeof(Prodi), stdin);
	fprintf(fptr, "Data Mahasiswa ke-%d: \n", i);
	fprintf(fptr, "Nama: %s", nama);
	fprintf(fptr, "NIM: %s\n", NIM);
	fprintf(fptr, "Jurusan: %s", Jurusan);
	fprintf(fptr, "Program Studi: %s\n\n", Prodi);
}
	printf ("Data Mahasiswa Berhasil disimpan\n");
	
	fclose(fptr);

	return 0; 
	}