#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);

	if (n % 2 == 0) {
		printf("%d ��(��) ¦���Դϴ�.", n);
	}
	else
	{
		printf("%d ��(��) Ȧ���Դϴ�.", n);
	}

	return 0;
}