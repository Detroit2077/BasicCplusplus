// !Now i got this shit up

#include<iostream>
using namespace std;
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
    cout<<"After swapping the values tured into "<<x<<" and "<<y<<endl;
}
int main(int argc, char const *argv[])
{
    int a = 34;
    int b = 78;
    swap(a, b);
    // cout<<"The value of a and b is "<<a<<" and "<<b<<endl;
    cout<<"The value of a is "<<a<<endl;
    return 0;
}