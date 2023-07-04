// Write a C++ program to read a CSV file and display the data in a tabular format on the screen.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream fin("something.csv");
    if (!fin) {
        cout<<"File not found."<<endl;
    }
    string s;
    while(fin>>s) {
        getline(fin, s);
        cout<<s<<endl;
    }

    return 0;
}