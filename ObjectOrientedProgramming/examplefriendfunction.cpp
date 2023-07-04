#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;

    public:
    friend void swapNumber(c1 &, c2 &);
    void indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val2;

public:
    friend void swapNumber(c1 &, c2 &);
    void indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};

void swapNumber(c1 &obj1, c2 &obj2)
{
    int temp = obj1.val1;
    obj1.val1 = obj2.val2;
    obj2.val2 = temp;
}
int main()
{

    c1 obj;
    obj.indata(3);
    obj.display();

    c2 obj2;
    obj2.indata(5);
    obj2.display();

    swapNumber(obj, obj2);

    obj.display();
    obj2.display();

    return 0;
}