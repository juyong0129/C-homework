#include <stdio.h>

int main() {
	int a = 3, b = 4, result;

	result = a++ > 2 && ++b < 10 || b-- > 3; // 1��: ��, 2��: ��, 3��: �� ���� ��°��: 1

	printf("%d\n", result);

	return 0;
}