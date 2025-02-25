#include <stdio.h>
void celsius(float temp);
void fahrenheit(float temp);
int main() {

    int num;
    float temp;

    printf("Temperature Converter\n");
    printf("1 - Fahrenheit to Celsius\n");
    printf("2 - Celsius to Fahrenheit\n");

    printf("Enter the converter : ");
    scanf("%d", &num);

    printf("Enter the temperature : ");
    scanf("%f", &temp);

    switch(num) {
    case 1 :
        celsius(temp);
        break;
    case 2 :
        fahrenheit(temp);
        break;
    default :
        printf("Invalid input");
    }

    return 0;
}

void celsius(float temp) {
    printf("Temperature in Celsius : %.2f\n", ((float)5/9)*(temp-32));
}
void fahrenheit(float temp) {
    printf("Temperature in Fahrenheit : %.2f\n",  ((float)9/5)*temp+32);
}
