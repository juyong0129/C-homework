#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int korean, english;
	int result;

	printf("�ѱ���, ���� ������ Ÿ�� �ӵ��� �Է��� �ּ��� >>> ");
	scanf("%d, %d", &korean, &english);

	result = (korean >= 180) && (english >= 150);

	printf("%d", result);
 
	return 0;
}