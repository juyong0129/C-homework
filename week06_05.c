#include <stdio.h>

int main() {
	int x = 4, y = 5;

	if ((x += y++) > 9 && --y > x++) { // 거짓
		x *= 2;
	}
	else {
		y -= 3; // 실행됨 따라서 x = 9, y = 2 
	}

	printf("%d %d\n", x, y); // 출력결과: 9 2 따라서 4번 이여야 하는데 9 3 이 출력됨...?

	return 0;
}