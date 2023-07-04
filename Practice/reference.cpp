#include<iostream>
using namespace std;
int &something(int &a) {
    return a;
}
int main(int argc, char const *argv[])
{
    int x = 9;
    cout<<something(x)<<endl;
    cout<<&x<<endl<<&something(x)<<endl;
    return 0;
}