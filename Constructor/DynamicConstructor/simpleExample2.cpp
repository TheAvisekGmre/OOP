#include <iostream>
using namespace std;

int main()
{
    int i, *p;      // p is a pointer to an integer
    p = new int[5]; // p points to an array of 5 integers

    cout << "Enter array elements: " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> *(p + i); // *(p+1) is the ith element of the array
    }

    cout << "Array elements are: " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << *(p + i) << endl;
    }

    delete[] p; // delete the array
    return 0;
}