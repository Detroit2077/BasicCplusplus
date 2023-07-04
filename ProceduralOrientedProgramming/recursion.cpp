#include<iostream>
using namespace std;

int factorial(int a){
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return factorial(a-1) * a;
    }    
}
int main()
{
    cout << factorial(5);
    return 0;
}