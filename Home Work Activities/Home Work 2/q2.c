#include <stdio.h>
int main() {
    int num = 2;
    int sum = 0;
    while(num<=30) {
        sum +=num;
        num+=2;
    }
    printf("sum of the even integers : %d", sum);
    return 0;
}
