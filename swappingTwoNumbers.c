#include <stdio.h>
int main() {
    int a = 5;
    int b = 7;
    int temp;

    printf("a is : %d , b is : %d\n", a , b);

    temp = a; //temp = 5
    a = b; // a = 7
    b = temp; //b = 5

    printf("a is : %d , b is : %d\n", a , b);
    
    return 0;
}