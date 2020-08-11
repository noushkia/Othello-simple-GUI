int inputCheck(char table[10][10], int turn, int inputh, int inputv) {
	/*This function checks all 8 directions of each position
	If there was no possible changes in colors the position is illegal*/
	if (turn == 1) {
		int check = 0;
		if (table[inputh - 1][inputv - 1] == 'b') {
			for (int h = inputh - 1, v = inputv - 1; table[h][v] == 'b'; h--, v--) {
				if (table[h - 1][v - 1] == 'w') {
					check = 1;
					break;
				}
			}
		}
		if (table[inputh - 1][inputv] == 'b') {
			for (int h = inputh - 1, v = inputv; table[h][v] == 'b'; h--, v) {
				if (table[h - 1][v] == 'w') {
					check++;
					break;
				}
			}

		}
		if (table[inputh - 1][inputv + 1] == 'b') {
			for (int h = inputh - 1, v = inputv + 1; table[h][v] == 'b'; h--, v++) {
				if (table[h - 1][v + 1] == 'w') {
					check++;
					break;
				}
			}

		}
		if (table[inputh][inputv - 1] == 'b') {
			for (int h = inputh, v = inputv - 1; table[h][v] == 'b'; h, v--) {
				if (table[h][v - 1] == 'w') {
					check++;
					break;
				}
			}

		}
		if (table[inputh][inputv + 1] == 'b') {
			for (int h = inputh, v = inputv + 1; table[h][v] == 'b'; v++) {
				if (table[h][v + 1] == 'w') {
					check++;
					break;
				}
			}

		}
		if (table[inputh + 1][inputv - 1] == 'b') {
			for (int h = inputh + 1, v = inputv - 1; table[h][v] == 'b'; h++, v--) {
				if (table[h + 1][v - 1] == 'w') {
					check++;
					break;
				}
			}
		}
		if (table[inputh + 1][inputv] == 'b') {
			for (int h = inputh + 1, v = inputv; table[h][v] == 'b'; h++) {
				if (table[h + 1][v] == 'w') {
					check++;
					break;
				}
			}
		}
		if (table[inputh + 1][inputv + 1] == 'b') {
			for (int h = inputh + 1, v = inputv + 1; table[h][v] == 'b'; h++, v++) {
				if (table[h + 1][v + 1] == 'w') {
					check++;
					break;
				}
			}
		}
		return check;
	}
	else if (turn == 2) {
		int check = 0;
		if (table[inputh - 1][inputv - 1] == 'w') {
			for (int h = inputh - 1, v = inputv - 1; table[h][v] == 'w'; h--, v--) {
				if (table[h - 1][v - 1] == 'b') {
					check = 1;
					break;
				}
			}
		}
		if (table[inputh - 1][inputv] == 'w') {
			for (int h = inputh - 1, v = inputv; table[h][v] == 'w'; h--, v) {
				if (table[h - 1][v] == 'b') {
					check++;
					break;
				}
			}
		}
		if (table[inputh - 1][inputv + 1] == 'w') {
			for (int h = inputh - 1, v = inputv + 1; table[h][v] == 'w'; h--, v++) {
				if (table[h - 1][v + 1] == 'b') {
					check++;
					break;
				}
			}
		}
		if (table[inputh][inputv - 1] == 'w') {
			for (int h = inputh, v = inputv - 1; table[h][v] == 'w'; h, v--) {
				if (table[h][v - 1] == 'b') {
					check++;
					break;
				}
			}
		}
		if (table[inputh][inputv + 1] == 'w') {
			for (int h = inputh, v = inputv + 1; table[h][v] == 'w'; v++) {
				if (table[h][v + 1] == 'b') {
					check++;
					break;
				}
			}
		}
		if (table[inputh + 1][inputv - 1] == 'w') {
			for (int h = inputh + 1, v = inputv - 1; table[h][v] == 'w'; h++, v--) {
				if (table[h + 1][v - 1] == 'b') {
					check++;
					break;
				}
			}
		}
		if (table[inputh + 1][inputv] == 'w') {
			for (int h = inputh + 1, v = inputv; table[h][v] == 'w'; h++) {
				if (table[h + 1][v] == 'b') {
					check++;
					break;
				}
			}
		}
		if (table[inputh + 1][inputv + 1] == 'w') {
			for (int h = inputh + 1, v = inputv + 1; table[h][v] == 'w'; h++, v++) {
				if (table[h + 1][v + 1] == 'b') {
					check++;
					break;
				}
			}
		}
		return check;
	}
}