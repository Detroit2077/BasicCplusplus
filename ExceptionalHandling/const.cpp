#include<iostream>
using namespace std;
void print(const int& x){
    cout<<"The value of varible is: "<<x<<endl;
}
int main(int argc, char const *argv[])
{
    int a = 20;
    const int b = 10;
    print(a);
    print(b);
    // b = 30;
    return 0;
}