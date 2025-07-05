#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int output[n][n];
    int i, j, tmp = 1;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            output[i][j] = tmp;
            tmp++;
        }
        j = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", output[i][j]);
        }
        printf("\n");
    }

    return 0;
}