#include <stdio.h>
int main() {

    float num, square;

    printf("Enter the number : ");
    scanf("%f", &num);

    if(num>=0) {
        square = num*num;
        printf("Square value of %.2f is : %.2f", num, square);
    } else {
        printf("Invalid number...");
    }
    return 0;
}
