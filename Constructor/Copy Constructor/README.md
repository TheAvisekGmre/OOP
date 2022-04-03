# Copy Constructor

A copy constructor is used to declare and initialize an object with another object of the same type.
For example, the statement

> rectangle r2(r1);

Creates new object r2 and performs member-by-member copy of r1 into r2.

Another form of this statement is:

> rectangle r2 = r1;

The process of initializing through assignment operator is known as copy initialization.
A copy constructor takes reference to an object of the same class as its argument. For example,

rectangle(rectangle& r)
{
length = r.length;
breadth = r.breadth;
}

> Remember: We can not pass the argument by value to a copy constructor.
