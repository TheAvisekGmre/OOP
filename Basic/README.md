## Manipulators:

Manipulators are the operators used with the insertion operator (<<) to modify or manipulate the way data is displayed.
The most commonly used manipulators are <b>endl</b>, <b>setw</b>, and <b>setprecision</b>.

> The header file for <b>setw</b> and <b>setprecision</b> manipulators is iomanip.h

# The endl Manipulator

This manipulator causes a linefeed to be inserted into the output stream.
It has the same effect as using the newline character ‘\n’.
For example, the statement

> cout << “First value: " << first << endl << "Second value: " << second;

<br/>will cause two lines of output

# The setw Manipulator

This manipulator causes the output stream that follows it to be printed within a field of n characters wide, where n is the argument to setw(n).
The output is right justified within the field.

# The setprecision Manipulator

This manipulator sets the n digits of precision to the right of the decimal point to the floating point output, where n is the argument to setprecision(n).

> For example, float a = 42.3658945, b = 35.24569, c = 58.3214789, d = 49.321489; <br/>
> cout << a << endl << setprecision(3) << b << endl << c << endl << setprecision(2) <<
