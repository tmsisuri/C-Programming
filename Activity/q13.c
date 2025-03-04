#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float sub1_marks;
    float sub2_marks;
    float sub3_marks;
    float averageMarks;
};
void input(struct Student students[], int n) {
    printf("Enter the student details\n");
    for(int i=0; i<n; i++) {
        printf("Student %d\n", i+1);
        printf("ID : ");
        scanf("%d", &students[i].id);
        printf("Name : ");
        scanf("%s", students[i].name);
        printf("Subject 1 marks : ");
        scanf("%f", &students[i].sub1_marks);
        printf("Subject 2 marks : ");
        scanf("%f", &students[i].sub2_marks);
        printf("Subject 3 marks : ");
        scanf("%f", &students[i].sub3_marks);
    }
}
void Calculate(struct Student students[], int n) {
    for(int i=0; i<n; i++) {
        students[i].averageMarks = (students[i].sub1_marks+students[i].sub2_marks + students[i].sub3_marks)/3.0;
    }
}
void writeData(struct Student students[], int n) {
    FILE *stdData = fopen("students.txt", "w");
    if(stdData == NULL) {
        printf("Error opening file!\n");
        return;
    }

    for(int i=0; i<n; i++) {
        fprintf(stdData, "%d %s %f %f %f %f\n",students[i].id,students[i].name,students[i].sub1_marks,students[i].sub2_marks,students[i].sub3_marks,students[i].averageMarks);
    }
    fclose(stdData);
}
void readData(struct Student students[], int n) {
    int i = 0;
    FILE *stdData = fopen("students.txt", "r");
     if(stdData == NULL) {
        printf("Error opening file!|n");
        return;
    }
    while(fscanf(stdData,"%d, %s, %f, %f, %f, %f",&students[i].id,students[i].name,&students[i].sub1_marks,&students[i].sub2_marks,&students[i].sub3_marks, &students[i].averageMarks) == 6) {
        i++;
    }
    fclose(stdData);

    printf("Students Details \n");
    printf("ID\t\tName\t\tSubject 1 marks\t\tSubject 2 marks\t\tSubject 3 marks\t\tAverawhat are ge\n");
    printf("================================================================================================================\n");
    for(int j=0; j<n; j++) {
        printf("%d\t\t%s\t\t%.2f\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n",students[j].id,students[j].name,students[j].sub1_marks,students[j].sub2_marks,students[j].sub3_marks,students[j].averageMarks);
    }
}
int main() {
    int n;

    printf("Enter the number of students : ");
    scanf("%d", &n);

    struct Student students[n];

    input(students, n);
    Calculate(students, n);
    writeData(students, n);
    readData(students, n);

    return 0;
}
