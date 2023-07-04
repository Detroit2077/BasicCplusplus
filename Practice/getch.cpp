// write a code to demonstrate the use of getch() function

#include <iostream>
#include <conio.h> // for getch() function
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    cout << "Enter a character: ";
    ch = getch();
    cout << "You entered: " << ch << endl;
    return 0;
}