#include <iostream>
using namespace std;

class complex
{
public:
    complex() // constructor must be defined in public with the same name as the class
    {
        cout << "Constructor called" << endl; // Constructor called
    }
};

int main()
{
    complex c;
    return 0;
}