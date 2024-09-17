#pragma once
#include "PointType.h"

template <class T>
class CircleType
{
public:
	static const double PI;

	//Default constructor
	CircleType();
	//Constructor with parameters
	CircleType(T, T, T, T);

	//Set coordinates for center and circumference points
	void setCenterPoint(T, T);
	void setCircumPoint(T, T);

	//Returns x and y coordinates of center and circumference points (not ordered pair)
	PointType<T> getCenterPoint();
	PointType<T> getCircumPoint();

	//Prints the x and y coordinates of center and circumference points
	void printCenterPoint();
	void printCircumPoint();

	//Functions to return the radius, area, and circumference of circle
	double calcRadius();
	double calcArea();
	double calcCircum();

	//Writes the radius, area, and circumference to the display
	void print();
private:
	PointType<T> centerPoint;
	PointType<T> circumPoint;
};

template <class T>
const double CircleType<T>::PI = 3.14159;

template <class T>
CircleType<T>::CircleType() : centerPoint(), circumPoint() {}

template <class T>
CircleType<T>::CircleType(T xCenter, T yCenter, T xCircum, T yCircum) : centerPoint(xCenter, yCenter),
circumPoint(xCircum, yCircum) {}

template <class T>
void CircleType<T>::setCenterPoint(T xC, T yC) 
{
	centerPoint.setX(xC);
	centerPoint.setY(yC);
}



template <class T>
void CircleType<T>::setCircumPoint(T xC, T yC)
{
	circumPoint.setX(xC);
	circumPoint.setY(yC);
}

template <class T>
PointType<T> CircleType<T>::getCenterPoint()
{
	return centerPoint;
}

template <class T>
PointType<T> CircleType<T>::getCircumPoint()
{
	return circumPoint;
}

template <class T>
void CircleType<T>::printCenterPoint()
{
	centerPoint.print();
}

template <class T>
void CircleType<T>::printCircumPoint()
{
	circumPoint.print();
}

template <class T>
double CircleType<T>::calcRadius()
{
	return centerPoint - circumPoint;
}

template <class T>
double CircleType<T>::calcArea()
{
	return PI * ((centerPoint - circumPoint) * (centerPoint - circumPoint));
}

template <class T>
double CircleType<T>::calcCircum()
{
	return PI * 2 * (centerPoint - circumPoint);
}

template <class T>
void CircleType<T>::print()
{
	double radius = calcRadius();
	double area = calcArea();
	double circum = calcCircum();

	cout << "Calculating radius, area, and circumference..." << endl;

	cout << fixed << setprecision(2);
	cout << "Radius: " << radius << endl;
	cout << "Area: " << area << endl;
	cout << "Circumference: " << circum << endl;
}