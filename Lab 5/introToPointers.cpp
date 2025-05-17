#include <iostream>
using namespace std;

int main (){
    int* pPointer = nullptr;
    int integerVar = 5;
    pPointer = &integerVar;
    cout << "intergerVar: " <<integerVar << endl;
    cout << "Address of integerVar: " <<&integerVar << endl;
    cout << "pPointerr: " << pPointer << endl;
    //address of pPointer
    cout << "Address of pPointer: " <<&pPointer << endl;
    return 0;
}