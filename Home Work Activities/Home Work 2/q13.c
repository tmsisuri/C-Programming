#include <stdio.h>
int main() {

    float speed;

    printf("Enter the speed : ");
    scanf("%f", &speed);

    if(speed>=31 && speed<=40) {
        printf("fine is : 500 rupees\n");
    } else if(speed>=41 && speed<=50) {
        printf("fine is : 750 rupees\n");
    } else if(speed>50) {
        printf("fine is : 1000 rupees\n");
    } else {
        printf("no fine\n");
    }

    return 0;
}
