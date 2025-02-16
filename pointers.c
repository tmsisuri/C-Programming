#include <stdio.h>
int main() {

    int i =5;
    int *p = &i;

    printf("%d\n",i); // print the value of i
    printf("%d\n",&i); // print the memory address of i
    printf("%d\n",p); // print the memory address of i
    printf("%d\n",*p); // print the value of i

    return 0;
}