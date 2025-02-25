#include <stdio.h>

int hours(int time);
int minutes(int time);
int seconds(int time);

int main() {

    int h, m,s,t;

    printf("Enter the time in seconds : ");
    scanf("%d", &t);

    h = hours(t);
    m = minutes(t);
    s = seconds(t);

    printf("%d h: %d min: %d sec", h,m,s);

    return 0;
}

int hours(int time) {
    return time/3600;

}
int minutes(int time) {
    time = time%3600;
    return time/60;
}
int seconds(int time) {
    time = time%3600;
    return time%60;
}
