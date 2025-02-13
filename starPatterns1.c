#include <stdio.h>
int main() {

    printf("Pattern 1 \n");
    printf("\n");

    for(int i=1; i<=4; i++) {
        for(int j=1; j<=4; j++) {
            if(i==1 || i==4 || j==1 || j==4) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");


    printf("Pattern 2 \n");
    printf("\n");

    for(int i=1; i<=6; i++) {
        for(int j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");


    printf("Pattern 3 \n");
    printf("\n");

    for(int i=1; i<=6; i++) {
        for(int j=6; j>=i; j--) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    printf("Pattern 4 \n");
    printf("\n");

    for(int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    printf("Pattern 5 \n");
    printf("\n");

    for(int i=5; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    printf("Pattern 6 \n");
    printf("\n");

    for(int i=1; i<=5; i++) {
        for(int j=5; j>=i; j--) {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    printf("Pattern 7 \n");
    printf("\n");

    for(int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d ", j);
        }
        for(int k=4; k>=i; k--) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    printf("Pattern 8 \n");
    printf("\n");

    for(int block=1; block<=3; block++) {
        for(int i=1; i<=4; i++) {
            for(int k=4; k>=i; k--) {
                printf("  ");
            }
            for(int j=1; j<=(i*2)-1; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
