#include <stdio.h>
int main() {
    int num, p;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++) {
        if(num%i==0) {
            p++;
        }
    }
    if(p==2)
        printf("Entered number is a prime number.");
    else
        printf("Entered number is not a prime number.");
    return 0;
}
