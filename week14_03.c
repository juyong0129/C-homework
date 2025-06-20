#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char n;
	printf("알파벳을 입력하세요 >>> ");
	scanf("%c", &n);

	if (65 <= n && n <= 90) {
		printf("%c", n + 32);
	}
	else if (97 <= n && n <= 122) {
		printf("%c", n - 32);
	}
}