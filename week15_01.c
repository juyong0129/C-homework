#include <stdio.h>

int main() {
	int M[3] = { 1, 2, 3 };
	int* pm = M;

	for (int i = 0; i < 3; i++) {
		printf("M[%d] = %d\n", i, *(pm + i));
	}

	return 0;
}