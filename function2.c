#include <stdio.h>

int add(int, int);

int main() {

    int result = add(6,8);
    printf("result : %d", result);

    return 0;
}

int add(int i, int j)
{
    int k = i + j;
    return k;
}
