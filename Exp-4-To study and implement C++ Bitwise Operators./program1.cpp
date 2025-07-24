#include <iostream>
using namespace std;

int main() {
    int a=2;
    int b=7;
    
    int bitwise_and=a&b;
    int bitwise_or=a|b;
    int bitwise_not_a=~a;
    int bitwise_not_b=~b;
    int bitwise_xor=a^b;
    int l_shift_a=a<<4;
    int r_shift_a=a>>3;
    int l_shift_b=b<<4;
    int r_shift_b=b>>3;
    
    cout<<"Bitwise AND:"<<bitwise_and<<endl;
    cout<<"Bitwise OR:"<<bitwise_or<<endl;
    cout<<"Bitwise NOT_a:"<<bitwise_not_a<<endl;
    cout<<"Bitwise NOT_b:"<<bitwise_not_b<<endl;
    cout<<"Bitwise XOR:"<<bitwise_xor<<endl;
    cout<<"Left Shift_a:"<<l_shift_a<<endl;
    cout<<"Right Shift_a:"<<r_shift_a<<endl;
    cout<<"Left Shift_b:"<<l_shift_b<<endl;
    cout<<"Right Shift_b:"<<r_shift_b<<endl;

    return 0;
}
