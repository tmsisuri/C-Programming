#include <stdio.h>
int main() {

    int totalseconds,hours,minutes,seconds;

    printf("Enter the time in seconds : ");
    scanf("%d", &totalseconds);

    hours = totalseconds/3600;
    totalseconds = totalseconds%3600;
    minutes = totalseconds/60;
    seconds = totalseconds%60;

    printf("time in  hours, minutes and seconds\n");
    printf("Hours : %d\n", hours);
    printf("Minutes : %d\n", minutes);
    printf("Seconds : %d\n", seconds);

    return 0;
}
