#include <stdio.h>
int main() {
    char grade;
    printf("Enter your grade : ");
    scanf("%c", &grade);
    switch(grade) {
    case 'A':
        printf("Excellent");
        break;
    case 'B':
        printf("Well Done");
        break;
    case 'C':
        printf("Good");
        break;
    case 'D':
        printf("You Pass ");
        break;
    case 'F':
        printf("Better Try Again ");
        break;
    default :
        printf("Invalid Grade ");
    }
    return 0;
}
