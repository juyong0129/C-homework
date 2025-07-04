#include <stdio.h>
#include <string.h>

int main() {
    char S1[21];
    char S2[21];
    char S3[21];

    char* p1 = S1;
    char* p2 = S2;
    char* p3 = S3;

    scanf("%s", S1);
    scanf("%s", S2);
    scanf("%s", S3);

    if (((*(p1 + strlen(S1) - 1) == *p2) && (*(p2 + strlen(S2) - 1) == *p3)) && (*(p3 + strlen(S3) - 1) == *p1)) {
        printf("good");
    }
    else {
        printf("bad");
    }
}