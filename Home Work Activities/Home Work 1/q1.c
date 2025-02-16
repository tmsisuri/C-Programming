#include <stdio.h>
int main() {

    float width, height, area;

    printf("Enter the width : ");
    scanf("%f", &width);

    printf("Enter the height : ");
    scanf("%f", &height);

    area = width*height;

    printf("Area of the rectangle is : %.2f", area);

    return 0;
}
