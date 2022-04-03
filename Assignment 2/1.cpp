// 1. Write a program in C++ to read a four digit number and print the sum of its digits.

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int num, sum = 0;
    // Print line for user input
    cout << "Enter a four digit number: ";
    // Read user input
    cin >> num;
    // Calculate sum of digits
    sum = num % 10 + (num / 10) % 10 + (num / 100) % 10 + (num / 1000) % 10;
    // Print sum of digits
    cout << "Sum of digits: " << sum << endl; // Here we use the endl to print a new line
    // End program
    return 0;
}