#include <iostream>
using namespace std;

class simple
{
private:
    int a, b;

public:
    simple(int x, int y)
    {
        a = x;
        b = y;
        cout << "The value of a: " << a << endl
             << "The value of b: " << b << endl;
    }
};

int main()
{
    simple s(10, 20);
    return 0;
}