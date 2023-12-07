//created by Setya Carina Rianti 23343054
#include <stdio.h>

enum hari{senin, selasa, rabu, kamis, jumat, sabtu};

int main (){
	enum hari sekarang;
	sekarang = jumat;
	
	printf("sekarang hari ke-%d", sekarang + 1);
	
	return 0;
}