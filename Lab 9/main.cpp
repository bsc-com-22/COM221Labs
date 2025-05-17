#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Daughter.h"
#include "Son.h"

using namespace std;

int main() {
    Inheritance and Polymorphism
    Rectangle rect;
    Triangle trgl;
    Polygon poly;

    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trgl;
    Polygon* pPoly3 = &poly;

    pPoly1->SetValues(4, 5);
    pPoly2->SetValues(4, 5);
    pPoly3->SetValues(4, 5);

    cout << "Rectangle Area: " << pPoly1->Area() << '\n';
    cout << "Triangle Area: " << pPoly2->Area() << '\n';
    cout << "Polygon Base Area: " << pPoly3->Area() << '\n';

    //Constructor chaining
    Daughter theDaughter(1);
    Son theSon(2);

    return 0;
}
