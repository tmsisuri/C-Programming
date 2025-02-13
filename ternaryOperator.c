#include <stdio.h>
int main() {
    int i =1;
    int j= 0;

    /*
    condition ? expression 1 : expression 2

    if the condition is true --> 
        it will exeute the expression 1 
    else --> 
        it will exeute the expression 2
    */

    j = i==1 ? 5 : 6;

    printf("%d\n", j);

    return 0;
}