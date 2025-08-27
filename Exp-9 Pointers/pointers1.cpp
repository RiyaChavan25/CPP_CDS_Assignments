#include <iostream>
using namespace std;

int main()
{

    int a = 20;
    int *aptr;
    aptr = &a;

    float b = 20.2;
    float *bptr;
    bptr = &b;

    double c = 20.2;
    double *cptr;
    cptr = &c;

    bool d = true;
    bool *dptr;
    dptr = &d;

    cout << "-->Before Incrementing:" << endl;
    cout << "int ptr: " << aptr << endl;
    cout << "float ptr: " << bptr << endl;
    cout << "double ptr: " << cptr << endl;
    cout << "bool ptr: " << dptr << endl;
    cout << endl;

    cout << "-->After Incrementing:" << endl;

    aptr++;
    bptr++;
    cptr++;
    dptr++;

    cout << "int ptr: " << aptr << endl;
    cout << "float ptr: " << bptr << endl;
    cout << "double ptr: " << cptr << endl;
    cout << "bool ptr: " << dptr << endl;

    return 0;
}

/*==========OUTPUTS==========
-->Before Incrementing:
int ptr: 0x7fffb556461c
float ptr: 0x7fffb5564618
double ptr: 0x7fffb5564610
bool ptr: 0x7fffb556460f

-->After Incrementing:
int ptr: 0x7fffb5564620
float ptr: 0x7fffb556461c
double ptr: 0x7fffb5564618
bool ptr: 0x7fffb5564610
*/