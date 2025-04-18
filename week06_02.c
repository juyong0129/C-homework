#include <stdio.h>

int main() {
	int n = 4;
	n = n++ + n++ + ++n; //1번째: 4, 2번째: 5, 3번째: 7 따라서 답은 16 그런데 출력값은 17이 나옴... 게다가 보기에 없음...??
	printf("%d\n", n);

	return 0;
}