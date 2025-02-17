#include <stdio.h>
int main() {
    int product = 1;
    int num = 1;
    while(num<=15) {
        product *=num;
        num +=2;
    }
    printf("product of the odd integers : %d", product);
    return 0;
}
