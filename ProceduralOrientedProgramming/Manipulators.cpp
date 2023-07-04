#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 3, b = 45, c = 9999;
    cout << "The value of a is " << a <<endl;
    cout << "The value of b is " << b <<endl;
    cout << "The value of c is " << c <<endl;
// After using setw the printing technique will change
    cout << "The value of a after setw is "<<  setw(4) << a << endl;
    cout << "The value of b after setw is "<<  setw(4) << b << endl;
    cout << "The value of c after setw is "<<  setw(4) << c << endl;
    return 0;
}
