//created by Setya Carina Rianti 23343054

#include <stdio.h>

void add_score(int *score){
	*score = *score + 5;
	printf("score diubah ke : %d\n", *score);
}

int main(){
	int score = 0;
	
	printf("score sebelum diubah : %d\n", score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	printf("score setelah diubah : %d\n", score);
	
}
