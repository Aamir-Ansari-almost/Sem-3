#include<stdio.h>

int main() {
    struct real {
        int realNumber;
    }real1, real2;

    struct imaginary {
        int imaginaryNumber;
    }imaginary1, imaginary2;

    printf ("\nEnter real part of first number  : ");
    scanf("%d", &real1.realNumber);
    printf ("\nEnter imaginary part of first number  : ");
    scanf("%d", &imaginary1.imaginaryNumber);
    printf ("\nEnter real part of second number  : ");
    scanf("%d", &real2.realNumber);
    printf ("\nEnter imaginary part of second number  : ");
    scanf("%d", &imaginary2.imaginaryNumber);

    printf("\n\n");

    printf("First number is %d + (%d)i", real1.realNumber, imaginary1.imaginaryNumber);
    printf("\nSecond number is %d + (%d)i", real2.realNumber, imaginary2.imaginaryNumber);

    printf("\n\nAddition of both numbers is %d + (%d)i", (real1.realNumber+real2.realNumber), (imaginary1.imaginaryNumber+imaginary2.imaginaryNumber));
    printf("\n\nSubtraction of both numbers is %d + (%d)i", (real1.realNumber-real2.realNumber), (imaginary1.imaginaryNumber-imaginary2.imaginaryNumber));
    printf("\n\n");
}
