#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("coffee.txt");
    string st;
    while(fin.eof()==0){
        getline(fin, st);
        cout<<st<<endl;
    }
    return 0;
}