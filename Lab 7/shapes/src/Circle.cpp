#include "Circle.h"

namespace shapes {
    Circle::Circle() {
        radius = 0;
    }

    Circle::Circle(float r) {
        radius = r;
    }

    Circle::~Circle() {}

    void Circle::setRadius(float newRadius) {
        radius = newRadius;
    }

    float Circle::getRadius() const {
        return radius;
    }
}
