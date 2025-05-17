#include <iostream>
#include <cmath>
using namespace std;

double areaOfSquare(double side){
    return side * side;
}

double areaOfRectangle(double length, double height){
    return length*height;
}

double areaOfTriangle(double base, double height){
    return 0.5*base*height;
}

int main(){
    int option;
    do{
        cout << "Please select the area of the shape you want to calculate" <<endl;
        cout << "1. Square" <<endl;
        cout << "2. Rectangle" <<endl;
        cout << "3. Triangle" <<endl;
        cout << "4. Quit" <<endl;
        cin >> option;

        double side, base, height, length, width;

        switch (option)
        {
        case 1:
            cout << "Enter the size of side of the square" <<endl;
            cin >> side;
            cout << "Area of square: " <<areaOfSquare(side) <<endl;
            break;
        case 2:
            cout << "Enter the width of the rectangle" <<endl;
            cin >> width;
            cout << "Enter the length of the rectangle" << endl;
            cin >> length;
            cout << "Area of the rectangle is: " <<areaOfRectangle(width, length) <<endl;
            break;
        case 3:
            cout << "Enter the base of the triangle" << endl;
            cin >> base;
            cout << "Enter height of the triangle" << endl;
            cin >> height;
            cout << "Area of the triangle is: " <<areaOfTriangle(base, height) <<endl;
            break; 
        case 4:
            cout << "Goodbye!" << endl;       
        default:
            break;
        }
    } while (option !=4);
    
    return 0;
}