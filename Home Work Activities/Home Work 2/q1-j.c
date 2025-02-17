#include <stdio.h>
int main() {
    int count = 0;
    int num = 1;
    while(num<=50) {
        count++;
        num +=2;
    }
    printf("number of odd numbers from 1 to 50 is : %d\n", count);
    return 0;
}
