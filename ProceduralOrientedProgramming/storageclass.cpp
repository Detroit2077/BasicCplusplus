#include<iostream>
using namespace std;
int a = 100;

void demo()
{
    int a;

    a = 200;
    cout << "Value of a in demo() = " << a << endl;
}
int main()
{
    demo();

    return 0;
}