#include <iostream>
using namespace std;

int main() {
    int n, num, sum = 0;
    
    // Read how many numbers
    cout << "Enter how many numbers: ";
    cin >> n;
    
    // Read n numbers and calculate sum
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
    }
    
    // Print the sum
    cout << "Sum: " << sum << endl;
    
    return 0;
}