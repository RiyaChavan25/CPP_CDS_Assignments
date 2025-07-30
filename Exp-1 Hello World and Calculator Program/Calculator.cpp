#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sum, difference, product;
    float quotient;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = (float)a / b;

    cout << "Sum: " << sum << "\n";
    cout << "Difference: " << difference << "\n";
    cout << "Product: " << product << "\n";
    cout << "Quotient: " << quotient << "\n";

    return 0;
}
