#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char name[100];
    char hobby[1000];
    FILE* f;

    f = fopen("file.txt", "w");
    if (f == NULL) {
        printf("파일이 없습니다.\n");
        exit(1);
    }

    printf("이름을 입력하세요 : ");
    fgets(name, sizeof(name), stdin);

    printf("취미를 입력하세요 : ");
    fgets(hobby, sizeof(hobby), stdin);

    fputs(name, f);
    fputs(hobby, f);

    printf("[파일에 저장 완료]\n\n");

    fclose(f);

    f = fopen("file.txt", "w");
    if (f == NULL) {
        printf("파일이 없습니다.\n");
        exit(1);
    }

    fgets(name, sizeof(name), f);
    fgets(hobby, sizeof(hobby), f);

    printf("[파일에서 읽은 내용]\n");
    printf("이름 : %s", name);
    printf("취미 : %s", hobby);

    return 0;
}
