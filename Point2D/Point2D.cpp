#include <iostream>
#include <cmath>
#include "Point2D.h"

void Point2D::SetXY(int setX, int setY)
{
	mX = setX;
	mY = setY;
}

double Point2D::Distance(int x, int y)
{
	double distance;

	x = mX - x;
	y = mY - y;

	distance = sqrt(pow(x, 2) + pow(y, 2));

	return distance;
}

void Point2D::PrintXY()
{
	std::cout << "( " << mX << ", " << mY << " )" << std::endl;
}