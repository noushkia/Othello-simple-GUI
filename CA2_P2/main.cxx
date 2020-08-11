#include "graphics.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>                     // Provides exit
#include <ctype.h>                      
#include "checkEndgame.h"
#include "tableDraw.h"
#include "gameUpdate.h"
#include "RCU.h"
#include "table0.h"
#include "winStats.h"
#define SIZE 10

void main(void) {
	char table[SIZE][SIZE];
	int checkEnd = 1;
	int turn = 2;
	while (true) {
		table0(table);/*Stage zero of our array*/
		tableDraw(table);
		while ((checkEndgame(table)) && (checkEnd)) {/*checks wether the game has ended or not*/
			RCU(table, &turn, &checkEnd);/*Receives,Checks,and Updates the game*/
			tableDraw(table);
			
		}
		winStats(table);/*Checks the win status in the end*/
		printf("Would you like to play again?\nYes:1\tNo:0\n");
		scanf_s("%d", &checkEnd);
		if (checkEnd == 0)
			break;
	}
	printf("Thank you for playing the game!");
	getchar();
}
