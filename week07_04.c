#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	printf("������ �Է��� �ּ��� >>> ");
	scanf("%d", &n);

	if ((12 % n == 0) && (30 % n == 0)) {
		printf("%d�� 12�� 30�� ����� �Դϴ�.", n);
	}
	else {
		printf("%d�� 12�� 30�� ������� �ƴմϴ�.", n);
	}

	return 0;
}