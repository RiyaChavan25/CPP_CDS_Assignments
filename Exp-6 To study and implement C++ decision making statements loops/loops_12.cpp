#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < i - 1; k++)
        {
            cout << " ";
        }

        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }

        cout << "\n";
    }

    for (int i = 2; i <= n; i++)
    {
        for (int k = n - i; k >= 1; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}