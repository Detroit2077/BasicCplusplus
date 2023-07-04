#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number of which you want the multiplication of:--";
    cin >> a;
    for (int i = 1; i < 11; i++)
    {
        cout << a << "x" << i << "=" << a*i<< endl;
    }
    
    return 0;
}