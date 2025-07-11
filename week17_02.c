#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findNum(int ar[]) {
	int numToFind, count = 0, i;
	printf("배열에서 찾을 정수를 입력하세요: ");
	scanf("%d", &numToFind);

	for (i = 0; i < 10; i++) {
		if (ar[i] == numToFind) {
			count++;
		}
	}

	return  count;
}

int main() {
	int ar[10] = { 3, 7, 2, 7, 9, 7, 1, 4, 7, 6 };
	printf("%d", findNum(ar));

	return 0;
}