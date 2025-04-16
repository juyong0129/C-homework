#include <stdio.h>

int main()
{
	int Height = 176, Weight = 67;
	int Standard_Height = 170, Standard_Weight = 95;

	int result = (Height >= Standard_Height) && (Weight <= Standard_Weight);

	printf("%d", result);

	return 0;
}