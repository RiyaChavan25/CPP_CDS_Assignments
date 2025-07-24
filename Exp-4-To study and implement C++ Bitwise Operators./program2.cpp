#include <iostream>
using namespace std;

int main() {
    int n=12;
    int bit_reset, bit_set, bit_set_o, bit_reset_o;
    
    cout<<"Enter bit position to be set: ";
    cin>>bit_set;
    bit_set_o=n|(1<<bit_set);
    cout<<"Set_output:"<<bit_set_o<<endl;
    
    cout<<"Enter bit position to be reset: ";
    cin>>bit_reset;
    bit_reset_o=n&(~(1<<bit_reset));
    cout<<"Reset_output:"<<bit_reset_o<<endl;

    return 0;
}
