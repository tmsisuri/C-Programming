#include <stdio.h>
int main() {

    int num, next;
    int first = 0;
    int second = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(int i=0; i<num; i++) {
        printf("%d\n", first);
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}
