#include <stdio.h>

int main() {
	int x = 3;
	int y = 4;

	int z = x++ * --y + y++ * ++x; // x++ * --y = 9, y++ * ++x = 15 ���� ���� 24
	printf("%d\n", z);

	return 0;
}