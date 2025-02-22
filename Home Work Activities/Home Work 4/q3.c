#include <stdio.h>

void checkEvenOrOdd(int num);

int main() {

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    checkEvenOrOdd(n);

    return 0;
}
void checkEvenOrOdd(int num) {
    if(num!=0) {
        if(num%2==0) {
            printf("%d is a even number", num);
        } else {
            printf("%d is a odd number", num);
        }
    } else {
        printf("%d is equal to zero", num);
    }
}
