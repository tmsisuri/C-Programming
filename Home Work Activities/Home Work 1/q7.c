#include <stdio.h>
int main() {

    float celsius,fahrenheit;

    printf("Enter the temperature : ");
    scanf("%f", &celsius);

    fahrenheit = (9.0/5.0)*celsius+32;

    printf("Temperature in fahrenheit : %.2f", fahrenheit);

    return 0;
}
