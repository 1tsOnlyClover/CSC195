#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Circle : public Shape {
public:
    Circle(float r);
    ~Circle();

    float Area() override;

    void SetRadius(float radius);
    float GetRadius();

private:
    float m_radius;
};