int checkEndgame(char table[10][10]) {
	int count = 0;
	/*Checks if all houses are full*/
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++) {
			if (table[i][j] == '.')
				count++;
		}
	}
	if (count == 0)
		return 0;
}