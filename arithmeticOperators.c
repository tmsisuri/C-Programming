#include <stdio.h>
int main() {

    int i = 9;
    int j =3;
    int k;

    k = i+j;
    printf("The addition of %d and %d is %d\n",i,j,k);

    k = i-j;
    printf("The subtraction of %d and %d is %d\n",i,j,k);

    k = i*j;
    printf("The multiplication of %d and %d is %d\n",i,j,k);

    k = i/j;
    printf("The division of %d and %d is %d\n",i,j,k);

    return 0;
}