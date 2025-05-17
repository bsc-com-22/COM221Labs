#include <iostream>
#include "Area.h"
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"
using namespace std;
using namespace shapes;

int main() {
    float sideLength, base, height, radius;

    cout << "Square" << endl;
    cout << "\nEnter the side length for the square: ";
    cin >> sideLength;
    Square sq(sideLength);
    cout << "The area of a square with the side length " << sq.getSideLength()
         << " is " << Area::getSquareArea(sq) << endl;

    cout << "\nTriangle" << endl;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the height: ";
    cin >> height;
    Triangle tri(base, height);
    cout << "The area of a triangle with the base " << tri.getBase()
         << " and height " << tri.getHeight() << " is " << Area::getTriangleArea(tri) << endl;

    cout << "\nCircle" << endl;
    cout << "Enter the radius: ";
    cin >> radius;
    Circle cir(radius);
    cout << "The area of a circle with radius " << cir.getRadius()
         << " is " << Area::getCircleArea(cir) << endl;

    return 0;
}
