// CSC 223 Review project, there are three branches. PointType Class, CircleType Class, & CylinderType Class.
// This tests circletype class.

#include <iostream>
#include <iomanip>
#include "CircleType.h"

using namespace std;

int main()
{
    CircleType<int> Cir1;
    Cir1.setCenterPoint(3, 7);
    Cir1.setCircumPoint(6, -2);

    int x1, y1, x2, y2;
    Cir1.getCenterPoint(x1, y1);
    Cir1.getCircumPoint(x2, y2);
    cout << "The circle has the center points of: ";
    cout << "(" << x1 << "," << y1 << ")" << endl;
    cout << "It has the circumference points of: ";
    cout << "(" << x2 << "," << y2 << ")" << endl;

    double radius = Cir1.calcRadius();
    double area = Cir1.calcArea();
    double circum = Cir1.calcCircum();

    cout << "Calculating radius, area, and circumference..." << endl;

    cout << fixed << setprecision(2);
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circum << endl;
}
