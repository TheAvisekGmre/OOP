#include <iostream>
using namespace std;

class result
{
private:
    int s_id;
    float marks;

public:
    result(int id, float m)
    {
        s_id = id;
        marks = m;
    }

    result(result &x)
    {
        s_id = x.s_id;
        marks = x.marks;
    }

    // Function to display the result
    void display()
    {
        cout << "Student ID: " << s_id << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    result r1(101, 90.5);
    // result r2(r1); // Implicit copy constructor
    result r2 = r1; // Explicit copy constructor

    r1.display();
    r2.display();

    return 0;
}