#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
    public:
        //Class members
        float s1, s2, s3;

        //Non-Parameterised
        Triangle() {
            float area = 0;
            s1 = 0;
            s2 = 0;
            s3 = 0;
        }

        //One parameter, EQUILATERAL
        Triangle(float side) {
            float area;
            s1 = side;
            s2 = side;
            s3 = side;
        }

        //Two parameters, ISOSCELES
        Triangle(float side1, float side2) {
            s1 = side1;
            s2 = side1;
            s3 = side2;
        }

        //Three parameters, SCALENE
        Triangle(float side1, float side2, float side3) {
            s1 = side1;
            s2 = side2;
            s3 = side3;
        }

        //Display side and area
        void area() {
            float a, s;
            s = 0.5*(s1+s2+s3);
            a = sqrt((s*(s-s1)*(s-s2)*(s-s3)));
            cout << "Area of triangle with sides  " << s1 << ", " << s2 << ", " << s3 << " is :   " << a << endl;
        }

        //destructor
        ~Triangle(){};

};

int main(){

    int n=0;
    float tempSides[3];
    cout << "Enter number of known sides :  " << endl;
    cout << "*0 Zero " << endl;
    cout << "*1 One Side (EQUILATERAL)" << endl;
    cout << "*2 Two Sides (ISOSCELES)" << endl;
    cout << "*3 Three Sides (SCALENE)" << endl;
    cin >> n;

    //input value of sides
    for (int i=0 ; i<n ; i++) {
        cout << "Enter side number " << i+1 << " :  ";
        cin >> tempSides[i];
    }

    //Send to different constructors
    switch(n) {
        case 0: {   //zero
            Triangle myObj;
            myObj.area();
            break;
        }
        case 1: {   //EQUILATERAL
            Triangle myObj(tempSides[0]);
            myObj.area();
            break;
        }
        case 2: {   //ISOSCELES
            Triangle myObj(tempSides[0], tempSides[1]);
            myObj.area();
            break;
        }
        case 3: {   //SCALENE
            Triangle myObj(tempSides[0], tempSides[1], tempSides[2]);
            myObj.area();
            break;
        }
        default:
            cout << "Invalid Input" << endl;
    }

    return 0;
}
