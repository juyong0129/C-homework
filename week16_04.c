
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int ar[6][6] = { 0 };
	int i, j;
	int sum = 0, max = 0;

	srand(time(NULL));

	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			ar[i][j] = rand() % 99 + 1;
			sum += ar[i][j];

			if (ar[i][j] >= max) {
				max = ar[i][j];
			}
		}
	}

	i = 0;
	while (i < 6) {
		j = 0;
		while (j < 6) {
			printf("%3d", ar[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	printf("\n합: %d\n", sum);
	printf("\n가장 큰 수: %d\n", max);

	return 0;
}