#include <stdio.h>

int sum(int num);

int main() {

    int result = sum(10);       // sum(10) ---> return 1 + sum(9) --> return 1 + 9 = 10
    printf("%d", result);       // sum(9)  ---> return 1 + sum(8) --> return 1 + 8 = 9
                                // sum(8)  ---> return 1 + sum(7) --> return 1 + 7 = 8
    return 0;                   // sum(7)  ---> return 1 + sum(6) --> return 1 + 6 = 7
}                               // sum(6)  ---> return 1 + sum(5) --> return 1 + 5 = 6
                                // sum(5)  ---> return 1 + sum(4) --> return 1 + 4 = 5
int sum(int num) {              // sum(4)  ---> return 1 + sum(3) --> return 1 + 3 = 4
    if(num>0) {                 // sum(3)  ---> return 1 + sum(2) --> return 1 + 2 = 3
        return 1 + sum(num-1);  // sum(2)  ---> return 1 + sum(1) --> return 1 + 1 = 2
    } else {                    // sum(1)  ---> return 1 + sum(0) --> return 1 + 0 = 1
        return 0;               // sum(0)  ---> return 0
    }
}

