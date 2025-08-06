#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;

    int marks[n];
    cout << "Enter Marks in Array: \n";

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i]; // Add each element to sum
    }

    double average = static_cast<double>(sum) / n;

    cout << "Sum of Marks: " << sum << endl;
    cout << "Average of Marks: " << average << endl;

    return 0;
}
