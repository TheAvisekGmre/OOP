#include <iostream>
using namespace std;

int Abhishek = 200; // Global variable
int main()
{
    int Abhishek = 500;                                   // This Abhishek variable has the local scope
    cout << "Value of Abhishek is: " << Abhishek << endl; // Here Abhishek is a local variable
    return 0;
}