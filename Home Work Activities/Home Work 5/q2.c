#include <stdio.h>

int sum(int num);

int main() {

    int n, result;

    printf("Enter a number : ");
    scanf("%d", &n);

    result = sum(n);
    printf("sum : %d", result);

    return 0;
}

int sum(int num) {               //sum(5) --> return 5 + sum(4) --> return 5 + 10 = 15
    if(num==0) {                 //sum(4) --> return 4 + sum(3) --> return 4 + 6  = 10
        return 0;                //sum(3) --> return 3 + sum(2) --> return 3 + 3  = 6
    } else {                     //sum(2) --> return 2 + sum(1) --> return 2 + 1  = 3
        return num + sum(num-1); //sum(1) --> return 1 + sum(0) --> return 1 + 0  = 1
    }                            //sum(0) --> return 0
}
