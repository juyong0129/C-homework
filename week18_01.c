#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Person {
    char name[10];
    int age;
    double height;
};

int main() {
    struct Person list[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("이름을 입력하세요 : ");
        scanf("%s", list[i].name);

        printf("나이를 입력하세요 : ");
        scanf("%d", &list[i].age);

        printf("키를 입력하세요 : ");
        scanf("%lf", &list[i].height);
    }

    for (i = 0; i < 5; i++) {
        printf("이름 : %s\n", list[i].name);
        printf("나이 : %d\n", list[i].age);
        printf("키 : %lf\n", list[i].height);
    }

    return 0;
}
