#include <stdio.h>
int main() {

    float num1, num2, num3, avg;

    printf("Enter three numbers\n");

    printf("Enter first number : ");
    scanf("%f", &num1);

    printf("Enter second number : ");
    scanf("%f", &num2);

    printf("Enter third number : ");
    scanf("%f", &num3);

    avg = (num1+num2+num3)/3.0;

    printf("Average is : %.2f\n", avg);

    return 0;
}
