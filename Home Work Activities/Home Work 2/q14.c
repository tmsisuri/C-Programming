#include <stdio.h>
int main() {

    int hours;
    float wages;

    printf("Enter the worked hours : ");
    scanf("%d", &hours);

    if(hours<=30) {
        wages = hours*50;
    } else if(hours>30 && hours<=55) {
        wages = 30*50 + (hours-30)*(50*1.5);
    } else {
        wages = 30*50 + 25*(50*1.5) + (hours-55)*(50*2);
    }

    printf("weekly wages : Rs.%.2f", wages);

    return 0;
}
