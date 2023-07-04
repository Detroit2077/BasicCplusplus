#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 0;
    try
    {
        if (b == 0)
        {
            throw 0;
        }
        int c = a / b; // this will throw an error
        cout << c << endl;
    }
    catch (int e)
    {
        cout << "Division by zero is not allowed" << endl;
    }
    return 0;
}