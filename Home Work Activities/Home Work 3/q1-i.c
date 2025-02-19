#include <stdio.h>
int main() {

    int result;

    for(int i=1; i<=10; i++) {
        result +=i;
    }
    printf("Summation of all the numbers from 1 to 10 is %d", result);
    return 0;
}
