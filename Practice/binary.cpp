#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    fstream f;
    f.open("abhishek.txt", ios::binary | ios::out);
    f<<1010;
    return 0;
}