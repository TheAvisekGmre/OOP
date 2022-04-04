#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "___________________________________________________" << endl;
    cout << setw(11) << "Bhaktapur" << endl // setw is used to set the width of the output
         << setw(11) << "Multiple" << endl
         << setw(11) << "Campus" << endl;
    return 0;
}