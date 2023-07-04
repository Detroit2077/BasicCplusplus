#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int main(int argc, char const *argv[])
{
    string s = "10 20 30";
    stringstream ss(s);

    int num1, num2, num3;
    ss>>num1>>num2>>num3;

    cout<<"The numbers were: "<<num1<<", "<<num2<<", "<<num3<<endl;

    return 0;
}