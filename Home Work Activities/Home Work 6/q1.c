#include <stdio.h>
int main() {
    int num[10];
    int sum, length;
    for(int i=0; i<10; i++) {
        printf("Enter numbers : ");
        scanf("%d", &num[i]);
        sum = sum+num[i];
    }
    printf("Sum : %d", sum);
    return 0;
}
