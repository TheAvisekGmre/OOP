#include <iostream>
using namespace std;

int Samjhana = 100; // Global variable
int Samjhana = 500;

int main()
{
    int Samjhana = 200;
    cout << "Value of Samjhana is: " << ::Samjhana;
    // Here the program failed to compile because the variable Samjhana is already defined in the global scope.
    return 0;
}
