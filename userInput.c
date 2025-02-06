#include <stdio.h>
int main() {

    int i, j, k;
    printf("Enter two values : \n");
    scanf("%d", &i);
    scanf("%d", &j);

    k = i + j;
    printf("The addition of %d and %d is %d\n",i,j,k);

    return 0;
}
