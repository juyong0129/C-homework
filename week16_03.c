#include <stdio.h>

int main() {
	int ar1[3][4] = { 0 };
	int ar2[][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int ar3[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
	int i, j;

	i = 0;
	j = 0;
	do {
		j = 0;
		do {
			printf("%d", ar3[i][j]);
			j++;
		} while (j < 4);
		printf("\n");
		i++;
	} while (i < 3);

	return 0;
}