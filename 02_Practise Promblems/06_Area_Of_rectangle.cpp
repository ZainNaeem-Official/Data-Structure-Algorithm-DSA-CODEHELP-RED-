#include <iostream>
using namespace std;

int main() {
    int length, breadth;
    
    // Read length and breadth
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
    
    // Calculate area
    long long area = length * breadth;
    
    // Print the result
    cout << "Area: " << area << endl;
    
    return 0;
}