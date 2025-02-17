#include <stdio.h>
int main() {

    int marks;

    printf("Enter your marks : ");
    scanf("%d", &marks);

    if(marks<=100 && marks>=90) {
        printf("A\n");
    } else if(marks<90 && marks>=80) {
        printf("B\n");
    } else if(marks<80 && marks>=70) {
        printf("C\n");
    } else {
        printf("D\n");
    }

    return 0;
}
