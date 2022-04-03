#include <iostream>
using namespace std;

int main()
{
    int *p;         // p is a pointer to an integer
    p = new int[5]; // p points to an array of 5 integers

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> p[i]; // p[i] is the ith element of the array
    }

    cout << "Array elements are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    return 0;
}