#include <iostream>
using namespace std;

int main() {
    int num;
    
    // Read the number
    cout << "Enter a number: ";
    cin >> num;
    
    // Check if positive, negative, or zero
    if (num > 0) {
        cout << "Positive" << endl;
    }
    else if (num < 0) {
        cout << "Negative" << endl;
    }
    else {
        cout << "Zero" << endl;
    }
    
    return 0;
}