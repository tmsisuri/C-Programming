#include <stdio.h>
int main() {
    int a = 5; // 2 bites --> 1 0 1
    int b = 6; // 2 bites --> 1 1 0

    printf("a is : %d , b is : %d\n", a , b);

    /*
    XOR --> ( ^ )
    T T --> F        1 1 --> 0
    T F --> T        1 0 --> 1
    F T --> T        0 1 --> 1
    F F --> F        0 0 --> 0
    */

    /*
    a = a + b;  5+6 = 11
    b = a - b;  11-6 = 5
    a = a - b;  11-5 = 6
    */

    //with XOR
    a = a^b; // 1 0 1 ^ 1 1 0 ---> 0 1 1
    b = a^b; // 0 1 1 ^ 1 1 0 ---> 1 0 1  --> b = 5
    a = a^b; // 0 1 1 ^ 1 0 1 ---> 1 1 0  --> a = 6

    printf("a is : %d , b is : %d\n", a , b);

    return 0;
}