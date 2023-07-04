#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    void setNumber(int b)
    {
        a = b;
    }
    friend Number unit(Number o1, Number o2);
    void displayNumber()
    {
        cout << "The number is " << a << endl;
    }
};
Number unit(Number o1, Number o2)
{
    Number o3;
    o3.setNumber(o1.a + o2.a);
    return o3;
}
int main()
{
    Number c1, c2, c3;
    c1.setNumber(3);
    c1.displayNumber();

    c2.setNumber(6);
    c2.displayNumber();

    c3 = unit(c1, c2);
    c3.displayNumber();
    return 0;
}