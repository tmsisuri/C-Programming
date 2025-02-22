#include <stdio.h>
int main() {

    int num;
    float sum = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++) {
        sum = sum + 1.0/(i*i);
    }
    printf("Sum : %f", sum);

    return 0;
}
