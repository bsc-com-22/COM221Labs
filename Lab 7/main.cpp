#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle rect;
    float newLength, newWidth;
    cout << "Enter the length: ";
    cin >> newLength;
    cout << "Enter the width: ";
    cin >> newWidth;

    rect.setLength(newLength);
    rect.setWidth(newWidth);

    cout << "The area of rectangle of length " << rect.getLength()
         << " and width " << rect.getWidth()
         << " is " << rect.getArea() << endl;

    
    float l2, w2;
    cout << "\nSecond Rectangle" << endl;
    cout << "Enter the length: ";
    cin >> l2;
    cout << "Enter the width: ";
    cin >> w2;

    Rectangle rect2(l2, w2); 

    cout << "The area of rectangle of length " << rect2.getLength()
         << " and width " << rect2.getWidth()
         << " is " << rect2.getArea() << endl;

    return 0;
}
