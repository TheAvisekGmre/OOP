// 7. Write a C++program to input time in second convert it into hour, minute and second.

#include <iostream>
using namespace std;

int main()
{
    // Declare variable for input
    int time;
    // Print line for input
    cout << "Enter time in second: ";
    // Read input
    cin >> time;
    // Declare variable for hour
    int hour = time / 3600;
    // Declare variable for minute
    int minute = (time % 3600) / 60;
    // Declare variable for second
    int second = (time % 3600) % 60;
    // Print result
    cout << "The time is " << hour << ":" << minute << ":" << second << endl;
    // End program
    return 0;
}