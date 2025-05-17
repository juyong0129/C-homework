#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("n을 입력하세요 >>> ");
    scanf("%d", &n);

    while (n > 0) {
        int digit = n % 10;
        printf("%d ", digit);
        sum += digit;
        n /= 10;
    }

    printf("합: %d\n", sum);

    return 0;
}
