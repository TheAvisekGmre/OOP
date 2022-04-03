#include <iostream>
using namespace std;

class result
{
private:
    int s_id;
    int s_marks;

public:
    result(int id, int marks)
    {
        s_id = id;
        s_marks = marks;
    }

    result(result &obj) // copy constructor
    {
        s_id = obj.s_id;
        s_marks = obj.s_marks;
    }

    // Function to display the result
    void display()
    {
        cout << "Student ID: " << s_id << endl;
        cout << "Student Marks: " << s_marks << endl;
    }

    // Destructor
    ~result()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    result obj1(1, 100); // Destructor is called when the object is destroyed
    result obj2(2, 200); // Destructor is called again when the object is destroyed

    obj1.display();
    obj2.display();

    return 0;
}