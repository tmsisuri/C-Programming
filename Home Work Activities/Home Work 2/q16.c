#include <stdio.h>
int main() {
    int oper;
    float num1, num2,result;

    printf("1 - Add\n");
    printf("2 - Subtract\n");
    printf("3 - Multiply\n");
    printf("4 - Divide\n");
    printf("Choose the operator : ");
    scanf("%d", &oper);

    printf("Enter first number : ");
    scanf("%f", &num1);
    printf("Enter second number : ");
    scanf("%f", &num2);

    switch(oper) {
    case 1 :
        result = num1 + num2;
        break;
    case 2 :
        result = num1 - num2;
        break;
    case 3 :
        result = num1 * num2;
        break;
    case 4 :
        result = num1 / num2;
        break;
    default :
        printf("Invalid operator");
    }
    printf("%.2f", result);

    return 0;
}
