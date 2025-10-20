#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Read the number
    cout << "Enter a number: ";
    cin >> n;
    
    // Print counting from 1 to n
    for (int i = 1; i <= n; i++) {
        cout << i;
        cout << " ";
    }
    cout << endl;
    
    return 0;
}