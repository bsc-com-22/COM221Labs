#include "Triangle.h"

namespace shapes {
    Triangle::Triangle() {
        base = 0;
        height = 0;
    }

    Triangle::Triangle(float b, float h) {
        base = b;
        height = h;
    }

    Triangle::~Triangle() {}

    void Triangle::setBase(float newBase) {
        base = newBase;
    }

    void Triangle::setHeight(float newHeight) {
        height = newHeight;
    }

    float Triangle::getBase() const {
        return base;
    }

    float Triangle::getHeight() const {
        return height;
    }
}
