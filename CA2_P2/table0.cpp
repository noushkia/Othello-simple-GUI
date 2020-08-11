#include "graphics.h"
void table0(char table[10][10]) {
	initwindow(515, 520, "Othello");
	for (int i = 0; i < 400; i += 50) {
		for (int j = 0; j < 400; j += 50) {
			rectangle(i, j, i + 50, j + 50);
			setfillstyle(SOLID_FILL, GREEN);
			floodfill(i + 25, j + 25, WHITE);
		}
	}
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			table[i][j] = '.';
		}
	}
	table[4][5] = 'b';
	table[5][4] = 'b';
	table[5][5] = 'w';
	table[4][4] = 'w';
}