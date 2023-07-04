#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    fstream fout;
    fout.open("abhishek.txt", ios::out);
    fout<<"hi";
    cout<<fout.tellp()<<endl;
    // fout.seekp(2);
    // cout<<fout.tellp();
    fout.seekg(-2, ios::end);
    cout<<fout.tellp();
    fout.close();
    return 0;
}