#include <stdio.h>

int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
int division(int num1, int num2);

int main() {

    int oper, n1, n2, result;

    printf("1-addition\n");
    printf("2-subtraction\n");
    printf("3-multiplication\n");
    printf("4-division\n");
    printf("Enter the operator : ");
    scanf("%d", &oper);

    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    switch(oper) {
    case 1 :
        result = addition(n1, n2);
        break;
    case 2 :
        result = subtraction(n1, n2);
        break;
    case 3 :
        result = multiplication(n1, n2);
        break;
    case 4 :
        result = division(n1, n2);
        break;
    default :
        printf("Invalid operator");
    }

    printf("result %d", result);

    return 0;
}

int addition(int num1, int num2){
    return num1 + num2;
}
int subtraction(int num1, int num2) {
    return num1 - num2;
}
int multiplication(int num1, int num2) {
    return num1 * num2;
}
int division(int num1, int num2) {
    if(num1!=0) {
        return num1 / num2;
    } else {
        printf("can't devid by zero");
    }
}

