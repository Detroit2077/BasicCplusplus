#include <iostream>
using namespace std;
int a = 9;
int justafuckingnumber(void)
{
    a++;
    return a;
}
int main()
{
    cout << justafuckingnumber() << endl;
    cout << justafuckingnumber();
    return 0;
}