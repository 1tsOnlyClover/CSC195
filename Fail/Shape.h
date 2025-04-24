#pragma once
class Shape {
public:
    Shape();
    ~Shape();

    virtual float Area() = 0; // pure virtual function


};// Compare this snippet from Fail/Circle.cpp:
