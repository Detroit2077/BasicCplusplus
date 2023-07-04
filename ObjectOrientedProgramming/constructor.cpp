#include<iostream>
using namespace std;
class Complex
{
    int a, b;
    public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex()
    {
        a =  0;
        b = 0;
    }
    void printNumber()
    {
        cout << "The Complex number is " << a << " + i" << b << endl;
    }
};

int main()
{
    Complex o1(4, 5);
    o1.printNumber();

    Complex o2;
    o2.printNumber();

    Complex o3(5);
    o3.printNumber();
    return 0;
}