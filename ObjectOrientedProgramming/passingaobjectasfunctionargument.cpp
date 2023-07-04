#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void complexnumber(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNumber()
    {
        cout << "The complex number is " << a << "+i" << b << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setData(1, 3);
    c1.printNumber();

    c2.setData(4, 9);
    c2.printNumber();


    c3.complexnumber(c1, c2);
    c3.printNumber();

    return 0;
}