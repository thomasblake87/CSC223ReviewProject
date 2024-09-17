// CSC 223 Review project, there are three branches. PointType Class, CircleType Class, & CylinderType Class.
// This tests circletype class.

#include <iostream>
#include "CylinderType.h"

using namespace std;

int main()
{
	cout << "Testing cylindertype with integers" << endl;

	cout << "Default constructor: ";
	CylinderType<int> cylinder1;
	cout << "Center point: ";
	cylinder1.printCenterPoint();
	cout << "Circumference point: ";
	cylinder1.printCircumPoint();
	cout << "Height = " << cylinder1.getHeight();
	cout << endl << endl;

	cout << "Constructor with coordinates: ";
	CylinderType<int> cylinder2(6, 13, -4, 8, 5);
	cout << "Center point: ";
	cylinder2.printCenterPoint();
	cout << "Circumference point: ";
	cylinder2.printCircumPoint();
	cout << "Height = " << cylinder2.getHeight();
	cout << endl << endl;

	cout << "Constructor with points: ";
	PointType<int> centerPoint(4, 8);
	PointType<int> circumPoint(8, -2);
	int height = 13;
	CylinderType<int> cylinder3(centerPoint, circumPoint, height);
	cout << "Center point: ";
	cylinder3.printCenterPoint();
	cout << "Circumference point: ";
	cylinder3.printCircumPoint();
	cout << "Height = " << cylinder3.getHeight();
	cout << endl << endl;

	cout << "Testing setCenterPoint, setCircumPoint, and setHeight with cylinder1: ";
	cylinder1.setCenterPoint(5, 0);
	cylinder1.setCircumPoint(2, 4);
	cylinder1.setHeight(13);

	cout << "Center point: ";
	cylinder1.printCenterPoint();
	cout << "Circumference point: ";
	cylinder1.printCircumPoint();
	cout << "Height = " << cylinder1.getHeight();
	cout << endl << endl;

	cout << "Test getCenterPoint, getCircumPoint, and getHeight with cylinder1: ";
	centerPoint = cylinder1.getCenterPoint();
	circumPoint = cylinder1.getCircumPoint();
	height = 9;
	cout << "   Center Point: ";
	cylinder1.printCenterPoint();
	cout << "   Circumference Point: ";
	cylinder1.printCircumPoint();
	cout << "   Height: " << cylinder1.getHeight();
	cout << endl << endl;
	cout << "Radius from cylinder1: " << cylinder1.calcRadius() << endl;
	cout << "Area from cylinder1 " << cylinder1.calcArea() << endl;
	cout << "Circumference from cylinder1: " << cylinder1.calcCircum() << endl;
	cout << "Surface Area from cylinder1: " << cylinder1.calcSA() << endl;
	cout << "Volume from cylinder1: " << cylinder1.calcVol() << endl;
	cout << endl;

	cout << "Testing print function on cylinder2: " << endl;
	cylinder2.print();
	cout << endl << endl;

	cout << "Test circletype with real numbers: " << endl;

	cout << "Default constructor (cylinder4): ";
	CylinderType<double> cylinder4;
	cout << "Center point: ";
	cylinder4.printCenterPoint();
	cout << "Circumference point: ";
	cylinder4.printCircumPoint();
	cout << "Height = " << cylinder4.getHeight();
	cout << endl << endl;

	cout << "Constructor with coordinates (cylinder5): ";
	CylinderType<double> cylinder5(5.2, 7.1, 3.8, 0, 4.1);
	cout << "Center point: ";
	cylinder5.printCenterPoint();
	cout << "Circumference point: ";
	cylinder5.printCircumPoint();
	cout << "Height = " << cylinder5.getHeight();
	cout << endl << endl;

	cout << "Constructor with points (cylinder6): ";
	PointType<double> centerPoint2(5, 4);
	PointType<double> circumPoint2(1, 7);
	double h2 = 7.2;
	CylinderType<double> cylinder6(centerPoint2, circumPoint2, h2);
	cout << "Center point: ";
	cylinder6.printCenterPoint();
	cout << "Circumference point: ";
	cylinder6.printCircumPoint();
	cout << "Height = " << h2;
	cout << endl << endl;

	cout << "Test setCenterPoint, setCircumPoint, and setHeight with cylinder4: ";
	cylinder4.setCenterPoint(7, 2);
	cylinder4.setCircumPoint(1, 6);
	cylinder4.setHeight(1);

	cout << "Center point: ";
	cylinder4.printCenterPoint();
	cout << "Circumference point: ";
	cylinder4.printCircumPoint();
	cout << "Height = " << cylinder4.getHeight();
	cout << endl << endl;

	cout << "Test getCenterPoint, getCircumPoint, and getHeight with cylinder4: ";
	centerPoint2 = cylinder4.getCenterPoint();
	circumPoint2 = cylinder4.getCircumPoint();
	h2 = cylinder4.getHeight();
	cout << "Center point: ";
	cylinder4.printCenterPoint();
	cout << "Circumference point: ";
	cylinder4.printCircumPoint();
	cout << "Height = " << h2;
	cout << endl << endl;

	cout << "Radius from cylinder4" << cylinder4.calcRadius() << endl;
	cout << "Area from cylinder4" << cylinder4.calcArea() << endl;
	cout << "Circumference from cylinder4" << cylinder4.calcCircum() << endl;
	cout << "Surface area from cylinder4" << cylinder4.calcSA() << endl;
	cout << "Volume from cylinder4" << cylinder4.calcVol() << endl;
	cout << endl;

	cout << "Testing print function on cylinder5: " << endl;
	cylinder5.print();
	cout << endl << endl;

	return 0;
}
