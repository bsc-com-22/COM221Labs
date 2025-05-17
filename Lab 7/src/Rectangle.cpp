#include "Rectangle.h"

Rectangle::Rectangle(){
    length = 0;
    width = 0;
}
Rectangle::~Rectangle(){

}
Rectangle::Rectangle(float newLength, float newWidth) {
    length = newLength;
    width = newWidth;
}

void Rectangle::setLength(float newLength){
    length = newLength;
}
void Rectangle::setWidth(float newWidth){
    width = newWidth;
}
float Rectangle::getLength() const{
    return length;
}
float Rectangle::getWidth() const{
    return width;
}
float Rectangle::getArea() const {
    return length * width;
}
