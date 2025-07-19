#include<iostream>
using namespace std;

int main() {
    float num1, num2;
    char op;

    // Terminal color codes
    string reset = "\033[0m";
    string bold = "\033[1m";
    string cyan = "\033[36m";
    string green = "\033[32m";
    string red = "\033[31m";
    string yellow = "\033[33m";
    string purple = "\033[35m";

    // Interface header
    cout << bold << cyan << "\n=============================\n";
    cout << "      SIMPLE CALCULATOR\n";
    cout << "=============================\n" << reset;

    // Input Section
    cout << yellow << "Enter first number: " << reset;
    cin >> num1;

    cout << yellow << "Enter second number: " << reset;
    cin >> num2;

    cout << yellow << "Choose operation (+  -  *  /): " << reset;
    cin >> op;

    cout << purple << "\n--------------------------------\n" << reset;
    cout << bold << "Result : ";

    // Operation logic
    if (op == '+') {
        cout << green << num1 + num2;
    } else if (op == '-') {
        cout << green << num1 - num2;
    } else if (op == '*') {
        cout << green << num1 * num2;
    } else if (op == '/') {
        if (num2 == 0) {
            cout << red << "Error - Division by zero is not allowed!";
        } else {
            cout << green << num1 / num2;
        }
    } else {
        cout << red << "Invalid operation.";
    }

    cout << reset << "\n" << purple << "--------------------------------" << reset << endl;

    // Footer
    cout << cyan << bold << "\nThank you for using The Calculator\n" << reset;

    return 0;
}
