#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a+b+c;
}
int main()
{
    cout << sum(4, 5) << endl;
    cout << sum(4, 5, 6);
    return 0;
}