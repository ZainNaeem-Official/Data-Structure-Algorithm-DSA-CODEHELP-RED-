#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Read the number
    cout << "Enter a number: ";
    cin >> n;
    
    // Print counting from n down to 1
    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}