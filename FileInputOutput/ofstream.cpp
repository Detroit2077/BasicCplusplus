#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream fout;
    fout.open("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\file1.txt");
    fout<<"Hello"<<endl;
    fout.close();
    return 0;
}