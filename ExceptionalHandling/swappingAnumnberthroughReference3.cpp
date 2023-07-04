#include<iostream>
using namespace std;
void number(int& a){
    a++;
}
int main(int argc, char const *argv[])
{
    int x = 67;
    number(x);
    cout<<x<<endl;
    
    return 0;
}