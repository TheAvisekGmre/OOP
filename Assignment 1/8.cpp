// 8. Write a C++program that reads marks in five subjects and finds total marks, percentage.

#include <iostream>
using namespace std;

int main()
{
    // Declare variable for input
    int mark1, mark2, mark3, mark4, mark5;
    // Print line for input
    cout << "Enter marks in one subjects: ";
    // Read marks1
    cin >> mark1;
    cout << "Enter marks in two subjects: ";
    // Read marks2
    cin >> mark2;
    cout << "Enter marks in three subjects: ";
    // Read marks3
    cin >> mark3;
    cout << "Enter marks in four subjects: ";
    // Read marks4
    cin >> mark4;
    cout << "Enter marks in five subjects: ";
    // Read marks5
    cin >> mark5;
    // Declare variable for total marks
    int total = mark1 + mark2 + mark3 + mark4 + mark5;
    // Declare variable for percentage
    float percentage = (total / 5) * 100;
    // Print result
    cout << "Total marks: " << total << endl;
    cout << "Percentage: " << percentage << endl;
    // End program
    return 0;
}