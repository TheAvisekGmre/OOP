#include <iostream>
using namespace std;

class parameter
{
private:
    int x;
    int y;

public:
    parameter(int a, int b) // taking two parameters
    {
        x = a;
        y = b;
        cout << "The value of x: " << x << endl
             << "The value of y: " << y << endl;
    }

    parameter(int c) // taking one parameter
    {
        x = c;
        cout << "The value of x: " << x << endl;
    }

    parameter() // taking no parameter or simply called default constructor
    {
        x = 0;
        y = 0;
        cout << "The value of x: " << x << endl
             << "The value of y: " << y << endl;
    }
};

int main()
{
    parameter p1(10, 20); // calling the constructor by passing the two values
    // This is the implict constructor

    parameter p2(30); // calling the constructor by passing one value
    parameter p3;     // calling the constructor by not passing any value
    return 0;
}