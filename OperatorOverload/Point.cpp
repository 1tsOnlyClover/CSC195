#include "Point.h"  
#include <iostream>  

namespace ost {  
   void Point::Write(std::ostream& ostream)  
   {  
       ostream << x << " : " << y << std::endl;  
   }  

   void Point::Add(Point& point) {
	   x += point.x;
	   y += point.y;
   }
   Point& Point::operator+(Point& point) {
	   Point* newPoint = new Point();
	   newPoint->x = x + point.x;
	   newPoint->y = y + point.y;
	   return *newPoint;
   }
   void operator<<(std::ostream& os, Point& point)
   {
	   os << point.x << " : " << point.y << std::endl;
   }
}
