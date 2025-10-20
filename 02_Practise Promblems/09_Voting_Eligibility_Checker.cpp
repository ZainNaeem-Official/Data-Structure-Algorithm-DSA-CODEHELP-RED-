#include <iostream>
using namespace std;

int main() {
    int age;
    
    // Read the age
    cout << "Enter your age: ";
    cin >> age;
    
    // Check voting eligibility
    if (age >= 18) {
        cout << "Eligible to vote" << endl;
    }
    else {
        cout << "Not eligible to vote" << endl;
    }
    
    return 0;
}