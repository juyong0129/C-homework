#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int korean, english;
	int result;

	printf("한국어, 영어 순서로 타자 속도를 입력해 주세요 >>> ");
	scanf("%d, %d", &korean, &english);

	result = (korean >= 180) && (english >= 150);

	printf("%d", result);
 
	return 0;
}