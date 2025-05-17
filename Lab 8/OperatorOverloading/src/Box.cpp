#include "Box.h"

Box::Box() {
    length = 0;
    bredth = 0;
    height = 0;
}
Box::Box(const double newLength, const double newBredth, const double newHeight){
    height = newHeight;
    length = newLength;
    bredth = newBredth;
}
Box::~Box(){}

double Box::GetVolume(){
    return length * bredth * height;
}

void Box::SetBredth(double bre){
    bredth = bre;
}
void Box::SetHeight(double hei){
    height = hei;
}
void Box::SetLength(double len){
    length = len;
}
Box Box::operator+(const Box& b){
    Box box;

    box.length = this->length + b.length;
    box.bredth = this->bredth + b.bredth;
    box.height = this->height + b.height;
    return box;
}