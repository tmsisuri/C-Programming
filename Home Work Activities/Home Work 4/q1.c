#include <stdio.h>

void smallest(float num1, float num2);
void largest(float num1, float num2);

int main() {

    float a, b;

    printf("Enter number 1 :");
    scanf("%f", &a);
    printf("Enter number 2 :");
    scanf("%f", &b);

    smallest(a,b);
    largest(a,b);

    return 0;
}

void smallest(float num1, float num2) {
    if(num1<num2) {
        printf("%.2f is smaller than %.2f\n", num1, num2);
    }
    else {
        printf("%.2f is smaller than %.2f\n", num2, num1);
    }
}

void largest(float num1, float num2) {
    if(num1>num2) {
        printf("%.2f is larger than %.2f\n", num1, num2);
    }
    else {
        printf("%.2f is larger than %.2f\n", num2, num1);
    }
}
