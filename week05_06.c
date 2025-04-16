#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	printf("a, b, c 순으로 정수를 입력하세요: ");
	scanf("%d, %d, %d", &a, &b, &c);

	int result = (a * a + b * b) == (c * c);

	printf("%d", result);

	return 0;
}