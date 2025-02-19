#include <stdio.h>
int main() {

    int count;

    for(int i=1; i<=50; i+=2) {
        count++;
    }

    printf("Number of odd numbers are %d", count);

    return 0;
}
