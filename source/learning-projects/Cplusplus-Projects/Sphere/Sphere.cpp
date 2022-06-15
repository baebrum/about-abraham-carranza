#include "Sphere.h"

// Default constructor
Sphere::Sphere()
    : radius(1.0)
{
}

// Explicit constructor
Sphere::Sphere(double length)
{
    radius = length;
}

// Sphere::~Sphere()
// {
// }

void Sphere::setRadius(double radius_length)
{
    radius = radius_length;
}
double Sphere::getRadius() const
{
    return radius;
}
double Sphere::getArea() const
{
    return M_PI * pow(getRadius(), 2);
}
double Sphere::getCircumference() const
{
    return M_PI * 2 * getRadius();
}
double Sphere::getDiameter() const
{
    return 2 * getRadius();
}
double Sphere::getVolume() const
{
    return 4.0 / 3 * M_PI * pow(getRadius(), 3);
}
void Sphere::display() const
{
    // A display function which displays the radius, diameter, volume and area of the sphere on the output object specified by the programmer
    std::cout << std::endl;
    std::cout << "Radius: " << getRadius() << std::endl;
    std::cout << "Diameter: " << getDiameter() << std::endl;
    std::cout << "Area: " << getArea() << std::endl;
    std::cout << "Volume: " << getVolume() << std::endl;
    std::cout << "Circumference" << getCircumference() << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Sphere &sphere)
{
    sphere.display();
    return os;
}
std::istream &operator>>(std::istream &is, Sphere &sphere)
{
    double *tempDouble = new (std::nothrow) double;
    *tempDouble = sphere.doubleChecker(tempDouble);
    sphere.setRadius(*tempDouble);
    delete tempDouble;
    tempDouble = 0;
    return is;
}
double Sphere::doubleChecker(double *value)
{
    std::cout << "Input a valid double value: ";
    while (1)
    {
        if (std::cin >> *value && *value > 0)
        {
            return *value;
        }
        else
        {
            std::cout << "Error. Input a valid double value: ";
            std::cin.clear();
            while (std::cin.get() != '\n')
            {
            }
        }
    }
}
