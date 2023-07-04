// !Well that actually make sense after a long time tha

#include<iostream>
using namespace std;
void increment(int& x){
    x++;
}
int main(int argc, char const *argv[])
{
    int a = 10;
    increment(a);
    cout<<a<<endl;
    return 0;
}