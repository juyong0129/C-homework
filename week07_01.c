#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;

	printf("정수 2개 입력 : ");
	scanf("%d %d", &a, &b);

	if (a > b) {
		if (a % b == 0) {
			printf("%d는 %d로 나누어 떨어집니다.", a, b);
		}
		else {
			printf("%d는 %d로 나누어 떨어지지 않습니다.", a, b);
		}
	}
	else {
		if (b % a == 0) {
			printf("%d는 %d로 나누어 떨어집니다.", b, a);
		}
		else {
			printf("%d는 %d로 나누어 떨어지지 않습니다.", b, a);
		}
	}

	return 0;
}