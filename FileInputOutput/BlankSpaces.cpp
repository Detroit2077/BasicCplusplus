#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("coffee.txt",ios::in);
    char ch;
    int count=0;
    while(!fin.eof())
    {
        fin.get(ch); 
        if(ch==' ')
        {
            count++;
        }
    }
    cout<<"Number of blank spaces in file are: "<<count<<endl;
    fin.close();
    return 0;
}