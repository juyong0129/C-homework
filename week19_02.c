#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* in = fopen("file.txt", "r");
	int n, m;
	double d1, d2;

	if (in == NULL) {
		printf("파일없음\n");
		exit(1);
	}

	printf("정수를 두개 입력합니다\n");
	fscanf(in, "%d %d", &n, &m);
	printf("실수를 두개 입력합니다\n");
	fscanf(in, "%lf %lf", &d1, &d2);

	printf("\n입력 받은 수들을 모두 출력합니다.\n");
	printf("%d %d\n", n, m);
	printf("%lf %lf\n", d1, d2);
	printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("어디서 입력 받았을까요?\n");

	fclose(in);

	return 0;
}