#include <iostream>
using namespace std;
class Complex
{
    int a, b;
    friend Complex sumComplex(Complex, Complex);

public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }
    void displayNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.setNumber((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setNumber(3, 4);
    c2.setNumber(5, 6);
    c1.displayNumber();
    c2.displayNumber();
    sum = sumComplex(c1, c2);
    sum.displayNumber();
    return 0;
}



/*
Properties of friend functions

1. Not in the scope of class

2. since it is not in teh scope of the class, it cannot be called fro the object of the class. C1.sumComplex() == Invalid 

3. Can be invoked without the help of any objects.

4. Usually contains the objects as arguments.

5. Can be declared inside public or private section of the class.

6. It cannot access the members directly by their names and need 
objects_name.member_name to access any member

*/