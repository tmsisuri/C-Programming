#include <stdio.h>

int fun(int num);

int main() {

    int result = fun(4);
    printf("%d", result);

    return 0;
}

int fun(int num) {              //fun(4) ---> return 7 + fun(2) --> return 7 + 8 = 15
    if(num!=0) {                //fun(2) ---> return 7 + fun(0) --> return 7 + 1 = 8
        return 7 + fun(num-2);  //fun(0) ---> return 1
    } else {
        return 1;
    }
}

