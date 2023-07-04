// wap to read text file and count the number of words in it.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("something.txt");
    string st;
    int count=0;
    while(fin>>st)
    {
        count++;
    }
    cout<<count;
    return 0;
}