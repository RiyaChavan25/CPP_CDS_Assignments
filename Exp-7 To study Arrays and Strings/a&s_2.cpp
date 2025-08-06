#include <iostream>
using namespace std;

int main()
{
    int n, search;
    cout << "Enter size of Array: ";
    cin >> n;

    int marks[n];
    cout << "Enter Marks in Array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << "Enter mark to search: ";
    cin >> search;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (marks[i] == search)
        {
            cout << "Found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Marks not found.\n";
    }

    return 0;
}
