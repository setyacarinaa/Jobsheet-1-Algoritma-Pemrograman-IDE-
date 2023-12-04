/* 	nama tugas : Tugas Ke-3
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program : Membuat Program Nilai Tukar Rupiah
*/

# include <stdio.h>
	

 int main (){
	
	const double ntukar = 14.25;
	double rupiah;
	
	printf("masukkakn nominal rupiah : ");
	scanf("%lf", &rupiah);
	
	double dollar = rupiah / ntukar ;
	
	printf ("hasil %.2lf adalah $ %.2lf", rupiah, dollar);
	
	return 0;
	
}


    

