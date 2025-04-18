#include <stdio.h>

int main() {
	int a = 3, b = 4, result;

	result = a++ > 2 && ++b < 10 || b-- > 3; // 1번: 참, 2번: 참, 3번: 참 따라서 출력결과: 1

	printf("%d\n", result);

	return 0;
}