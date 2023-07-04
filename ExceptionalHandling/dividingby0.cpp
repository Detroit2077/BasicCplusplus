// number dividing by 0
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 0;
    int c = a/b;   // this will throw an error
    cout << c << endl;
    return 0;
}