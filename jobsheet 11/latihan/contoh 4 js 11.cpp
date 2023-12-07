//created by Setya Carina Rianti 23343054
#include <stdio.h>

int main()
{
	char buff[255];
	FILE *fptr;
	
	if ((fptr = fopen("jobsheet 11.txt", "r")) == NULL){
		printf("Error: File tidak ditemukan!");
		
		return 1;
	}
	
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
	
	
	fclose(fptr);
	
	return 0;
}