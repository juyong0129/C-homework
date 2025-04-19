#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	printf("정수를 입력해 주세요 >>> ");
	scanf("%d", &n);

	if ((12 % n == 0) && (30 % n == 0)) {
		printf("%d는 12와 30의 공약수 입니다.", n);
	}
	else {
		printf("%d는 12와 30의 공약수가 아닙니다.", n);
	}

	return 0;
}