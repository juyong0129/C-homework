#include <stdio.h>

int main() {
	int x = 4, y = 5;

	if ((x += y++) > 9 && --y > x++) { // ����
		x *= 2;
	}
	else {
		y -= 3; // ����� ���� x = 9, y = 2 
	}

	printf("%d %d\n", x, y); // ��°��: 9 2 ���� 4�� �̿��� �ϴµ� 9 3 �� ��µ�...?

	return 0;
}