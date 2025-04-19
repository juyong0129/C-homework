#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, d, e;

	printf("정수 5개 입력 : ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	if ((a > b) && (a > c) && (a > d) && (a > e)) {
		printf("%d가 가장 큽니다.", a);
	}
	else if ((b > a) && (b > c) && (b > d) && (b > e)) {
		printf("%d가 가장 큽니다.", b);
	}
	else if ((c > a) && (c > b) && (c > d) && (c > e)) {
		printf("%d가 가장 큽니다.", c);
	}
	else if ((d > a) && (d > b) && (d > c) && (d > e)) {
		printf("%d가 가장 큽니다.", d);
	}
	else if ((e > a) && (e > b) && (e > c) && (e > d)) {
		printf("%d가 가장 큽니다.", e);
	}

	return 0;
}