// 6. Write a C++program to read any two numbers and performs simple arithmetic operations (Addition, subtraction, division, multiplication)

#include <iostream>
using namespace std;

int main()
{
    // Declare variable for input
    int num1, num2;
    // Print line for input
    cout << "Enter two numbers: ";
    // Read input
    cin >> num1 >> num2;
    // Print line for input
    cout << "Enter an operator (+, -, /, *): ";
    // Declare variable for operator
    char op;
    // Read operator
    cin >> op;
    // Declare variable for result
    int result;
    // Switch operator
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    default:
        cout << "Invalid operator." << endl;
        return 0;
    }
    // Print result
    cout << "The result is " << result << endl;
    // End program
    return 0;
}