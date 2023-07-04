#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int *ptr = new int;
    *ptr = 8;
    int p = *ptr;
    cout << "The value of ptr is: " << *ptr << endl;
    cout << "The value of ptr is: " << p << endl;
    return 0;
}