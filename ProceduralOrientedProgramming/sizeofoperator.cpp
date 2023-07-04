#include<iostream>
using namespace std;
int main()
{
    float a = 3.34f;
    double b = 3.34l;
    cout<<"The size of 3.34 is " << sizeof(3.34f) << endl;
    cout<<"The size of 3.34 is " << sizeof(3.34l) << endl;

    // Reference Variables
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}