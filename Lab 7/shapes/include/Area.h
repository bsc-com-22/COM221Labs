#pragma once
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
using namespace shapes;

class Area {
public:
    static float getTriangleArea(const Triangle& t);
    static float getCircleArea(const Circle& c);
    static float getSquareArea(const Square& s);
};
