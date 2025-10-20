#include <iostream>
using namespace std;

int main() {
    int num, n;
    
    // Read the number and how many times to print
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter how many times: ";
    cin >> n;
    
    // Print num, n times
    for (int i = 0; i < n; i++) {
        cout << num;
        if (i != (n - 1)) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}