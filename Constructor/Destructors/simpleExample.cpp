#include <iostream>
using namespace std;

class Abhishek
{
public:
    Abhishek()
    {
        cout << "Constructor called" << endl; // Constructor called
    }

    ~Abhishek()
    {
        cout << "Destructor called" << endl; // Destructor is called when the object is destroyed
    }
};

int main()
{
    Abhishek obj; // object of class Abhishek is created to call the constructor
    // Lifetime of the object is over and the destructor is called here
    return 0;
}