#include <stdio.h>
int main() {
    int i = 7;
    int j = 5;

    printf("%d\n", i++); //post increment --> print the number then add 1
    printf("%d\n", ++j); //pre increment  --> add 1 then print the number

    printf("%d\n", i--); //post decrement --> print the number then subtract  1
    printf("%d\n", --j); //pre decrement  --> subtract 1 then print the number

    return 0;
}