/* 	nama tugas : Tugas Ke-5
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program : Membuat Program Kalkulator Sederhana
*/

#include <stdio.h>

int main() {
	char op;
    double angka1, angka2;

    printf("Masukkan operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Masukkan dua angka: ");
    scanf("%lf %lf", &angka1, &angka2);

    switch (op) {
    case '+':
    printf("Hasil: %.2lf\n", angka1 + angka2);
    break;

	case '-':
	printf("Hasil: %.2lf\n", angka1 - angka2);
	break;

	case '*':
	printf("Hasil: %.2lf\n", angka1 * angka2);
	break;

	case '/':
	if (angka2 != 0)
	printf("Hasil: %.2lf\n", angka1 / angka2);
	else
	printf("Tidak bisa melakukan pembagian oleh 0.\n");
	break;

	default:
	printf("Operator tidak valid.\n");
    }

    return 0;
}
