#include <stdio.h>
int main() {
    /*
    left shift operator 
    16 = 1 0 0 0 0 
    x << 2 --> 
    64 = 1 0 0 0 0 0 0 

    right shift operator
    16 = 1 0 0 0 0  
    x >> 2 --> 
    4 = 1 0 0

    */
   
    int x = 16;

    int result1 = x << 2; //left shift operator
    printf("%d\n", result1);

    int result2 = x >> 2; //right shift operator
    printf("%d\n", result2);

    return 0;
}