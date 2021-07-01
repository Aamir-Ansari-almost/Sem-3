#include <stdio.h>

int main () {
    struct STUDENTS {
        int rollNo;
        char name[20];
        float fees;
    }d5a[4];

    int i, n, change;

    printf("Enter number of students : ");
    scanf("%d", &n);

    for (i=0 ; i<n ; i++) {
        printf("Enter Roll number , Name , Fees  : ");
        scanf("%d%s%f", &d5a[i].rollNo, d5a[i].name, &d5a[i].fees);
    }
    printf("\nInformation before editing");
    for (i=0 ; i<3 ; i++) {
        printf("\n-------- Student  %d -----------", i+1);
        printf("\n\nRoll number :  %d", d5a[i].rollNo);
        printf("\nName :  %s", d5a[i].name);
        printf("\nFees :  %f", d5a[i].fees);
        printf("\n----------------------------------\n");
    }

    printf("\nEnter number of student whose information to change : ");
    scanf("%d", &change);

    printf("\nEnter Roll number , Name , Fees  : ");
    scanf("%d%s%f", &d5a[change].rollNo, d5a[change].name, &d5a[change].fees);

    printf("\nInformation after editing");
    for (i=0 ; i<3 ; i++) {
        printf("\n-------- Student  %d -----------", i+1);
        printf("\n\nRoll number :  %d", d5a[i].rollNo);
        printf("\nName :  %s", d5a[i].name);
        printf("\nFees :  %f", d5a[i].fees);
        printf("\n----------------------------------\n");
    }
}
