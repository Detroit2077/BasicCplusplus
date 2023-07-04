#include<iostream>
using namespace std;
int c = 45;
int main(int argc, char const *argv[])
{
    int a = 4, b  = 5, c = 56;
    cout << "The value of a is "<<a<<"and b is " << b<<endl;
    cout <<"The addition of both the number is " << a+b<<endl;
    cout << "The local variable value of c is " <<c<<endl;
    cout <<"The global variable value of c is " <<::c<<endl;
    // scope Resolution Operator :: 

    return 0;
}
