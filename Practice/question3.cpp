//write a program to count the number of black space present in a file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\file1.txt");
    string blank = " ";
    int count = 0;
    while(fin>>blank){
        count++;
    }
    cout<<"Number of blank spaces in file1.txt is "<<count<<endl;
    return 0;
}