#include <iostream>
#include <math.h>

class Sphere
{
private:
    double radius;

public:
    Sphere();
    Sphere(double radius);
    // ~Sphere();
    void setRadius(double radius_length);
    double getRadius() const;
    double getDiameter() const;
    double getCircumference() const;
    double getArea() const;
    double getVolume() const;
    void display() const;
    friend std::ostream &operator<<(std::ostream &os, const Sphere &sphere);
    friend std::istream &operator>>(std::istream &is, Sphere &sphere);
    double doubleChecker(double *value);
};
