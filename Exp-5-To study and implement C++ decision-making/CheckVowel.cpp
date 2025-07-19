#include <iostream>
using namespace std;

int main() {
    char character;
    
    cout << "Enter a character: ";
    cin >> character;
    
    if( character=='a' || character=='e' || character=='i' || character=='o' || character=='u' || character=='A' || character=='E' || character=='I' || character=='O' || character=='U'){ 
        cout<<"The Character is a vowel.";
    } else{
        cout<<"Character is a constant:";
    }
    
    return 0;
}
