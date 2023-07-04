#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream fin("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\name.txt");
    cout<<"Enter your name: ";
    string str;
    cin>>str;
    fin<<"My name is: " + str;
    fin.close();
    return 0;
} 