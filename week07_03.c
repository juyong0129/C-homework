#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	printf("정수를 입력해 주세요 >>> ");
	scanf("%d", &n);

	if ((n % 2 == 0) && (n % 3 == 0)) {
		printf("%d는 2와 3의 공배수 입니다.", n);
	}
	else {
		printf("%d는 2와 3의 공배수가 아닙니다.", n);
	}

	return 0;
}