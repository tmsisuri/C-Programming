#include <stdio.h>
int main() {

    int num;
    int factorial = 1;

    printf("Enter a positive number : ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++) {
        factorial = factorial*i;
    }
    printf("factorial value is %d", factorial);

    return 0;
}
