#include <iostream>
#include "Point2D.h"

int main()
{
	Point2D pointer2D;

	pointer2D.SetXY(5, 5);
	pointer2D.PrintXY();

	std::cout << "원점에서의 거리 : " << pointer2D.Distance(1, 1) << std::endl;
}