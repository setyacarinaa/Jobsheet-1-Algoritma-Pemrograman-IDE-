//created by Setya Carina Rianti 23343054
#include <stdio.h>

main(void){
	int a, b;
	
	//pengisian nilai dengan operator =
	a = 5;
	b = 10;
	
	//pengisian sekaligus penambahan
	b += a; //sama seperti b = b + a
	printf("Hasil b += a adalah %d\n", b);
	
	//pengisian sekaligus pengurangan
	b -= a; //sama seperti b = b - a
	printf("Hasil b -= a adalah %d\n", b);
	
	//pengisian sekaligus perkalian
	b *= a; //sama seperti b = b * a
	printf("Hasil b *= a adalah %d\n", b);
	
	//pengisian sekaligus pembagian
	b /= a; //sama seperti b = b / a
	printf("Hasil b /= a adalah %d\n", b);
	
	//pengisian sekaligus sisa bagi
	b %= a; //sama seperti b = b % a
	printf("Hasil b %= a adalah %d\n", b);
	
}
