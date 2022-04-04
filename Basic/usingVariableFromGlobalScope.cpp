// Using Variable from Global Scope

#include <iostream>
using namespace std;

int Supriya = 100; // Global variable
int main()
{
    int Supriya = 500;                                    // This Supriya variable has the local scope
    cout << "Value of Supriya is: " << ::Supriya << endl; // Here ::Supriya is a global variable
    return 0;
}