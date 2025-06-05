#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>  

int sum(int n) {
	return n * (n + 1) / 2;
}

int main() {
	int n, totalSum = 0;
	printf("n을 입력하세요 >>> ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		totalSum += sum(i);
	}
	printf("총합: %d", totalSum);
	return 0;
}