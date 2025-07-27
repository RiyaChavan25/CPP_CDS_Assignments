#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float average;

    cout << "Enter marks for subject 1: ";
    cin >> m1;
    cout << "Enter marks for subject 2: ";
    cin >> m2;
    cout << "Enter marks for subject 3: ";
    cin >> m3;
    cout << "Enter marks for subject 4: ";
    cin >> m4;
    cout << "Enter marks for subject 5: ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;

    cout << "\nTotal Marks: " << total << "\n";
    cout << "Percentage: " << average << "%\n";

    cout << "Grade: ";
    if (average >= 90 && average <= 100) {
        cout << "A+\n";
    } else if (average >= 80) {
        cout << "A\n";
    } else if (average >= 70) {
        cout << "B+\n";
    } else if (average >= 60) {
        cout << "B\n";
    } else if (average >= 50) {
        cout << "C\n";
    } else if (average >= 40) {
        cout << "D\n";
    } else {
        cout << "F (Fail)\n";
    }

    return 0;
}
