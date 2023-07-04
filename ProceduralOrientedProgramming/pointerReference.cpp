#include<iostream>
using namespace std;
float &something(float &a) {
    return a;
}
int main(int argc, char const *argv[])
{
    float x = 6;
    something(x) = 8;
    cout<<x<<endl;
    // cout<<&x<<endl<<&something(x)<<endl;
    // cout<<*(something(x))<<endl;
    return 0;
}