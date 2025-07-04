#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char n[101];
	char output[101];
	int a, b;
	char* pn = n;
	char* p_output = output;

	scanf("%s", n);
	scanf("%d %d", &a, &b);
	for (int i = a - 1; i < b; i++) {
		*(p_output + i) = *(pn + i);
	}
	*(p_output + b - a + 1) = '\0';

	printf("%s", output);

	return 0;
}