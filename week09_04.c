#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, sum = 0, index = 0;

    printf("a, b를 입력하세요 >>> ");
    scanf("%d %d", &b, &a);
    int tmp = b;

    while (b >= a) {
        printf("%d ", b);
        index++;
        sum += b;
        b--;
    }
    printf("\n");
    index -= 2;
    sum = sum - tmp - a;

    printf("%d과 %d사이 수의 개수는: %d\n", a, tmp, index);
    printf("%d과 %d 사이 수들의 합은: %d", a, tmp, sum);

    return 0;
}
