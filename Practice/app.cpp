#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    fstream f;
    f.open("github.txt", ios::app);
    string st;
    f<<"This whole para is written by me";

    return 0;
}