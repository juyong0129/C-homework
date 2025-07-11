#include <stdio.h>

int main() {
    int weight = 21;
    int sizes[] = { 10, 5, 3, 1 };
    int count = 0;

    for (int i = 0; i < 4; i++) {
        count += weight / sizes[i];
        weight %= sizes[i];
    }

    printf("%d\n", count);
    return 0;
}