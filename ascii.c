#include <stdio.h>
int main() {
    for(int i=0; i<=127; i++) {
        printf("%d : %c\t", i, i);
    }
    printf("\n");
    printf("\n");

    printf("Ascii value for english capital letters : \n");
    for(int i=65; i<=90; i++) {
        printf("%d : %c\t\t", i, i);
    }
    printf("\n");
    printf("\n");

    printf("Ascii value for english simple letters : \n");
    for(int i=97; i<=122; i++) {
        printf("%d : %c\t\t", i, i);
    }
    return 0;
}