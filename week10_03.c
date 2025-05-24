#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("n의 값을 입력하세요 >>> ");
    scanf("%d", &n);



    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (n == 1) {
        printf("%d는 소수도 합성수도 아닙니다.", n);
    }
    else {
        if (isPrime) {
            printf("%d는 소수입니다.", n);
        }
        else {
            printf("%d는 소수가 아닙니다.", n);
        }
    }

    return 0;
}
