#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\file1.txt");
    string word;
    while(fin>>word){
        cout<<word<<endl;
    }
    fin.close();
    return 0;
}
