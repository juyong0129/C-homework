#include <stdio.h>

int main() {
	int High_n = 0, n = 0, High_i = 0;
	for (int i = 1; i <= 100; i++) {
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

	printf("%d", High_i);
}