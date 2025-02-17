#include <stdio.h>
int main() {
    int num = 1;
    int multi = 1;
    while(num<=10) {
        multi *=num;
        num++;
    }
    printf("multiplication is : %d", multi);
    return 0;
}
