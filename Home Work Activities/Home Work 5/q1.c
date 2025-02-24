#include <stdio.h>

int greatestCommonFactor(int num1, int num2);

int main() {
    int n1, n2;

    printf("Enter first positive number : ");
    scanf("%d", &n1);
    printf("Enter second positive number : ");
    scanf("%d", &n2);
    printf("Greatest Common Factor of %d and %d is : %d", n1, n2, greatestCommonFactor(n1,n2));

    return 0;
}

int  greatestCommonFactor(int num1, int num2) {       //gcf(48,18) --> return gcf(18,12) --> return 6
    if(num2!=0) {                                     //gcf(18,12) --> return gcf(12,6)  --> return 6
        return greatestCommonFactor(num2, num1%num2); //gcf(12,6)  --> return gcf(6,0)   --> return 6
    } else {                                          //gcf(6,0)   --> return 6
        return num1;
    }
}
