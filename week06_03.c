#include <stdio.h>

int main() {
	int a = 2, b = 3, c;

	c = a++ + b * a-- - --b; //1번: 2, 2번: 9, 3번: 2 따라서 a = 2, b = 2, c = 9 인데 2, 2, 4가 나옴...?
	printf("%d %d %d\n", a, b, c);

	return 0;
}