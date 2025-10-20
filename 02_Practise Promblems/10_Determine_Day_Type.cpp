#include <iostream>
using namespace std;

int main() {
    int day;
    
    // Read the day number
    cout << "Enter day number (1-7): ";
    cin >> day;
    
    // Check if weekday or weekend
    switch(day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Weekday" << endl;
            break;
        case 6:
        case 7:
            cout << "Weekend" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }
    
    return 0;
}