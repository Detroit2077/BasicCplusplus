// The line "int & y = x;" declares a reference variable 'y' of type 'int' that is bound to the same memory location as the variable 'x'. This means that any changes made to 'y' will also affect 'x' because they both refer to the same memory location.

// In other words, 'y' is an alias or an alternate name for 'x'. It allows you to access the value stored in 'x' using a different variable name. References are often used in C++ for passing function arguments by reference, returning values from functions, and for operator overloading.

#include<iostream>
using namespace std;
int main()
{
    int x = 45;
    int & y = x;
    ++x;
    cout << x << endl << y;
    return 0;
}