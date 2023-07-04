#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("name.txt");
    string content;
    fin>>content;
    cout<<"The content of the file is: "<<content;
    return 0;
}