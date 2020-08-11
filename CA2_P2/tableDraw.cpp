#include "graphics.h"
void tableDraw(char table[10][10]) {
	/*the upcoming fors draw the circles within each square*/
	for (int i = 1; i < 9; i++) {
		for (int j = 1; j < 9; j++) {
			if (table[i][j] == 'w') {
				setcolor(WHITE);
				circle((50 * i) - 25, (50 * j) - 25, 23);
				setfillstyle(SOLID_FILL, WHITE);
				floodfill((50 * i) - 25, (50 * j) - 25, WHITE);
			}
			else if (table[i][j] == 'b') {
				setcolor(BLACK);
				circle((50 * i) - 25, (50 * j) - 25, 23);
				setfillstyle(SOLID_FILL, BLACK);
				floodfill((50 * i) - 25, (50 * j) - 25, BLACK);
			}
		}

	}
	int countB = 0, countW = 0;
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++) {
			if (table[i][j] == 'b')
				countB++;
			else if (table[i][j] == 'w')
				countW++;
		}
	}/*This nested loop counts the number of each players score*/
}