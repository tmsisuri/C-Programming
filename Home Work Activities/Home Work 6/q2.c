#include <stdio.h>
int main() {
    int num[] = {23,56,87,45,67,89};
    int length = sizeof(num)/sizeof(num[0]);
    int sum = 0;

    for(int i=0; i<length; i++) {
        sum = sum + num[i];
    }

    printf("average : %.2f", (float)sum/length);
    return 0;
}
