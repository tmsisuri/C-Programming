#include <stdio.h>
int main() {

    int num, digit1, digit2,revNum;

    printf("Enter two digit number : ");
    scanf("%d", &num);

    if(num<10 || num>99) {
        printf("invalid number...");
    } else {
        digit1 = num/10;
        digit2 = num%10;

        revNum = (digit2*10)+digit1;

        printf("Reverse of the number is : %d", revNum);
    }

    return 0;
}
