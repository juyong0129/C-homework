#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	printf("������ �Է��� �ּ��� >>> ");
	scanf("%d", &n);

	if ((n % 2 == 0) && (n % 3 == 0)) {
		printf("%d�� 2�� 3�� ����� �Դϴ�.", n);
	}
	else {
		printf("%d�� 2�� 3�� ������� �ƴմϴ�.", n);
	}

	return 0;
}