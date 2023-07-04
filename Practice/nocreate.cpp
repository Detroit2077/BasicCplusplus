#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    fstream fin;
    fin.open("abhie.txt", ios::nocreate);
    return 0;
}