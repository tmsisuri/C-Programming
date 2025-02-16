#include <stdio.h>
int main() {

    int values[] = {2,6,4,8,5,7};
    printf("%d\n", *values);
    printf("%d\n", *(values+1));

    printf("\n");

    for(int i=0; i<6; i++) {
        printf("%d\n", *(values+i));
    }

    printf("\n");

    //2D arrays
    int num[2][3] = {
        {2,6,4},
        {8,5,7}
    };

    printf("%d\n", *(num[0]+1));
    printf("%d\n", *(num[1]+1));
    printf("%d\n", **(num+1)); //  ** in this first * is for column and second * is for row
    printf("%d\n", *((*num+1)));

    return 0;
}