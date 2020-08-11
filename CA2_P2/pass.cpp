#include <stdio.h>
#include "inputCheck.h"
int pass(char table[10][10], int *turn) {/*Checks wether a player can choose any spot or not*/
	int counter = 0;
	printf("Available coordinates:\n");
	for (int i = 1; i < 9; i++) {
		for (int j = 1; j < 9; j++) {
			if (table[i][j] != '.')/*if the position is not filled then it cannot be chosen so we pass it*/
				continue;
			if (inputCheck(table, *turn, i, j)) {
				printf(" [%d][%d] ", i, j);
				counter++;
			}
		}
	}
	printf("\n");
	if (counter == 0) {
		printf("No possible position!\n");
		return 0;
	}
	else return 1;
}