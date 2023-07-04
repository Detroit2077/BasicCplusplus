#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void copyfile(const string& filename1, const string& filename2){
    ifstream fin;
    ofstream fout;
    char ch;
    fin.open(filename1.c_str());
    fout.open(filename2.c_str());
    ch = fin.get();
    while(fin.good()){
        fout<<ch;
        ch = fin.get();
    }
    fin.close();
    fout.close();
}
int main(int argc, char const *argv[])
{
    copyfile("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\file1.txt", "C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\file2.txt");
    cout<<"File copied successfully"<<endl;
    return 0;
}