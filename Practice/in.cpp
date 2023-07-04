#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    fstream f;
    f.open("github.txt", ios::in);
    string str;
    f>>str;
    cout<<str;
    return 0;
}