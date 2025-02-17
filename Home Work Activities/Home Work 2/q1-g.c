#include <stdio.h>
int main() {
    int sum = 0;
    int num = 1;
    while(num<=10) {
        sum += num;
        num++;
    }
    printf("summation is : %d", sum);
    return 0;
}
