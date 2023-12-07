//created by Setya Carina Rianti 23343054
#include <stdio.h>

int main()
{
	char buff[255];
	char text[255];
	FILE *fptr;
	
	fptr = fopen("jobsheet 11.txt", "w");
	
	printf("Inputkan isi file: ");
	fgets(text, sizeof(text), stdin);
	
	fputs(text, fptr);
	
	printf("File berhasil ditulis\n");
	
	fclose(fptr);
	
	return 0;
	}
	