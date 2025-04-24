#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;
class Rectangle : public Shape {
public:
	Rectangle(float w, float h);
	~Rectangle() {}
	float Area() override;
	void SetWidth(float width);
	float GetWidth();
	void SetHeight(float height);
	float GetHeight();
private:
	float m_width = 0.0f;
	float m_height = 0.0f;
};