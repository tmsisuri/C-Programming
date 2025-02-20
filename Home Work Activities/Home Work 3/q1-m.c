#include <stdio.h>
int main() {

    int sum;

    for(int i=2; i<=30; i+=2) {
        sum = sum + i;
    }

    printf("Sum : %d", sum);

    return 0;
}
