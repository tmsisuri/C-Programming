#include <stdio.h>
int main() {
    //   1 2 3 4 5 6
    // 1 # # # # # #
    // 2 #         #
    // 3 #         #
    // 4 # # # # # #
    // 5 #         #
    // 6 #         #
    // 7 # # # # # #

    for(int i=1; i<=7; i++) {
        for(int j=1; j<=6; j++) {
            if(i==1 || i==4 || i==7 || j==1 || j==6) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
