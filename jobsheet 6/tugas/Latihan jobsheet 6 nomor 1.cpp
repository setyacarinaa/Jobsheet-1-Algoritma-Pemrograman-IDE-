/* 	nama tugas : Tugas Ke-6
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program : Membuat Program Deret BIlangan Genap dan Ganjil
*/

#include <stdio.h>
 
int main(){
  int i;
 
  printf("Deret bilangan genap: ");
  for (i=0 ;i<=50 ;i+=2) {
    printf("%d ",i);
  }
 
  printf("\n");
 
  printf("Deret bilangan ganjil: ");
  for (i=1 ;i<=50 ;i+=2){
    printf("%d ", i);
  }
 
  printf("\n");
  
  return 0;
}

