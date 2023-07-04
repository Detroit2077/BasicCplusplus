#include<iostream>
using namespace std;
// Function prototype
// type function-name(argument);
int sum(int a, int b);
// int sum(int a, b);Not accpetable
// int sum(int, int); Acceptable
int main()
{
    int x, y;
    cout<<"Enter a number:--"<<endl;
    cin>>x;
    cout<<"Enter another number:--"<<endl;
    cin>>y;

    // x and y are actual parameters
    cout<<"The sum of two number is "<<sum(x, y);
    return 0;
}
int sum(int a, int b)
{
    // a and b are formal parameters
    int c = a + b;
    return c;
}