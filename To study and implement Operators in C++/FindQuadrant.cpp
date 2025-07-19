#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "The point lies in Quadrant 1";
    } else if (x < 0 && y > 0) {
        cout << "The point lies in Quadrant 2";
    } else if (x < 0 && y < 0) {
        cout << "The point lies in Quadrant 3";
    } else if (x > 0 && y < 0) {
        cout << "The point lies in Quadrant 4";
    } else if (x == 0 && y == 0) {
        cout << "The point is at the Origin";
    } else if (x == 0) {
        cout << "The point lies on the Y-axis";
    } else if (y == 0) {
        cout << "The point lies on the X-axis";
    }

    return 0;
}
