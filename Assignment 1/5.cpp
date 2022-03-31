// 5. Write a C++program that reads a number and finds sum of the squares of digits (For example, if the number if 235 then sum = 22+32+52 =38)

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
    // Declare variable for sum
    int sum = 0;
    // Declare variable for digit
    int digit;
    // Declare variable for square
    int square;
    // Loop for each digit
    while (num > 0)
    {
        // Get the last digit
        digit = num % 10;
        // Square the digit
        square = digit * digit;
        // Add the square to sum
        sum += square;
        // Remove the last digit
        num /= 10;
    }
    // Print sum
    cout << "The sum of squares of digits is " << sum << endl;
    // End program
    return 0;
}