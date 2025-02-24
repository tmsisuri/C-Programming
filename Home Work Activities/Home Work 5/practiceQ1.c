#include <stdio.h>

int sum(int num);

int main() {

    int value, n = 3;

    value = sum(n);
    printf("%d", value);

    return 0;
}

int sum(int num) {
    if(num!=0) {
        return 1 + sum(num-1);    // sum(3) ---> return 1 + sum(2) --> return 1 + 3 = 4
    } else {                      // sum(2) ---> return 1 + sum(1) --> return 1 + 2 = 3
        return 1;                 // sum(1) ---> return 1 + sum(0) --> return 1 + 1 = 2
    }                             // sum(0) ---> return 1
}

