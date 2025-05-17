#pragma once
namespace shapes {
    class Square {
    private:
        float sideLength;
    public:
        Square();
        Square(float s);
        ~Square();
        void setSideLength(float newSideLength);
        float getSideLength() const;
    };
}
