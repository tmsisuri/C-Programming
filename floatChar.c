#include <stdio.h>
int main() {
    /*
        int   --> 2 bytes
        float --> 4 bytes
        char  --> 1 byte
    */

    int i = 5;
    float f = 3.45;
    char c = 'd';
    double b = 3.27;

    printf("%d\n", i);
    printf("%.2f\n", f);
    printf("%c\n", c);
    printf("%.2lf\n", b);  //for double data type format specifier for printf and scanf is %lf 

    return 0;
}