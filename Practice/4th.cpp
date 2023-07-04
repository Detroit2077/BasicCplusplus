// Write a C++ program to read a text file and convert all the lowercase letters to uppercase letters and write the output to another file.


#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin;
    ofstream fout;
    fin.open("something4.txt");
    fout.open("something5.txt");
    
    string st;
    while(getline(fin, st)){
        transform(st.begin(), st.end(), st.begin(), [](unsigned char c) {
        return toupper(c);
        });
        fout<<st;
    }
    fin.close();
    fout.close();
    return 0;
}