#pragma once
class Point2D
{
private:
	int mX;
	int mY;

public:
	void SetXY(int setX, int setY);
	double Distance(int x, int y);
	void PrintXY();
};