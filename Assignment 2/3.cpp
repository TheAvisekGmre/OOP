// 3. Write a C++ program to read two integer values m and n and to decide and print whether m is a multiple of n.

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int m, n;
    // Print line for user input
    cout << "Enter two integers: ";
    // Read user input
    cin >> m >> n;
    // Print whether m is a multiple of n
    cout << "Is m a multiple of n? " << (m % n == 0 ? "Yes" : "No") << endl;
    // End program
    return 0;
}