#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("10원, 50원, 100원, 500원의 개수를 입력하세요 >>> ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if ((a < 0) || (b < 0) || (c < 0) || (d < 0)) {
        printf("동전의 개수는 음수가 될 수 없습니다.\n");
        return 0;
    }
    int sum = 10 * a + 50 * b + 100 * c + 500 * d;
    printf("10원: %d개, 50원: %d개, 100원: %d개, 500원: %d개, 총합: %d원", a, b, c, d, sum);

    return 0;
}
