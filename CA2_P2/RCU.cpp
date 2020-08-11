#include <stdio.h>
#include "pass.h"
#include "graphics.h"
#include "tableDraw.h"
#include "inputCheck.h"
#include "gameUpdate.h"

char RCU(char table[10][10], int* turn, int * checkEnd) {
	while (*checkEnd) {
		char c_input = '0';
		int  inputh, input = 53;/*inputh:horizontal coordinates*/
		int  inputv;/*inputv:vertical coordinates*/
		int checkP = 0;/*Is used to see wether anyone can choose a spot or not*/
		if ((*turn == 1)) {
			if (pass(table, turn))
				printf("Player Whites' turn:\n");
			else {
				*turn = 2;/*Passes the turn*/
				checkP++;
				continue;
			}
		}
		else if ((*turn == 2)) {
			if (pass(table, turn))
				printf("Player Blacks' turn:\n");
			else {
				*turn = 1;
				checkP++;
				continue;
			}
		}
		else if (checkP == 2) {/*In this case no one can choose any spot anymore*/
			*checkEnd = 0;/*Ends the game*/
			printf("No possible moves!\n");
			break;
		}
		/*receives wasd input:*/
		setcolor(BLUE);/*Draws the square used to indicate the position of our choice*/
		rectangle((50 * (input % 10)) - 35, (50 * (input / 10)) - 35, 50 * (input % 10) - 15, 50 * (input / 10) - 15);
		setfillstyle(1, BLUE);
		floodfill((50 * (input % 10)) - 30, (50 * (input / 10)) - 30, BLUE);
		do {

			c_input = getchar();
			setcolor(GREEN);
			rectangle(50 * (input % 10) - 35, 50 * (input / 10) - 35, 50 * (input % 10) - 15, 50 * (input / 10) - 15);
			setfillstyle(1, GREEN);
			floodfill((50 * (input % 10)) - 30, (50 * (input / 10)) - 30, GREEN);
			tableDraw(table);
			if (c_input == 'w') {
				if (input / 10 > 1)
					input -= 10;
				else printf("Can't move up!\n");
			}
			else if (c_input == 's') {
				if (input / 10 < 8)
					input += 10;
				else printf("Can't move down!\n");
			}
			else if (c_input == 'a') {
				if (input % 10 > 1)
					input -= 1;
				else printf("Can't move left!\n");
			}
			else if (c_input == 'd') {
				if (input % 10 < 8)
					input += 1;
				else printf("Can't move right!\n");
			}
			/*updates the square position:*/
			setcolor(BLUE);
			rectangle((50 * (input % 10)) - 35, (50 * (input / 10)) - 35, 50 * (input % 10) - 15, 50 * (input / 10) - 15);
			setfillstyle(1, BLUE);
			floodfill((50 * (input % 10)) - 30, (50 * (input / 10)) - 30, BLUE);
		} while (c_input != ' ');
		//Draws the final table after each input:
		setcolor(GREEN);
		rectangle(50 * (input % 10) - 35, 50 * (input / 10) - 35, 50 * (input % 10) - 15, 50 * (input / 10) - 15);
		setfillstyle(1, GREEN);
		floodfill((50 * (input % 10)) - 30, (50 * (input / 10)) - 30, GREEN);
		tableDraw(table);
		printf("\n");
		inputh = (input % 10);
		inputv = (input / 10);
		if ((inputh>8) || (inputh<1) || (inputv>8) || (inputv<1))/*checks if the inputs are within the
																 correct interval*/ {
			printf("Wrong input! Please try again and enter the coordinates correctly!\n");
			continue;
		}
		if (table[inputh][inputv] != '.') {
			printf("Wrong input! Already occupied!\n");
			continue;
		}
		if (inputCheck(table, *turn, inputh, inputv)) {
			gameUpdate(table, turn, inputh, inputv);
			if (*turn == 1)
				*turn = 2;
			else *turn = 1;
		}
		else/*If the coordinates are illegal*/
			printf("Wrong input! Please enter correct coordinates!\n");
		break;
	}
	return 0;
}