#include<stdio.h>

int main () {
    struct student {
        int rollNo;
        char name[20];
        float fees;
    }stud1;

    printf("\nEnter name of Student :  ");
    gets(stud1.name);
    printf("\nEnter roll number of Student :  ");
    scanf("%d", &stud1.rollNo);
    printf("\nEnter fees of Student :  ");
    scanf("%f", &stud1.fees);

    printf("\nName of Student is :  %s", stud1.name);
    printf("\nRoll number of Student is :  %d", stud1.rollNo);
    printf("\nFees of Student is :  %f", stud1.fees);
    printf("\n\n\n\n");

    return 0;
}
