#include <stdio.h>

void divide(int num1, int num2);

int main() {

    int a, b;

    printf("Enter number 1 : ");
    scanf("%d", &a);
    printf("Enter number 2 : ");
    scanf("%d", &b);

    divide(a,b);

    return 0;
}

void divide(int num1, int num2){
    printf("quotient is %d\n", num1/num2);
    printf("remainder is %d\n", num1%num2);
}

