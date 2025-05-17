#include <iostream>
using namespace std;

int main () {
    int numberOfElements = 0;
    int* dynamicArr = nullptr;
    cout << "How many elements would you like to type? ";
    cin >> numberOfElements;
    dynamicArr = new int[numberOfElements];
    if(dynamicArr == nullptr){
        cout << "Error: memory could not be allocated";
    }else{
        for(int i = 0; i < numberOfElements; i++){
            cout << "Enter number: ";
            cin >> dynamicArr[i];
        }
        cout << "You entered: ";
        for(int j = 0; j < numberOfElements; j++){
            cout << dynamicArr[j];
        }
        delete[] dynamicArr;
    }
    return 0;

}