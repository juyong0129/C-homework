#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int output[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            output[i][j] = i + 1 + n * j;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", output[i][j]);
        }
        printf("\n");
    }
}