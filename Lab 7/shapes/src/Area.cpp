#include "Area.h"

float Area::getTriangleArea(const Triangle& t) {
    return 0.5f * t.getBase() * t.getHeight();
}

float Area::getCircleArea(const Circle& c) {
    return 3.14159f * c.getRadius() * c.getRadius();
}

float Area::getSquareArea(const Square& s) {
    return s.getSideLength() * s.getSideLength();
}
