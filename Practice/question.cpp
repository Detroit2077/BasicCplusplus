//write a program to count number of word in a file 

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\file1.txt");
    string word;
    int count = 0;
    while(fin>>word){
        count++;
    }
    cout<<"Number of words in file1.txt is "<<count<<endl;
    fin.close();
    return 0;
}