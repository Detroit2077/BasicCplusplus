#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 45;
    cout <<"The value of a was:" << a << endl;
    a = 54;
    cout << "The value of a is: " << a << endl;

    const int b = 34;
    cout << "The value of b is " << b<< endl;
    // You cannot change the value of a variable if you have treated it as a constant
    // b = 45;
    cout << "The value of b is " << b;

    return 0;
}
