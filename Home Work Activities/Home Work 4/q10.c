#include <stdio.h>

float averageMarks(float q1, float q2, float st1, float st2, float a);
void grade(float avg);

int main() {

    float q1, q2, st1, st2, a, avg;

    printf("Enter Quiz 1 marks : ");
    scanf("%f", &q1);
    printf("Enter Quiz 2 marks : ");
    scanf("%f", &q2);
    printf("Enter Spot Test 1 marks : ");
    scanf("%f", &st1);
    printf("Enter Spot Test 2 marks : ");
    scanf("%f", &st2);
    printf("Enter Assignment 1 marks : ");
    scanf("%f", &a);

    avg = averageMarks(q1,q2,st1,st2,a);
    printf("Average Marks: %.2f\n", avg);
    grade(avg);

    return 0;
}

float averageMarks(float q1, float q2, float st1, float st2, float a) {
    return (q1+q2+st1+st2+a)/5;
}

void grade(float avg) {
    if(avg>=75) {
        printf("your grade is A\n");
    } else if(avg>=65) {
        printf("your grade is B\n");
    } else if(avg>=55) {
        printf("your grade is C\n");
    } else if(avg>=45) {
        printf("your grade is D\n");
    } else if(avg>=35) {
        printf("your grade is E\n");
    } else {
        printf("your grade is F\n");
    }
}
