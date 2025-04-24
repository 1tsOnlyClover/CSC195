#include <iostream>
#include "Circle.h"
using namespace std;



    Circle::Circle(float r) { m_radius = r; } // Constructor
    Circle::~Circle() {} // Destructor

    float Circle::Area() { // Method to calculate area
        return 3.14f * m_radius * m_radius;
    }

    void Circle::SetRadius(float radius) { m_radius = radius; } // Setter
    float Circle::GetRadius() { return m_radius; } // Getter

    float m_radius; // Member variable

