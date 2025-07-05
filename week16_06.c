#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[100][100];
    int num = 1;

    for (int i = n - 1; i >= 0; i--) {
        if ((n - 1 - i) % 2 == 1) {

            for (int j = 0; j < m; j++) {
                arr[i][j] = num++;
            }
        }
        else {

            for (int j = m - 1; j >= 0; j--) {
                arr[i][j] = num++;
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}