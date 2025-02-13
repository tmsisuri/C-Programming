#include <stdio.h>
#define x printf("Hello\n")
int main() {
    //printf without semicolon

    //first method
    x;

    //second method
    if(printf("Hello\n")) {

    }

    return 0;
}