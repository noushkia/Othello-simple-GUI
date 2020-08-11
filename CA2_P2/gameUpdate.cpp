char gameUpdate(char table[10][10], int *turn, int inputh, int inputv) {
	/*The function updates the main array of the game*/
	if (*turn == 1) {
		int check = 0;
		table[inputh][inputv] = 'w';
		if (table[inputh - 1][inputv - 1] == 'b') {
			/*This for is used to check if it is possible to change the colors or not
			if not it will pass this direction*/
			for (int h = inputh - 1, v = inputv - 1; table[h][v] == 'b'; h--, v--) {
				if ((table[h - 1][v - 1] != 'b') && (table[h - 1][v - 1] != 'w')) {
					check = 1;
					break;
				}
			}
			for (int h = inputh - 1, v = inputv - 1; (check == 0) && (table[h][v] == 'b'); h--, v--) {
				table[h][v] = 'w';
			}
			check = 0;
		}
		if (table[inputh - 1][inputv] == 'b') {
			for (int h = inputh - 1, v = inputv; table[h][v] == 'b'; h--, v) {
				if ((table[h - 1][v] != 'b') && (table[h - 1][v] != 'w')) {
					check++;
					break;
				}
			}
			for (int h = inputh - 1, v = inputv; (check == 0) && (table[h][v] == 'b'); h--) {
				table[h][v] = 'w';
			}
			check = 0;
		}
		if (table[inputh - 1][inputv + 1] == 'b') {
			for (int h = inputh - 1, v = inputv + 1; table[h][v] == 'b'; h--, v++) {
				if ((table[h - 1][v + 1] != 'b') && (table[h - 1][v + 1] != 'w')) {
					check++;
					break;
				}
			}
			for (int h = inputh - 1, v = inputv + 1; (check == 0) && (table[h][v] == 'b'); h--, v++) {
				table[h][v] = 'w';
			}
			check = 0;
		}
		if (table[inputh][inputv - 1] == 'b') {
			for (int h = inputh, v = inputv - 1; table[h][v] == 'b'; h, v--) {
				if ((table[h][v - 1] != 'b') && (table[h][v - 1] != 'w')) {
					check++;
					break;
				}
			}
			for (int h = inputh, v = inputv - 1; (check == 0) && (table[h][v] == 'b'); v--) {
				table[h][v] = 'w';
			}
			check = 0;
		}
		if (table[inputh][inputv + 1] == 'b') {
			for (int h = inputh, v = inputv + 1; table[h][v] == 'b'; v++) {
				if ((table[h][v + 1] != 'b') && (table[h][v + 1] != 'w')) {
					check++;
					break;
				}
			}
			for (int h = inputh, v = inputv + 1; (check == 0) && (table[h][v] == 'b'); v++) {
				table[h][v] = 'w';
			}
			check = 0;
		}
		if (table[inputh + 1][inputv - 1] == 'b') {
			for (int h = inputh + 1, v = inputv - 1; table[h][v] == 'b'; h++, v--) {
				if ((table[h + 1][v - 1] != 'b') && (table[h + 1][v - 1] != 'w')) {
					check++;
					break;
				}
			}
			for (int h = inputh + 1, v = inputv - 1; (check == 0) && (table[h][v] == 'b'); h++, v--) {
				table[h][v] = 'w';
			}
			check = 0;
		}
		if (table[inputh + 1][inputv] == 'b') {
			for (int h = inputh + 1, v = inputv; table[h][v] == 'b'; h++) {
				if ((table[h + 1][v] != 'b') && (table[h + 1][v] != 'w')) {
					check++;
					break;
				}
			}
			for (int h = inputh + 1, v = inputv; (check == 0) && (table[h][v] == 'b'); h++) {
				table[h][v] = 'w';
			}
			check = 0;
		}
		if (table[inputh + 1][inputv + 1] == 'b') {
			for (int h = inputh + 1, v = inputv + 1; table[h][v] == 'b'; h++, v++) {
				if ((table[h + 1][v + 1] != 'b') && (table[h + 1][v + 1] != 'w')) {
					check++;
					break;
				}
			}
			for (int h = inputh + 1, v = inputv + 1; (check == 0) && (table[h][v] == 'b'); h++, v++) {
				table[h][v] = 'w';
			}
			check = 0;
		}
	}
	else if (*turn == 2) {
		int check = 0;
		table[inputh][inputv] = 'b';
		if (table[inputh - 1][inputv - 1] == 'w') {
			for (int h = inputh - 1, v = inputv - 1; table[h][v] == 'w'; h--, v--) {
				if ((table[h - 1][v - 1] != 'w') && (table[h - 1][v - 1] != 'b')) {
					check++;
					break;
				}
			}
			for (int h = inputh - 1, v = inputv - 1; (check == 0) && (table[h][v] == 'w'); h--, v--) {
				table[h][v] = 'b';
			}
			check = 0;
		}
		if (table[inputh - 1][inputv] == 'w') {
			for (int h = inputh - 1, v = inputv; table[h][v] == 'w'; h--, v) {
				if ((table[h - 1][v] != 'w') && (table[h - 1][v] != 'b')) {
					check++;
					break;
				}
			}
			for (int h = inputh - 1, v = inputv; (check == 0) && (table[h][v] == 'w'); h--) {
				table[h][v] = 'b';
			}
			check = 0;
		}
		if (table[inputh - 1][inputv + 1] == 'w') {
			for (int h = inputh - 1, v = inputv + 1; table[h][v] == 'w'; h--, v++) {
				if ((table[h - 1][v + 1] != 'w') && (table[h - 1][v + 1] != 'b')) {
					check++;
					break;
				}
			}
			for (int h = inputh - 1, v = inputv + 1; (check == 0) && (table[h][v] == 'w'); h--, v++) {
				table[h][v] = 'b';
			}
			check = 0;
		}
		if (table[inputh][inputv - 1] == 'w') {
			for (int h = inputh, v = inputv - 1; table[h][v] != 'b'; h, v--) {
				if ((table[h][v - 1] != 'w') && (table[h][v - 1] != 'b')) {
					check++;
					break;
				}
				if (table[h][0] != 'b')
					continue;
			}
			for (int h = inputh, v = inputv - 1; (check == 0) && (table[h][v] == 'w'); v--) {
				table[h][v] = 'b';
			}
			check = 0;
		}
		if (table[inputh][inputv + 1] == 'w') {
			for (int h = inputh, v = inputv + 1; table[h][v] == 'w'; v++) {
				if ((table[h][v + 1] != 'w') && (table[h][v + 1] != 'b')) {
					check++;
					break;
				}
			}
			for (int h = inputh, v = inputv + 1; (check == 0) && (table[h][v] == 'w'); v++) {
				table[h][v] = 'b';
			}
			check = 0;
		}
		if (table[inputh + 1][inputv - 1] == 'w') {
			for (int h = inputh + 1, v = inputv - 1; table[h][v] == 'w'; h++, v--) {
				if ((table[h + 1][v - 1] != 'w') && (table[h + 1][v - 1] != 'b')) {
					check++;
					break;
				}
			}
			for (int h = inputh + 1, v = inputv - 1; (check == 0) && (table[h][v] == 'w'); h++, v--) {
				table[h][v] = 'b';
			}
			check = 0;
		}
		if (table[inputh + 1][inputv] == 'w') {
			for (int h = inputh + 1, v = inputv; table[h][v] == 'w'; h++) {
				if ((table[h + 1][v] != 'w') && (table[h + 1][v] != 'b')) {
					check++;
					break;
				}
			}
			for (int h = inputh + 1, v = inputv; (check == 0) && (table[h][v] == 'w'); h++) {
				table[h][v] = 'b';
			}
			check = 0;
		}
		if (table[inputh + 1][inputv + 1] == 'w') {
			for (int h = inputh + 1, v = inputv + 1; table[h][v] == 'w'; h++, v++) {
				if ((table[h + 1][v + 1] != 'w') && (table[h + 1][v + 1] != 'b')) {
					check++;
					break;
				}
			}
			for (int h = inputh + 1, v = inputv + 1; (check == 0) && (table[h][v] == 'w'); h++, v++) {
				table[h][v] = 'b';
			}
			check = 0;
		}
	}
	return 0;
}