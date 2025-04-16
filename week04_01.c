#include <stdio.h>

int main()
{
	int b, c, e;

	b = 34;
	c = b / 7;
	e = b % 7;
	printf("%d개의 빈병은 초코파이 %d개와 바꾸고 빈병은 %d개 남습니다.", b, c, e);

	return 0;
}