#include <stdio.h>
int main() {

    int a = 6, b = 3, c = 4;
    
    if(a>b && a>c) {
        printf("%d is greater", a);
    } 
    else if (b>c) {
        printf("%d is greater", b);
    } 
    else {
        printf("%d is greater", c);
    }
    
    return 0;
} 