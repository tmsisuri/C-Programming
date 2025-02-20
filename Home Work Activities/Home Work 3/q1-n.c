#include <stdio.h>
int main() {

    int product = 1;

    for(int i=1; i<=15; i+=2) {
        product = product*i;
    }

    printf("product : %d", product);

    return 0;
}
