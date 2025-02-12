#include <stdio.h>
int main() {
    /*

    bitwise And
    25 = 1 1 0 0 1
    15 = 0 1 1 1 1 
    ---------------
     9  = 0 1 0 0 1

    bitwise OR
    25 = 1 1 0 0 1
    15 = 0 1 1 1 1 
    ---------------
    31 = 1 1 1 1 1

    */

    int i = 25;
    int j = 15;

    int result1 = i & j;
    printf("%d\n", result1);

    int result2 = i | j;
    printf("%d\n", result2); 

    return 0;
}