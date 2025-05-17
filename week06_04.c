#include <stdio.h>

int main() {
	int a = 5;

	printf("%d\n", a += a++); //출력 결과: 10, a = 11
	printf("%d\n", a *= ++a); //출력결과 : 144, a = 144
	printf("%d\n", a %= a--); //출력결과 : 0, a = -1
	printf("%d\n", a); //출력결과 : -1, a = -1
	
	return 0;
}