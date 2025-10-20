#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    // Read three integers
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    cout << "Enter third integer: ";
    cin >> c;
    
    // Calculate average
    int average = (a + b + c) / 3;
    
    // Print the result
    cout << "Average: " << average << endl;
    
    return 0;
}