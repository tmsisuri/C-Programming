#include <stdio.h>

void celsius(float temp);
void fahrenheit(float temp);

int main() {

    char oper;
    float t;

    printf("Fahrenheit to Celsius - C\n");
    printf("Celsius to Fahrenheit - F\n");
    printf("Enter the operator : ");
    scanf("%c", &oper);
    printf("Enter the temperature : ");
    scanf("%f", &t);

    switch(oper) {
    case 'C' : case 'c' :
        celsius(t);
        break;
    case 'F' : case 'f' :
        fahrenheit(t);
        break;
    default :
        printf("Invalid operator\n");
    }


    return 0;
}

void celsius(float temp){
     printf("Temperature in Celsius : %.2f\n", ((float)5/9)*temp-32);
 }
void fahrenheit(float temp) {
    printf("Temperature in Fahrenheit : %.2f\n",  ((float)9/5)*temp+32);
}
