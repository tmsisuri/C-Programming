#include <stdio.h>
int main() {
    int sum = 0;
    int count = 0;
    int num = 3;
    while(num<99) {
        sum +=num;
        count++;
        num +=2;
    }
    printf("sum of odd integers : %d\n", sum);
    printf("count of odd integers : %d\n", count);
    return 0;
}
