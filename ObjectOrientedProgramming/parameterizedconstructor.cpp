#include<iostream>
using namespace std;
class Complex{
    private:
        int a, b;
    public:
        Complex(int x, int y);
        void printNumber();
};
Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}
void Complex :: printNumber()
{
    cout << "The complex is " << a << " + i" << b << endl;
}
int main()
{
    // Implicit call
    Complex a(4,6);
    a.printNumber();
    // Explicit call
    Complex b = Complex(5, 6);
    b.printNumber();

    return 0;
}