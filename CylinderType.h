#pragma once
#include "CircleType.h"

template <class T>
class CylinderType : public CircleType<T>
{
public:
	//Default constructor
	CylinderType();
	//Constructor with coordinates sent in
	CylinderType(T, T, T, T, T);
	//Constructor with points sent in
	CylinderType(PointType<T>, PointType<T>, T);

	//Sets the height value
	void setHeight(T);
	//returns height value
	T getHeight();

	//returns the surface area of the cylinder
	double calcSA();

	//returns volume of cylinder
	double calcVol();

	//prints cylinder properties
	void print();

private:
	T height;
};

template <class T>
CylinderType<T>::CylinderType() : CircleType<T>(), height(0) { }

template <class T>
CylinderType<T>::CylinderType(T xCenter, T yCenter, T xBase, T yBase, T h) : CircleType<T>(xCenter, yCenter, xBase, yBase), height(h) { }

template <class T>
CylinderType<T>::CylinderType(PointType<T> center, PointType<T> base, T h) : CircleType<T>(center.getX(), center.getY(), base.getX(), base.getY()), height(h) { }

template <class T>
void CylinderType<T>::setHeight(T h)
{
	height = h;
}

template <class T>
T CylinderType<T>::getHeight()
{
	return height;
}

template <class T>
double CylinderType<T>::calcSA()
{
	double sa = this->calcCircum() * height + 2 * this->calcArea();
	return sa;
}

template <class T>
double CylinderType<T>::calcVol()
{
	double v = height * this->calcArea();
	return v;
}

template <class T>
void CylinderType<T>::print()
{
	CircleType<T>::print();
	cout << "Surface area: " << calcSA() << endl;
	cout << "Volume: " << calcVol() << endl;
}