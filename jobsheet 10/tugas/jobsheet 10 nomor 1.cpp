/* 	nama tugas : Tugas Ke-10
	nama programer : Setya Carina Rianti / 23343054
	Kasus Program : Membuat Program Tebak Bilangan
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum kondisiOutput {lebihBesar, lebihKecil, benar};

struct permainan {
	int nomorKomputer;
	int tebakanUser;
    int percobaan;
};

// Fungsi untuk menghasilkan nomor acak antara 1 dan maksimum
int nomorAcak(int maksimum) {
    return rand() % maksimum + 1;
}

// Fungsi untuk mengelola permainan tebak angka
void mainkanPermainan(struct permainan* game) {
    do {
        printf("Tebak nomor antara 1 dan 20: ");
        scanf("%d", &game->tebakanUser);
        game->percobaan++;

        if (game->tebakanUser < game->nomorKomputer) {
            printf("Nomor saya lebih besar!\n");
        } else if (game->tebakanUser > game->nomorKomputer) {
            printf("Nomor saya lebih kecil!\n");
        } else {
            printf("Selamat, Anda benar!\n");
            printf("Jumlah percobaan: %d\n", game->percobaan);
        }

    } while (game->tebakanUser != game->nomorKomputer);
}

int main() {
    srand(time(NULL));

    char mulaiLagi;
    struct permainan game;

    do {
        // Setel nilai awal permainan
        game.nomorKomputer = nomorAcak(20);
        game.tebakanUser = 0;
        game.percobaan = 0;

        // Mainkan permainan
        mainkanPermainan(&game);

        printf("Ingin bermain lagi? (y/n): ");
        scanf(" %c", &mulaiLagi);

    } while (mulaiLagi == 'y' || mulaiLagi == 'Y');

    return 0;
	}