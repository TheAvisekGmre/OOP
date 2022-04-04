// 1. Write a C++ program that reads a number and tests whether it is multiple of 5 or not.

#include <iostream>
using namespace std;

int main()
{
    // Declare variable for input
    int num;
    // Print line for input
    cout << "Enter a number: ";
    // Read input
    cin >> num;
    // Condition
    if (num % 5 == 0)
    {
        cout << "The number is multiple of 5." << endl; // Here endl is used to print a new line
    }
    else
    {
        cout << "The number is not multiple of 5." << endl;
    }
    // End program
    return 0;
}