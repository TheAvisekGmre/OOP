#include <iostream>
using namespace std;

class result
{
private:
    int s_id;
    float s_marks;

public:
    result(int id, float marks)
    {
        s_id = id;
        s_marks = marks;
    }

    // Function to show the result
    void showData()
    {
        cout << "Student ID: " << s_id << endl;
        cout << "Student Marks: " << s_marks << endl;
    }
};

int main()
{
    result s1(1, 90.5);          // this is an example of the implicit constructor
    s1.showData();               // calling the function showData() using the object s1
    result s2 = result(2, 80.5); // this is an example of the explicit constructor
    s2.showData();               // calling the function showData() using the object s2
    return 0;
}