#include <iostream>
#include "Box.h"
using namespace std;

int main(){
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0;

    //Box1
    Box1.SetLength(6);
    Box1.SetBredth(7);
    Box1.SetHeight(5);

    //Box2
    Box2.SetLength(12);
    Box2.SetBredth(13);
    Box2.SetHeight(10);

    //Box1 volume
    volume = Box1.GetVolume();
    cout << "Volume of Box1 is: " << volume << endl;

    //Box2 volume
    volume = Box2.GetVolume();
    cout << "Volume of Box2 is: " << volume << endl;

    Box3 = Box1 + Box2;

    //Box3 volume
    volume = Box3.GetVolume();
    cout << "Box3 volume is: " << volume << endl;

    return 0;
}