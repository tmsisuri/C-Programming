#include <stdio.h>

float diameter(float radius);
float circumference(float radius);
float area(float radius);

int main() {

    float f,d,c,a;

    printf("Enter the radius : ");
    scanf("%f", &f);

    d = diameter(f);
    c = circumference(f);
    a = area(f);

    printf("Diameter is %.2f\n", d);
    printf("Circumference is %.2f\n", c);
    printf("Area is %.2f\n", a);

    return 0;
}
float diameter(float radius) {
    return radius*2;
}

float circumference(float radius) {
    return 2*3.14*radius;
}

float area(float radius) {
    return 3.14*radius*radius;
}



