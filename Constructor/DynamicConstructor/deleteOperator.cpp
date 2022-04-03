#include <iostream>
#include <string.h>
using namespace std;

// Program to demonstrate objects are destroyed in reverse order of their creation

class str
{
private:
    char *name;

public:
    str(char *n)
    {
        int len = strlen(n); // get length of string
        name = new char[len + 1]; // allocate memory for name and +1 for null character
        strcpy(name, n); // copy string to name
    }

    ~str()
    {
        cout << "Destroying object " << name << endl;
        delete[] name;
    }
};

int main()
{
    cout << "-------------------------------------" << endl;
    str c1("First");
    str c2("Second");
    str c3("Third");
    return 0;
}