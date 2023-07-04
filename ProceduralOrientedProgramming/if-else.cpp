// Sequence Structure
// Selection Structure
// Loop Structure

//   *********************SELECTION STRUCTURE**********************

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // IF-ELSE LADDER SELECTION STRUCTURE
    int age;
    cout << "Enter your age:--";
    cin >> age;
    // if (age>=18)
    // {
    //     cout << "You are eligible and come to th party";
    // }
    // else
    // {
    //     cout << "You are not eligible";
    // }

    // SWITCH CASE STATEMENT CONTROL STRUCTURE

    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
    case 22:
        cout << "You are 22" << endl;
        break;
    case 1:
        cout << "You are 1" << endl;
        break;
    
    default:
        cout << "No special cases";
        break;
    }
    
    return 0;
}
