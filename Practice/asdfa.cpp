#include<iostream>
using namespace std;
int human(const int a){
   return a++;
}
int main(int argc, char const *argv[])
{
    int x = 56;
    int &y = x;
    x = 67;
    cout<<&y<<endl<<&x<<endl;
    cout<<y<<endl<<x<<endl;
    cout<<human(6);
    return 0;
}