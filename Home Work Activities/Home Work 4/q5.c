#include <stdio.h>

int cube(int num);

int main() {

    int f, c;

    printf("Enter a number : ");
    scanf("%d", &f);

    c = cube(f);

    printf("cube of %d is %d", f, c);

    return 0;
}

int cube(int num) {
    return num*num*num;
}

