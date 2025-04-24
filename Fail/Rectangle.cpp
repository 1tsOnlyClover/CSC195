#include <iostream>
#include "Rectangle.h"
using namespace std;


    Rectangle::Rectangle(float w, float h) {
        m_width = w;
        m_height = h;
    }

    float Rectangle::Area(){
        return m_width * m_height;
    }

	void Rectangle::SetWidth(float width) { m_width = width; } // Setter

	float Rectangle::GetWidth() { return m_width; } // Getter

	void Rectangle::SetHeight(float height) { m_height = height; } // Setter

	float Rectangle::GetHeight() { return m_height; } // Getter