#include <stdio.h>
int main() {

    int result = 1;

    for(int i=1; i<=10; i++) {
        result *=i;
    }
    printf("result is : %d", result);
    return 0;
}
