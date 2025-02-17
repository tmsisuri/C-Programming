#include <stdio.h>
int main(){

    int num = 1;
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    while(num<=n) {
        printf("%d\n", num);
        num +=4;
    }

    return 0;
}
