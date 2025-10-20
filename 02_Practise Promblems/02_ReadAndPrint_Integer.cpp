#include <iostream>
using namespace std;

int readAndPrintInteger(int num) {

    // Return the integer
    return num;
}

int main() {
    int num;
    
    // Read input from user
    cout << "Enter an integer: ";
    cin >> num;
    
    // Call the function which prints and returns the number
    int result = readAndPrintInteger(num);
    cout << result <<endl;
    
    return 0;
}