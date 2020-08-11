#include <stdio.h>

void winStats(char table[10][10]) {
	int countB = 0, countW = 0;
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++) {
			if (table[i][j] == 'b')
				countB++;
			else if (table[i][j] == 'w')
				countW++;
		}
	}
	if (countB > countW)
		printf("Black has won!\nBlack player score:%d\nWhite player score:%d\n", countB, countW);
	else if (countB < countW)
		printf("White has won!\nBlack player score:%d\nWhite player score:%d\n", countB, countW);
	else
		printf("A TIE!\nBlack player score:%d\nWhite player score:%d\n", countB, countW);
}