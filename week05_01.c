#include <stdio.h>

int main()
{
	int OldA = 250, OldB = 200;
	int NewA = OldA, NewB = OldB + 100;

	int result = (NewB == NewA + 60);

	printf("%d", result);

	return 0;
}