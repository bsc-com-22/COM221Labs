#pragma once
#include <iostream>
using namespace std;

class Box{
    public:
    Box();
    Box(const double newLength, const double newBredth, const double newHeight);
    ~Box();

    double GetVolume();

    void SetLength(double len);
    void SetBredth(double bre);
    void SetHeight(double hei);

    Box operator+(const Box& b);
    private:
    double length;
    double bredth;
    double height;
};