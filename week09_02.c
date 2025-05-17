#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, a = 10, b = 1;
    printf("n을 입력해 주세요 >>> ");
    scanf("%d", &n);

    while (1) {
        if (n / a == 0) {
            printf("%d는 %d자리 수입니다.", n, b);
            break;
        }
        else {
            a *= 10;
            b += 1;
        }
    }

    return 0;
}