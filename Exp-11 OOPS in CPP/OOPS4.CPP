#include <iostream>
using namespace std;

class Calculator
{
public:
    float a, b;

    float add() { return a + b; }
    float sub() { return a - b; }

    float mul();
    float divi();
};

float Calculator::mul()
{
    return a * b;
}

float Calculator::divi()
{
    if (b == 0)
    {
        cout << "Division by zero not allowed.\n";
        return 0;
    }
    return a / b;
}

int main()
{
    Calculator c1;
    cout << "Enter two numbers: ";
    cin >> c1.a >> c1.b;

    cout << "Addition: " << c1.add() << endl;
    cout << "Subtraction: " << c1.sub() << endl;
    cout << "Multiplication: " << c1.mul() << endl;
    cout << "Division: " << c1.divi() << endl;
    return 0;
}
/*==========OUTPUTS==========
Enter two numbers: 2 5
Addition: 7
Subtraction: -3
Multiplication: 10
Division: 0.4
*/
