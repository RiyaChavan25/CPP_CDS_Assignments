#include <iostream>
using namespace std;

class Cube
{
public:
    float side;

    float volumeIn()
    {
        return side * side * side;
    }

    float volumeOut();
};

float Cube::volumeOut()
{
    return side * side * side;
}

int main()
{
    Cube c1;
    cout << "Enter side of cube: ";
    cin >> c1.side;

    cout << "Volume (inside of the method): " << c1.volumeIn() << endl;
    cout << "Volume (outside of the method): " << c1.volumeOut() << endl;
    return 0;
}
/*==========OUTPUTS==========
Enter side of cube: 3
Volume (inside of the method): 27
Volume (outside of the method): 27
*/
