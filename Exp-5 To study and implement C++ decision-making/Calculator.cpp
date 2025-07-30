#include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    char op;

    cout << "Calculator\n";
    cout << "Enter an expression (like 4 + 2): ";
    cin >> num1 >> op >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << "\n";
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << "\n";
            } else {
                cout << "Cannot divide by zero!\n";
            }
            break;
        default:
            cout << "Invalid operator! Use +, -, *, or / only.\n";
    }

    return 0;
}
