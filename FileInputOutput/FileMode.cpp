#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    fstream fin;
    fin.open("coffee.txt", ios::app);
    fin<<"This whole thing is written by abhishek";
    fin.close();
    return 0;
}