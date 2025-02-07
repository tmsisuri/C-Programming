#include <stdio.h>
int main() {

     int i, j, k;

    printf("Enter two values : ");
    scanf("%d %d", &i, &j);

    k = i + j;
    printf("The addition of %d and %d is %d\n",i,j,k);
    return 0;
}