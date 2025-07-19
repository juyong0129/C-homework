#include <stdio.h>

struct student {
    int point;
    int rank;
};

int main() {
    int total;
    scanf("%d", &total);

    struct student list[total];
    int n[total];


    for (int i = 0; i < total; i++) {
        scanf("%d", &list[i].point);
        n[i] = list[i].point;
        list[i].rank = 0;
    }


    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - 1 - i; j++) {
            if (n[j] < n[j + 1]) {
                int tmp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = tmp;
            }
        }
    }


    int rank = 1;
    for (int i = 0; i < total; i++) {

        if (i > 0 && n[i] != n[i - 1]) {
            rank = i + 1;
        }


        for (int j = 0; j < total; j++) {
            if (list[j].point == n[i] && list[j].rank == 0) {
                list[j].rank = rank;
                break;
            }
        }
    }


    for (int i = 0; i < total; i++) {
        printf("%d %d\n", list[i].point, list[i].rank);
    }

    return 0;
}
