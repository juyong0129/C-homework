#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, d, e;

	printf("���� 5�� �Է� : ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	if ((a > b) && (a > c) && (a > d) && (a > e)) {
		printf("%d�� ���� Ů�ϴ�.", a);
	}
	else if ((b > a) && (b > c) && (b > d) && (b > e)) {
		printf("%d�� ���� Ů�ϴ�.", b);
	}
	else if ((c > a) && (c > b) && (c > d) && (c > e)) {
		printf("%d�� ���� Ů�ϴ�.", c);
	}
	else if ((d > a) && (d > b) && (d > c) && (d > e)) {
		printf("%d�� ���� Ů�ϴ�.", d);
	}
	else if ((e > a) && (e > b) && (e > c) && (e > d)) {
		printf("%d�� ���� Ů�ϴ�.", e);
	}

	return 0;
}