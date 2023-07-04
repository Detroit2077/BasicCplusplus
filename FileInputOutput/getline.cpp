#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\file2.txt");
    string str;
    getline(fin, str);
    getline(fin, str);
    getline(fin, str);
    cout<<str;
    fin.close();
    return 0;
}