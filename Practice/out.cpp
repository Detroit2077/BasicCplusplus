#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    fstream f;
    f.open("github.txt", ios::out);
    string st;
    f<<"This statement is written by me";
    return 0;
}