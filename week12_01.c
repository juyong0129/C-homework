#include <Stdio.h>

int ShowSum(int a, int b) {
	int sum = 0;

	if (a >= b) {
		for (int i = b; i <= a; i++) {
			printf("%d ", i);
			sum += i;
		}
	}
	else {
		for (int i = a; i <= b; i++) {
			printf("%d ", i);
			sum += i;
		}
	}
	printf(", 합: %d", sum);
}

int main() {
	ShowSum(3, 5);
}