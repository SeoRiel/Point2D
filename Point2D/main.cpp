#include <iostream>
#include "Point2D.h"

int main()
{
	Point2D pointer2D;

	pointer2D.SetXY(5, 5);
	pointer2D.PrintXY();

	std::cout << "���������� �Ÿ� : " << pointer2D.Distance(1, 1) << std::endl;
}