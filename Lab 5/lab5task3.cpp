#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number;
    cout << "Enter a number between 5 and 10: ";
    cin >> number;

    while (cin.fail() || number < 5 || number > 10)
    {
        cout << "Invalid number. Please try again: ";
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the wrong input
        cin >> number; // Ask again
    }

    cout << "Your input has been accepted!" << endl;
    return 0;
}
