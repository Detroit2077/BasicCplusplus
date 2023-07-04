#include<iostream>
using namespace std;
class Complex;
class Calculator
{
    public:
        int sumOfNumber(int v, int u)
        {
            return v + u;
        }
        int sumRealComplex(Complex , Complex);
};
class Complex
{
    int a, b;
    public:
        friend int Calculator :: sumRealComplex(Complex, Complex);
        void setNumber(int x, int y)
        {
            a = x;
            b = y;
        }
        void printNumber()
        {
            cout << "The numbers are " << a << " and " << b << endl;
        }
};
int Calculator :: sumRealComplex(Complex c1, Complex c2)
{
    return c1.a + c2.a;
}
int main()
{
    Complex c1, c2;
    c1.setNumber(4, 5);
    c1.printNumber();
    c2.setNumber(5, 6);
    c2.printNumber();

    Calculator o1;
    cout << o1.sumOfNumber(8, 9) << endl;
    cout << o1.sumRealComplex(c1, c2);

    return 0;
}