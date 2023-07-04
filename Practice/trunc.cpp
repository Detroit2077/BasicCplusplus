#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    fstream fi;
    fi.open("abhishek.txt", ios::trunc | ios::out);
    // string st;
    fi<<"how to use trunc";
    fi.close();
    return 0;
}