#include <stdio.h>

int main() {
	char str[] = "gnimargorp retupmoc si gnidoc";
	int length = 0;

	while (str[length] != '\0') {
		length += 1;
	}

	for (int i = length; i >= 0; i--) {
		printf("%c", str[i]);
	}
}