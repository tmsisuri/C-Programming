#include <stdio.h>

int powerOfNumber(int base, int power);

int main() {

    int base, power, result;

    printf("Enter the base : ");
    scanf("%d", &base);
    printf("Enter the power : ");
    scanf("%d", &power);

    result = powerOfNumber(base, power);
    printf("%d ^ %d = %d", base, power, result);

    return 0;
}
                                                      // powerOfNumber(2,5) --> return 2*powerOfNumber(2,4) --> return 2*16=32
int powerOfNumber(int base, int power) {              // powerOfNumber(2,4) --> return 2*powerOfNumber(2,3) --> return 2*8=16
    if(power==0) {                                    // powerOfNumber(2,3) --> return 2*powerOfNumber(2,2) --> return 2*4=8
        return 1;                                     // powerOfNumber(2,2) --> return 2*powerOfNumber(2,1) --> return 2*2=4
    } else {                                          // powerOfNumber(2,1) --> return 2*powerOfNumber(2,0) --> return 2*1=2
        return (base*powerOfNumber(base, power-1));   // powerOfNumber(2,0) --> return 1
    }
}
