#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int i = 1;
    int j = 1;
    int n;

    printf("n을 입력하세요 >>> ");
    scanf("%d", &n);

    while (1) {
        printf("%d", j);

        if (j == i) {
            printf("\n");
            i++;
            j = 1;
        }
        else {
            j++;
        }

        if (i > n) break;
    }

    return 0;
}
