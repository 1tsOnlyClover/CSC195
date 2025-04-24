// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"
using namespace ost;
using namespace std;

Point& operator + (Point& point1, Point& point2) //operator overloading
{
	Point point;
	point.x = point1.x + point2.x;
	point.y = point1.y + point2.y;
	return point;
}

Point Point::operator *(float s)
{
	return Point(x * s, y * s);
}

void operator << (ostream& os, Point& point)
{
	os << point.x << " : " << point.y << endl;
}

int main()
{
	Point point1(10, 14);
	point1.Write(cout);

	Point point2(5,8);

	//point1.Add(point2); --- instead of a method call
	Point point3 = point1 + point2; //operator overloading
	point3.Write(cout);

	cout << point3;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
