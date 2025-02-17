#include <stdio.h>
int main() {

    int num1, num2, quotient, remainder;

    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    if(num2!=0) {
        quotient = num1/num2;
        remainder = num1%num2;
        printf("quotient is : %d\n", quotient);
        printf("remainder is : %d\n", remainder);
    } else {
        printf("Division is undefined");
    }


    return 0;
}
