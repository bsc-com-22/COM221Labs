#include <iostream>
#include <fstream>
using namespace std;

int main (){
    ofstream myFile("exampleFile.txt");
    myFile.close();
    
    return 0;
}