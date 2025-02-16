#include <stdio.h>
int main() {

    float meters, kilometers;

    printf("Enter the length in kilometers : ");
    scanf("%f", &kilometers);

    meters = kilometers*1000;

    printf("The length in meters : %.2fm", meters);

    return 0;
}
