#include <stdio.h>

int main() {
	int a = 5;

	printf("%d\n", a += a++); //��� ���: 10, a = 11
	printf("%d\n", a *= ++a); //��°�� : 144, a = 144
	printf("%d\n", a %= a--); //��°�� : 0, a = -1
	printf("%d\n", a); //��°�� : -1, a = -1
	
	return 0;
}