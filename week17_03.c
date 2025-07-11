#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void findIndex(int ar[]) {
	int numToFind, i, index, count = 0;
	printf("위치를 찾을 정수를 입력하세요 : ");
	scanf("%d", &numToFind);

	for (i = 0; i < 10; i++) {
		if (ar[i] == numToFind) {
			count++;
			printf("%d ", i);
		}
	}
	if (count == 0) {
		printf("해당 정수를 찾을 수 없습니다.\n");
	}
}

int main() {
	int ar[10] = { 3, 7, 2, 7, 9, 7, 1, 4, 7, 6 };
	findIndex(ar);

	return 0;
}