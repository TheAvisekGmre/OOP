## Constructors

A constructor is a special member function that is executed automatically whenever an object is created.

It is used for automatic initialization.
Automatic initialization is the process of initializing object’s data members when it is first created, without making a separate call to a member function.
<b>The name of the constructor is same as the class name.</b>

## Some special characteristics:

1. Constructors should be defined or declared in the public section.
2. They do not have return types.
3. They cannot be inherited but a derived class can call the base class constructor.
4. Like functions, they can have default arguments.
5. Constructors cannot be virtual.
6. We cannot refer to their addresses.
7. They make ‘implicit calls’ to the new and delete operators when a memory allocation is required.

## Types of Constructors

1. Default Constructor:
   A constructor that accepts no parameters is called default constructor. If a class does not include any constructor, the compiler supplies a default constructor. If we create an object by using the declaration rectangle r1; Default constructor is invoked.

2. Parameterized Constructor:
   A constructor that accepts parameters is called parameterized constructor. If a class does not include any constructor, the compiler supplies a default constructor. If we create an object by using the declaration rectangle r1(10,20); Parameterized constructor is invoked.

   We can use parameterized constructors in two ways:

   > by calling the constructor explicitly<br/>
   > by calling the constructor implicitly<br/>

   - The declaration rectangle r1 = rectangle(5, 6.7) : illustrates the first method of calling (explicitly)
   - The declaration rectangle r1(5, 6.7) : illustrates the second method of calling. (implicitly)

> Remember: If a class contains parameterized constructor(s), we must supply default constructor explicitly to use it.

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

> Remember: We cannot pass the argument by value to a copy constructor.
