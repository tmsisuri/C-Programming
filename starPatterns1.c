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

    printf("Pattern 9 \n");
    printf("\n");

    for(int i=1; i<=4; i++) {
        for(int j=1; j<=i; j++) {
            printf("  ");
        }
        for(int k=7; k>=(i*2)-1; k--) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    printf("Pattern 10 - method 1 \n");
    printf("\n");

    for(int i=1; i<=4; i++) {
        for(int k=5; k>=i; k--) {
            printf("  ");
        }
        for(int j=1; j<=(i*2)-3; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1; i<=4; i++) {
        for(int j=1; j<=i; j++) {
            printf("  ");
        }
        for(int k=7; k>=(i*2)-1; k--) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    printf("Pattern 10 - method 2 \n");
    printf("\n");

    int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf("  ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf("  ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("Pattern 11 \n");
    printf("\n");

    for(int i=1; i<=4; i++) {
        for(int j=1; j<=4; j++) {
            int k = i+j-1;
            if(k>4) {
                k = k-4;
            }
            printf("%d ",k);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
