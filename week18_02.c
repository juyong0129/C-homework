#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	double height;
};

int main() {
	struct Person m1;
	struct Person m2 = { "허난설헌", 13, 159.9 };
	struct Person m3;
	struct Person m4 = { "손주용", 13, 142 };

	printf("이름 : ");
	scanf("%s", &m3.name);
	printf("나이 : ");
	scanf("%d", &m3.age);
	printf("키 : ");
	scanf("%lf", &m3.height);

	strcpy(m1.name, "허균");
	m1.age = 19;
	m1.height = 168.34;

	printf("이름 : %s\n", m1.name);
	printf("나이 : %d\n", m1.age);
	printf("키 : %lf\n", m1.height);
	printf("이름 : %s\n", m2.name);
	printf("나이 : %d\n", m2.age);
	printf("키 : %lf\n", m2.height);
	printf("이름 : %s\n", m3.name);
	printf("나이 : %d\n", m3.age);
	printf("키 : %lf\n", m3.height);
	printf("이름 : %s\n", m4.name);
	printf("나이 : %d\n", m4.age);
	printf("키 : %lf\n", m4.height);

	return 0;
}