#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, sum = 0, index = 0;
	printf("a, b를 입력해 주세요 >>> ");
	scanf("%d %d", &a, &b);

	for (int i = b; i <= a; i += b) {
		printf("%d\n", i);
		sum += b;
		index++;
	}

	printf("1~%d %d의 배수: %d개, 합: %d", a, b, index, sum);

	return 0;
}