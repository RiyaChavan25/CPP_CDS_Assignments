#include <iostream>
using namespace std;

int main()
{

    int m1, n1;

    cout << "Enter the number of rows of Matrix-1: ";
    cin >> m1;

    cout << "Enter the number of columns of Matrix-1: ";
    cin >> n1;

    int mat1[m1][n1];

    cout << "Enter elements of Matrix-1: " << endl;

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    int m2, n2;

    cout << "Enter the number of rows of Matrix-2: ";
    cin >> m2;

    cout << "Enter the number of columns of Matrix-2: ";
    cin >> n2;

    int mat2[m2][n2];

    cout << "Enter elements of Matrix-2:" << endl;

    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> mat2[i][j];
        }
    }

    cout << "Entered Matrix-1 is:" << endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << mat1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Entered Matrix-2 is:" << endl;
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << mat2[i][j] << "\t";
        }
        cout << endl;
    }

    int flag = 0;
    if (m1 == n1 && m2 == n2)
    {
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                if (mat1[i][j] == mat2[i][j])
                {
                    flag = 1;
                }
            }
        }
        if (flag == 1)
        {
            cout << "Two Matrices are equal.";
        }
        else
        {
            cout << "Two Matrices are not equal.";
        }
    }
    else
    {
        cout << "Two Matrices are not equal.";
    }

    return 0;
}

/*==========OUTPUTS==========
Enter the number of rows of Matrix-1: 3
Enter the number of columns of Matrix-1: 3
Enter elements of Matrix-1:
1
2
3
4
5
6
7
8
9
Enter the number of rows of Matrix-2: 3
Enter the number of columns of Matrix-2: 3
Enter elements of Matrix-2:
1
2
3
4
5
6
7
8
9
Entered Matrix-1 is:
1	2	3
4	5	6
7	8	9
Entered Matrix-2 is:
1	2	3
4	5	6
7	8	9
Two Matrices are equal.
*/