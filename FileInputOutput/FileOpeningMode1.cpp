#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream outf("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\sample.txt");
    cout<<"Enter item name"<<endl;
    char name[30];
    cin>>name;

    outf<<name<<endl;
    cout<<"Enter cost: "<<endl;
    float cost;
    cin>>cost;
    outf<<cost<<endl;
    outf.close();
    ifstream inf("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\sample.txt");
    inf>>name;
    inf>>cost;
    cout<<"Item name: "<<name<<endl;
    cout<<"Item cost: "<<cost<<endl;
    inf.close();
    
    return 0;
}