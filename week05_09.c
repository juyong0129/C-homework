#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int randomValue = (rand() % 9 + 1) * 10 + rand() % 10;
	printf("%d\n", randomValue);

	return 0;
}