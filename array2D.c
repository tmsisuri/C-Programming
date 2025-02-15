#include <stdio.h>
int main() {

    //2D array
    int  num[3][4] = { 
        {1,2,3,4}, 
        {2,4,6,8}, 
        {8,3,5,6} 
    };

    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //3D array
    int n[2][3][4] = { 
        {
            {1,2,3,4}, 
            {2,4,6,8}, 
            {8,3,5,6}
        }, 
        {
            {3,4,6,7},
            {5,9,2,4},
            {2,7,9,4}
        }
    };

    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            for(int k=0; k<4; k++) {
                printf("%d ", n[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}