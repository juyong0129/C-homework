#include <stdio.h>

int main() {
	int High_n = 0, n = 0, High_i = 0;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				n++;
			}
		}
		if (n > High_n) {
			High_i = i;
			High_n = n;
		}
		n = 0;
	}

	printf("약수가 가장 많은수: %d, %d의 약수의 개수: %d개 입니다.", High_i, High_i, High_n);
}