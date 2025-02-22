#include <stdio.h>
int main() {

    int num, Count;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++) {
        if(num%i==0) {
            Count++;
        }
    }
    
    if(Count==2)
        printf("Entered number is a prime number.");
    else
        printf("Entered number is not a prime number.");
    return 0;
}
