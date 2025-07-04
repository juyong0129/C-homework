#include <stdio.h>

int add(int n1, int n2) {
    return n1 + n2;
}

int main() {
    int a = 5, b = 10;
    int* pa = &a, * pb = &b;
    printf("a+b = %d", add(*pa, *pb));
    return 0;
}