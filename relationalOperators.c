#include <stdio.h>
int main() {

    int i = 5;
    int j = 7;
    //true -> 1 and false -> 0

    printf("%d\n", i<j);  // true -> 1
    printf("%d\n", i>j);  // false -> 0
    printf("%d\n", i<=j); // true -> 1
    printf("%d\n", i>=j); // false -> 0
    printf("%d\n", i==j); // false -> 0
    printf("%d\n", i!=j); // true -> 1

    return 0;
}