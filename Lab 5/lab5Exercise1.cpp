#include <iostream>
using namespace std;

int main(){
    int* dynamicInt = new int;
    string* dynamicString = new string;
    cout << "Enter the integer you want to be dynamically assigned: " << endl;
    cin >> *dynamicInt;
    cout << "Enter the string you want to be dynamically assigned:" << endl;
    cin >> *dynamicString;
    cout << "The value of dynamically allocated integer is: " << *dynamicInt << endl;
    cout << "The value of dynamically allocated string is: " << *dynamicString <<endl;
    delete dynamicInt;
    delete dynamicString;
    return 0;
}