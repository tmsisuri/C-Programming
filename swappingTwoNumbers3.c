#include <stdio.h>
int main() {
    int a = 5;
    int b = 6;

    printf("a is : %d , b is : %d\n", a , b);

    b = a + b - (a = b); // b = 5 + 6 - 6    (a = 6)

    printf("a is : %d , b is : %d\n", a , b);
    
    return 0;
}