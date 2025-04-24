#pragma once
// its possible class name is similar to built in classes
// use namespace wrappers to identify customized classes
#include <iostream>
namespace ost {

	class Point {
	public:
		float x, y;
		//Point() { x = 0; y = 0;} //Traditional way
		Point() : x(0), y(0) {} //Modern way
		Point(float x, float y) : x(x), y(y) {}
		friend void operator << (std::ostream& os, Point& point);
		void Write(std::ostream& ostream);
		void Add(Point& point);
		Point& operator+(Point& point);
	};
}