#include <stdio.h>

int main() {
    struct student {
        int rollNo;
        char name[20];
        float fees;
    }stud1, *ptr_stud1;

    ptr_stud1 = &stud1;

    printf("\nEnter Roll number :  ");
    scanf("%d", &ptr_stud1->rollNo);
    printf("\nEnter name :  ");
    scanf("%s", ptr_stud1->name);
    printf("\nEnter fees :  ");
    scanf("%f", &ptr_stud1->fees);

    printf("\nNAME  :  %s", ptr_stud1->name);
    printf("\nROLL  :  %d", ptr_stud1->rollNo);
    printf("\nFEES  :  %f", ptr_stud1->fees);

}


