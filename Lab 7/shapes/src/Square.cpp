#include "Square.h"

namespace shapes {
    Square::Square() {
        sideLength = 0;
    }

    Square::Square(float s) {
        sideLength = s;
    }

    Square::~Square() {}

    void Square::setSideLength(float newSideLength) {
        sideLength = newSideLength;
    }

    float Square::getSideLength() const {
        return sideLength;
    }
}
