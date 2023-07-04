// Write a program to store the information of 5 students in a file and read the contexts and print them on the screen

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream outf("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\student.txt");
    cout<<"Enter name of the students"<<endl;
    string* ptr = new string[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>ptr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        outf<<*(ptr+i)<<endl;
    }
    outf.close();
    ifstream inf("C:\\Users\\abhis\\OneDrive\\Documents\\Coding\\codewithharryc++\\FileInputOutput\\student.txt");
    for (int i = 0; i < 5; i++)
    {
        inf>>ptr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"Name of the "<<i<<": "<<*(ptr+i)<<endl;
    }
    return 0;
}
