#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;

    int marks[n];
    cout << "Enter Marks in Array: \n";

    for (int i = 0; i < n; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    int min = marks[0], max = marks[0];
    for (int i = 1; i < n; i++)
    {
        if (marks[i] < min)
        {
            min = marks[i];
        }
        if (marks[i] > max)
        {
            max = marks[i];
        }
    }

    cout << "Minimum Mark: " << min << endl;
    cout << "Maximum Mark: " << max << endl;

    return 0;
}
