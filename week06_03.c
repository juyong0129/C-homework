#include <stdio.h>

int main() {
	int a = 2, b = 3, c;

	c = a++ + b * a-- - --b; //1��: 2, 2��: 9, 3��: 2 ���� a = 2, b = 2, c = 9 �ε� 2, 2, 4�� ����...?
	printf("%d %d %d\n", a, b, c);

	return 0;
}