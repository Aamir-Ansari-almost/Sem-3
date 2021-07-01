#include<stdio.h>

int main() {
    struct NAME {
        char firstName[20];
        char lastName[20];
    }name = {"Aamir", "Ansari"};
    struct DOB {
        int day;
        int month;
        int year;
    }dob = {11, 4, 2001};
    struct STUDENT {
        int rollNo;
        struct NAME name;
        struct DOB dob;
    }student = {1, name, dob};
    /*
    printf("\nEnter first and last name of student  :  ");
    scanf("%s", student.name.firstName);
    scanf("%s", student.name.lastName);
    printf("\nEnter roll number of student  :  ");
    scanf("%d", &student.rollNo);
    printf("\nEnter birth date of student  :  ");
    scanf("%d %d %d", &student.dob.day, &student.dob.month, &student.dob.year);

    printf("\n\n");
    */
    printf("\nStudent's name is  :  %s %s", student.name.firstName, student.name.lastName);
    printf("\nStudent's roll number is  :  %d", student.rollNo);
    printf("\nStudent's DOB is  :  %d / %d / %d", student.dob.day, student.dob.month, student.dob.year);

    return 0;
}
