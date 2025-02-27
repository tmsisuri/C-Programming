#include <stdio.h>
int main() {

    int age[10];
    int count = 0;

    for(int i=0; i<10; i++) {
        printf("Enter student age : ");
        scanf("%d", &age[i]);
    }

    for (int j=0; j<10; j++) {
        if (age[j]>=12 && age[j]<=25) {
            count++;
        }
    }
    
    printf("number of ages between 12 - 25 are %d", count);

    return 0;
}

