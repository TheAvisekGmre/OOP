// Program to use same variable repeatation with compilation error:

#include <iostream>
using namespace std;

namespace Arjun
{
    int Abhishek = 100;
}

namespace Anurag
{
    int Abhishek = 200;
}

int main()
{
    int Abhishek = 300;
    cout << "Value of Abhishek is: " << Abhishek << endl;         // 300
    cout << "Value of Abhishek is: " << Arjun::Abhishek << endl;  // 100
    cout << "Value of Abhishek is: " << Anurag::Abhishek << endl; // 200
    return 0;
}