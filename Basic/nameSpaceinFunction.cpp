#include <iostream>
using namespace std;

namespace Abhishek
{
    void display()
    {
        cout << "Hello Abhishek" << endl;
    }
}

void display()
{
    cout << "Hello World" << endl;
}

int main()
{
    display();
    Abhishek::display();
    return 0;
}