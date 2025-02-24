#include <stdio.h>

int digitOfNumber(int num);

int main() {

    int n, result;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n==0) {
        printf("Number of digits: 1\n");
        return 0;
    }

    result = digitOfNumber(n);
    printf("Number of digit of a number is %d", result);

    return 0;
}

int digitOfNumber(int num) {               //digitOfNumber(456) --> return 1 + digitOfNumber(45) --> return 1 + 2 = 3
    if(num==0) {                           //digitOfNumber(45)  --> return 1 + digitOfNumber(4)  --> return 1 + 1 = 2
        return 0;                          //digitOfNumber(4)   --> return 1 + digitOfNumber(0)  --> return 1 + 0 = 1
    } else {                               //digitOfNumber(0)   --> return 0
        return 1 + digitOfNumber(num/10);
    }
}

