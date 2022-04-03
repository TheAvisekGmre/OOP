## Destructors

A destructor is a special member function that is executed automatically just before
lifetime of an object is finished. A destructor has the same name as the constructor
(which is the same as the class name) but is preceded by a tilde (~).

> Destructors are used to free up the resources that are allocated to an object.

Like constructors, destructors do not have a return value. They also take no arguments. Hence, we can use only one destructor in a class. The most common use of destructors is to deallocate memory that was allocated for the object by the constructor.

## More about Destructors

- Destructor is an instance member function of a class.
- The name of the destructor is same as the name of a class but preceded by tilde(~) symbol.
- Destructors can never be static.
- Destructors has no return type.
- Destructor takes no argument (No overloading is possible).
- It should be defined to release resources allocated to an object.
- Need of destructors: De-allocate the allocated resources to an objects.
