#include <stdio.h>

int check(int n) {
	int r_n = 0;
	int tmp = n;
	while (n > 0) {
		r_n = r_n * 10 + n % 10;
		n -= n % 10;
		n /= 10;
	}

	if (r_n == tmp) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	for (int i = 1000; i < 10000; i++) {
		if (check(i)) {
			printf("%d\n", i);
		}
	}
}