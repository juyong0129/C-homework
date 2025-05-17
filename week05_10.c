#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned int)time(NULL));

    int rand1 = rand() % 3 + 1, rand2 = rand() % 3 + 1, rand3 = rand() % 3 + 1;

    while (rand1 == rand2) {
        rand2 = rand() % 3 + 1;
    }

    while ((rand1 == rand3) || (rand2 == rand3)) {
        rand3 = rand() % 3 + 1;
    }

    printf("%d%d%d\n", rand1, rand2, rand3);

    return 0;
}