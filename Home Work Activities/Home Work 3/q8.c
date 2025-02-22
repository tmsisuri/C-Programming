#include <stdio.h>
int main() {

    printf("pattern a");
    printf("\n");
    for(int i=1; i<=6; i++) {
        for(int j=6; j>=i; j--) {
            printf("*");
        }
        printf("\n");
    }

    for(int i=2; i<=6; i++) {
        for(int k=1; k<=i; k++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    printf("pattern b\n");
    printf("\n");
    for(int block=1; block<=3; block++) {
        for(int i=1; i<=3; i++) {
            for(int j=3; j>=i; j--) {
                printf(" ");
            }
            for(int k=1; k<=(i*2)-1; k++) {
                printf("*");
                }
                printf("\n");
        }
    }
    printf("\n");

    printf("pattern c\n");
    printf("\n");
    for(int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d", j);
        }
        for(int k=4; k>=i; k--) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    printf("pattern d\n");
    printf("\n");
    for(int i=1; i<=6; i++) {
        for(int j=1; j<i; j++) {
            printf(" ");
        }
        for(int k=6; k>=i; k--) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    printf("pattern e\n");
    printf("\n");
    for(int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    for(int i=4; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");

    }

    return 0;
}
