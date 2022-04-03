// 2. Given three numbers, write a  C++ program to read three numbers from keyword and print out the largest of them without using if statement.

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int num1, num2, num3;
    // Print line for user input
    cout << "Enter three numbers: ";
    // Read user input
    cin >> num1 >> num2 >> num3;
    // Print largest of three numbers
    cout << "Largest of three numbers: " << max(num1, max(num2, num3)) << endl;
    // End program
    return 0;
}