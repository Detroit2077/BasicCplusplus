#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    fstream fin;
    fin.open("newfile.txt", ios::out);
    if(!fin) {
        cout<<"fasd";
    }
    else {
        cout<<"created"<<endl;
        fin.close();
    }
    return 0;
}