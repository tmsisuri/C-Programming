#include <stdio.h>
int main() {
    int count;
    for(int i=2; i<=50; i+=2) {
        count++;
    }
    printf("Number of even numbers are %d", count);
    return 0;
}
