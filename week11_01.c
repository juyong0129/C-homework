#include <stdio.h>

int main() {
	int i, j, isPrime = 1, sum = 1;

	for (i = 1; i < 100; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				isPrime = 0;
				break;
			}
		}
		if (!isPrime) {
			sum += i;
		}
		isPrime = 1;
	}

	printf("%d", sum);

	return 0;
}