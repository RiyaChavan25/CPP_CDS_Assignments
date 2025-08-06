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

    cout << "Marks are: ";
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}
