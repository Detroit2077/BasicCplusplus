#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    fstream fin;
    fin.open("country.txt", ios::trunc | ios::out);

    fin<<"This is also written by abhishek";
    fin.close();

    return 0;
}