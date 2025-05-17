#include <stdio.h>

int main()
{
	float korean = 85.5, english = 87.5, math = 90.5, science = 91;
	float average = (korean + english + math + science) / 4;

	int result = average >= 88;

	printf("%d", result);

	return 0;
}