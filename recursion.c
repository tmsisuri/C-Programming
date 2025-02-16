#include <stdio.h> 
int fact(int);
int main() {

    /* 
        recursion --> function calling itself
        abc()->abc()->abc()
        5! = 5*4*3*2*1=120
        5! = 5*4!
        4! = 4*3!
        3! = 3*2!
        2! = 2*1!
    */

    int factorial = fact(5);
    printf("factorial is : %d", factorial);
    return 0;
}

int fact(int n)
{
    /*
    int f =1;
    for(int i=1; i<=n; i++) {
        f = f*i;
    }
    return f;
    */

    if(n!=1) {
        return n*fact(n-1);
        return 1; //if n=1 it will return 1
    }

}
