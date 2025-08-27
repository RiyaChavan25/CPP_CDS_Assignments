#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int *arrp[5];
    int arr_rev[5];

    for (int i = 0; i < 5; i++)
    {
        arrp[i] = &arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        arr_rev[i] = *arrp[4 - i];
    }

    cout << "Array before reversing: ";
    for (int j = 0; j < 5; j++)
    {
        cout << arr[j] << "\t";
    }
    cout << endl;

    cout << "Reversed Array is: ";
    for (int j = 0; j < 5; j++)
    {
        cout << arr_rev[j] << "\t";
    }

    return 0;
}

/*==========OUTPUTS==========
Array before reversing: 10	20	30	40	50
Reversed Array is: 50	40	30	20	10
*/