#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Read the number
    cout << "Enter a number: ";
    cin >> n;
    
    // Print even numbers from 2 to n
    for (int i = 2; i <= n; i = i + 2) {
        cout << i;
        if (i != n && i + 2 <= n) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}