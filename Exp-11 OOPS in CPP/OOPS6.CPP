#include <iostream>
using namespace std;

class cube
{
    float height = 2.0;
    float width = 3.0;
    float length = 5.0;

public:
    float volume()
    {
        float v;
        v = height * width * length;
        return v;
    }
};

int main()
{

    cube cube1;
    float vol = cube1.volume();
    cout << "Volume: " << vol << endl;
}
/*==========OUTPUTS==========
Volume: 30
*/