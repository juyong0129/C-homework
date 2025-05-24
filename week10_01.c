#include <stdio.h>

int main() {
	int o = 0, e = 0;

	for (int i = 3; i <= 100; i += 3) {
		switch (i % 2)
		{
		case 0:
			e++;
			break;
		case 1: case 2:
			o++;
			break;
		}
	}

	printf("짝수: %d개, 홀수: %d개", e, o);

	return 0;
}