#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int n1 = rand() % 45 + 1, n2 = rand() % 45 + 1, n3 = rand() % 45 + 1, n4 = rand() % 45 + 1, n5 = rand() % 45 + 1, n6 = rand() % 45 + 1;
	
	while (n2 == n1)
	{
		n2 = rand() % 45 + 1;
	}

	while ((n3 == n1) || (n3 == n2))
	{
		n3 = rand() % 45 + 1;
	}

	while ((n4 == n1) || (n4 == n2) || (n4 == n3))
	{
		n4 = rand() % 45 + 1;
	}

	while ((n5 == n1) || (n5 == n2) || (n5 == n3) || (n5 == n4))
	{
		n5 = rand() % 45 + 1;
	}

	while ((n6 == n1) || (n6 == n2) || (n6 == n3) || (n6 == n4) || (n6 == n5))
	{
		n6 = rand() % 45 + 1;
	}

	printf("%d %d %d %d %d %d", n1, n2, n3, n4, n5, n6);

	return 0;
}