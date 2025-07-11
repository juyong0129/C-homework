#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inputdata(int* p) {
	for (int i = 0; i < 10; i++) {
		*(p + i) = rand() % 99 + 1;
	}
}

void printarray(int ar[]) {
	for (int i = 0; i < 10; i++) {
		printf("%d ", ar[i]);
	}
}

int getmax(int* ar) {
	int max = 0;

	for (int i = 0; i < 10; i++) {
		if (*(ar + i) > max) {
			max = *(ar + i);
		}
	}

	return max;
}

int getmin(int* ar) {
	int min = 100;

	for (int i = 0; i < 10; i++) {
		if (*(ar + i) < min) {
			min = *(ar + i);
		}
	}

	return min;
}

int main() {
	int ar[10] = { 0 };
	int max, min;
	srand(time(NULL));
	inputdata(ar);
	printarray(ar);
	printf("\n");
	max = getmax(ar);
	min = getmin(ar);
	printf("max: %d, min: %d\n", max, min);

	return 0;
}