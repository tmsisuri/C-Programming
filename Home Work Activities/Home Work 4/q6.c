#include <stdio.h>

void eligibility(float attendance, float marks);

int main() {

    float a, m;

    printf("Enter your attendance : ");
    scanf("%f", &a);
    printf("Enter your marks : ");
    scanf("%f", &m);

    eligibility(a,m);

    return 0;
}

void eligibility(float attendance, float marks) {
    if(attendance>=80 && marks>=16) {
        printf("You are eligible\n");
    } else {
        printf("You are not eligible");
    }
}

