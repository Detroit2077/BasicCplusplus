#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin, fin2;
    ofstream fout;
    fin.open("something.txt");
    fin2.open("something2.txt");
    fout.open("something3.txt");
    
    string st;
    while(getline(fin, st)){
        fout<<st<<endl;
        
    }
    while (getline(fin2, st))
    {
        fout<<st<<endl;
    }
    fin.close();
    fin2.close();
    fout.close();
    return 0;
}