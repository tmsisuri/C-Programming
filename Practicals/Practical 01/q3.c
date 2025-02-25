#include <stdio.h>
int main() {
    char name[3][20];
    int maths[3], science[3], english[3], total[3];
    float average[3];
    int rank[3] = {0, 1, 2};

    for(int i=0; i<3; i++) {
        printf("Enter Student Name : ");
        scanf("%s", name[i]);

        printf("Enter Marks for Mathematics : ");
        scanf("%d", &maths[i]);

        printf("Enter Marks for Science : ");
        scanf("%d", &science[i]);

        printf("Enter Marks for English : ");
        scanf("%d", &english[i]);

        total[i] = maths[i] + science[i] + english[i];
        average[i] = total[i]/3.0;

    }

    for(int i = 0; i<2; i++) {
        for(int j=i+1; j<3; j++) {
            if(average[rank[i]] < average[rank[j]]) {
                // Swap ranks
                int temp = rank[i];
                rank[i] = rank[j];
                rank[j] = temp;
            }
        }
    }

    printf("Student Name\t\tMathematics\t\tScience\t\tEnglish\t\tTotal\t\tAverage\t\tPlace\n");
    for(int i=0; i<3; i++) {
        int index = rank[i];
        printf("%s\t\t\t%d\t\t\t%d\t\t%d\t\t%d\t\t%.2f\t\t%d\n",
               name[index], maths[index], science[index], english[index],
               total[index], average[index], i + 1);
    }

    return 0;
}
