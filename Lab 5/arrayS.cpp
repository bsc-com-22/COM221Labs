#include <iostream>
using namespace std;

int main(){
    string sArray[] = {"B123", "B456", "B012", "B345"};
    for (int i = 0; i < 5; i++)
    {
        if (sArray[i][0] == 'B')
        {
            cout << sArray[i] << endl;
        }
        
    }
    
    return 0;
}

