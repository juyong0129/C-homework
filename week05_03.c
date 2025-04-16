#include <stdio.h>

int main()
{
	int forwardLayUp = 8, forwardMiddle = 8;
	int layup = 10, middle = 10;

	int result = (layup >= forwardLayUp) && (middle >= forwardMiddle);

	printf("%d", result);

	return 0;
}