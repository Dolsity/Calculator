#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Welcome to the calculator!" << endl;
    cout << "Please enter the first number: ";
    cin >> num1;

    cout << "Please enter the second number: ";
    cin >> num2;

    cout << "Please enter the operation you would like to perform (+, -, *, /): ";
    cin >> operation;

    double result;
    if (operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        result = num1 / num2;
    } else {
        cout << "Invalid operation. Please enter a valid operation (+, -, *, /)." << endl;
        return 1;
    }

    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;
    return 0;
}