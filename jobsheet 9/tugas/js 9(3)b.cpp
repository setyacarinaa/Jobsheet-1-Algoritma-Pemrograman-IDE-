/* 	nama tugas : Tugas Ke-9
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program  : A. Tanpa Asteris
*/
#include <stdio.h>

int main() {
    // Asumsikan Lesley awalnya memiliki nilai 57082
    int Lesley = 57082;

    // Layla diassign dengan alamat memori Lesley
    int *Layla = &Lesley;

    // Balmond diassign dengan nilai yang ada di alamat yang ditunjuk oleh Layla + 1
    int Balmond = *Layla + 1;

    // Jawaban Pertanyaan
    printf("a) Nilai Layla: %p\n", (void *)Layla); // %p untuk mencetak alamat memori
    printf("b) Nilai Balmond: %d\n", Balmond);

    return 0;
}

