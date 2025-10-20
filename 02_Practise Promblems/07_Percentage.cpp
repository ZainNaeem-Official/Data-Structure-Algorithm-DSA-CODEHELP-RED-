#include <iostream>
using namespace std;

int main() {
    int totalMarks, obtainedMarks;
    
    // Read total marks and obtained marks
    cout << "Enter total marks: ";
    cin >> totalMarks;
    cout << "Enter obtained marks: ";
    cin >> obtainedMarks;
    
    // Calculate percentage
    double percentage = (double)obtainedMarks / totalMarks * 100;
    
    // Print the result
    cout << "Percentage: " << percentage << "%" << endl;
    
    return 0;
}