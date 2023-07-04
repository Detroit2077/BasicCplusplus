// write a code to demonstrate the use of get() function

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    cout << "Enter a character: ";
    cin.get(ch);
    cout << "You entered: " << ch << endl;

    return 0;
}