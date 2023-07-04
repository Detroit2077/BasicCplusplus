#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int &x;
    x = 8;
    cout<<x;
    return 0;
}