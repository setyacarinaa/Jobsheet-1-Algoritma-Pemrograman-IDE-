//created by Setya Carina Rianti 23343054
//Rekursif
#include <stdio.h>

int sum(int n);

main(void) {

	int number, result;
	printf("Masukkan angka : ");
	scanf("%d", &number);

	result = sum (number);

	printf("sum = %d", result);
	
}

int sum(int num) {
	if (num!=0){
		return num + sum(num-1);
	}
	else{
		return num;
	}
}
