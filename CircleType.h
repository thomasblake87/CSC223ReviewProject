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
	//Constructor with points sent in
	CircleType(PointType<T>, PointType<T>);

	//Set coordinates for center and circumference points
	void setCenterPoint(T, T);
	void setCircumPoint(T, T);

	//Returns the x and y values for the center and circumference points
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
CircleType<T>::CircleType(T xCenter, T yCenter, T xCircum, T yCircum) : centerPoint(xCenter, yCenter)
circumPoint(xCircum, yCircum) {}

template <class T>
CircleType<T>::CircleType(PointType<T> center, PointType<T> circum) : centerPoint(center), circumPoint(circum) {}


