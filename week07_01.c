#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;

	printf("���� 2�� �Է� : ");
	scanf("%d %d", &a, &b);

	if (a > b) {
		if (a % b == 0) {
			printf("%d�� %d�� ������ �������ϴ�.", a, b);
		}
		else {
			printf("%d�� %d�� ������ �������� �ʽ��ϴ�.", a, b);
		}
	}
	else {
		if (b % a == 0) {
			printf("%d�� %d�� ������ �������ϴ�.", b, a);
		}
		else {
			printf("%d�� %d�� ������ �������� �ʽ��ϴ�.", b, a);
		}
	}

	return 0;
}