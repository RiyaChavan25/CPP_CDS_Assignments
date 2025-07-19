#include <iostream>
using namespace std;

int main() {
    int movie;

    cout << "Choose a movie to review:"<<endl<<"1. Inception"<<endl<<"2. Titanic"<<endl<<"3. The Matrix"<<endl<<"4. Mean girls"<<endl<<"Choose (1-4)"<<endl;
  
    cin >> movie;
    
    switch (movie) {
        case 1:
            cout << "Inception: 5/5" << endl;
            break;
        case 2:
            cout << "Titanic: 4.5/5." << endl;
            break;
        case 3:
            cout << "The Matrix: 4.8/5" << endl;
            break;
        case 4:
            cout << "Mean Girls: 5/5" << endl;
            break;
        default:
            cout << "Invalid choice. Please pick a number between 1 and 4." << endl;
    }

    return 0;
}
