#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cout << "Enter number of rows: " << endl;
    cin >> rows;
    cout << "Enter number of columns: " << endl;
    cin >> cols;
    if(rows < 1 || rows > 3 || cols < 1 || cols > 3){
        cout << "Error: number not between 1 and 3" << endl;
    }

    double** dynamicArray = new double*[rows];
    for(int i = 0; i < rows; i++){
        dynamicArray[i] = new double[cols];
    }
    cout << "Enter the array elements: " << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << "Element [" << i << "] [" << j << "] :" ;
            cin >> dynamicArray[i][j];  
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << dynamicArray[i][j] << "\t";
        }
    }
    for(int i = 0; i < rows; i++){
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;
    return 0;

}