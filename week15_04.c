#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void AddNum(int a, int b) {
	printf("%d\n", a + b);
}

void SubNum(int* pa, int* pb) {
	printf("%d\n", *pa - *pb);
}

void MulNum(int* pa, int* pb) {
	printf("%d\n", *pa * *pb);
}

void DivNum(int a, int b) {
	printf("%d\n", a / b);
}

int main() {
	int a, b;
	int* pa = &a, * pb = &b;

	printf("정수 입력 : ");
	scanf("%d %d", &a, pb);

	AddNum(a, b);
	SubNum(&a, &b);
	MulNum(pa, pb);
	DivNum(*pa, *pb);
}