#include <stdio.h>
#include <malloc.h>
//Write a program, using an array of pointers to a structure, to read and display the data of students.
int main() {
    struct student {
        int rollNo;
        char name[20];
        float fees;
    }*ptr_stud1[10];

    int n, i;
    printf("Enter number of students  :  ");
    scanf("%d", &n);
    //input
    for (i=0 ; i<n ; i++) {
        ptr_stud1[i] = (struct student*)malloc(sizeof(struct student));
        printf("\nEnter data of student %d ", i+1);
        printf("\nNAME  :  ");
        scanf("%s", ptr_stud1[i]->name);
        printf("ROll NUMBER  :  ");
        scanf("%d", &ptr_stud1[i]->rollNo);
        printf("FEES  :  ");
        scanf("%f", &ptr_stud1[i]->fees);
    }

    //printing
    printf("*********************************");
    for (i=0 ; i<n ; i++) {
        printf("\nName :  %s", ptr_stud1[i]->name);
        printf("\nRoll number :  %d", ptr_stud1[i]->rollNo);
        printf("\nFees :  %f", ptr_stud1[i]->fees);
    }
}



