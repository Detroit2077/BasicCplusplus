#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("abhishek.txt");
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get();
    cout<<"\n"<<fin.tellg()<<endl;
    cout<<(char)fin.get();
    cout<<"\n"<<fin.tellg()<<endl;
    cout<<(char)fin.get();
    cout<<"\n"<<fin.tellg()<<endl;
    fin.seekg(5);
    cout<<fin.tellg();
    cout<<(char)fin.get()<<endl;
    // getc(fin);
    cout<<fin.tellg()<<"\n";
    fin.seekg(-2, ios::end);
    cout<<fin.tellg();
    return 0;
}