#include "Sphere.h"

using std::cin;
using std::cout;
using std::endl;

double doubleChecker(double *value);

/*
Write a class called “Sphere” which has the following data members:

The class should have the following function members:


A display function which displays the radius, diameter, volume and area of the sphere on the output object specified by the programmer. This function also acts as a helper function in overloading the “<<” operator
A non member function overloading the << operator which uses the display member function
*/

int main(void)
{
    double *userLength = new (std::nothrow) double;
    cout << "hello world! in C++" << endl;

    Sphere mysphere;
    cout << mysphere.getRadius() << endl;
    cout << "Enter a double for explicit constructor: ";
    *userLength = mysphere.doubleChecker(userLength);
    Sphere userSphere(*userLength);
    cout << userSphere.getRadius() << endl;
    cout << userSphere.getArea() << endl;
    cout << userSphere.getCircumference() << endl;
    cout << userSphere.getDiameter() << endl;
    cout << userSphere.getVolume() << endl;
    // cout << "Enter a double to mutuate priv variable: ";
    // // *userLength = doubleChecker(userLength);
    // userSphere.setRadius(*userLength);
    cin >> userSphere;
    cout << userSphere;
    // cout << userSphere.getRadius() << endl;
    // cout << userSphere.getArea() << endl;
    // cout << userSphere.getCircumference() << endl;
    // cout << userSphere.getDiameter() << endl;
    // cout << userSphere.getVolume() << endl;
    delete userLength;
    userLength = 0;
    return 0;
}
