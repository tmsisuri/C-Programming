#include <stdio.h>
int main() {

    int num, sum,digit1, digit2;

    printf("Enter a two digit number : ");
    scanf("%d", &num);

    if(num<10 || num>99) {
        printf("Invalid number...");
    } else {
        digit1 = num/10;
        digit2 = num%10;

        sum = digit1 + digit2;

        printf("Sum of the two digits are : %d", sum);
    }

    return 0;
}
