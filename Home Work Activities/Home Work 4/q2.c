#include <stdio.h>

void checkNum(float num);

int main() {

    float n;

    printf("Enter a number : ");
    scanf("%f", &n);

    checkNum(n);

    return 0;
}
void checkNum(float num) {
    if(num>0) {
        printf("%.2f is a positive number\n", num);
    } else if(num<0) {
        printf("%.2f is a negative number\n", num);
    } else {
        printf("%.2f is equal to zero\n", num);
    }
}


