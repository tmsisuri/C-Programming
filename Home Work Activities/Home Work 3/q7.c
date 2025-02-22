#include <stdio.h>
int main() {
    int num;
    for(int i=1; i<=10; i++) {
        num = i*(i+1)/2;
        printf("%d\n", num);
    }
    return 0;
}
