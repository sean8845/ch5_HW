#include<time.h>
#include<stdio.h>
#include<stdlib.h>

void shuffle(int wDeck[][13]) {
	int row, colume, card;
	for (card = 1; card <= 52; card++) {
		do {
			row = rand() % 4;
			colume = rand() % 13;
		} while (wDeck[row][colume] != 0);
		wDeck[row][colume] = card;
	}
}
void deal(const int wDeck[][13], const char* wFace[], const char* wSuit[]) {
	int card, row, colume;
	for (card = 1; card <= 52; card++) {
		for (row = 0; row <= 3; row++) {
			for (colume = 0; colume <= 12; colume++) {
				if (wDeck[row][colume] == card) {
					printf("%5s of %-8s%c", wFace[colume], wSuit[row], card % 2 == 0 ? '\n' : '\t');
				}
			}
		}
	}
}
int main(void) {
	const char *suit[4] = { "heart","diamonds","clubs","spades" };
	const char* face[13] = { "ace","deuce","three","four","five","six","seven",
							"eight","nine","ten","jack","queen","king" };
	int deck[4][13] = { 0 };
	srand(time(0));
	shuffle(deck);
	deal(deck, face, suit);
}