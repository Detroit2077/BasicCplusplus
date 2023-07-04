#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    int salary = 34;
    Employee(){}
    Employee(int intID){
        id = intID;
    }
    void get_salary(){
        cout<<salary<<endl;
    }
};
// Default visibility mode is private

/*1. Public visibility mode means public part of the base class will be inherited in public portion of the derived class

2. Private visibility mode means public part of the base class will be inherited in private portion of the derived class*/
class Programmer : public Employee{
    public:
    int languagecode = 9;
    Programmer(){}
    Programmer(int intID){
        id = intID;
    }
    void get_data()
    {
        cout<<id<<endl;
    }
};
int main()
{
    Employee abhishek(45), kundan(23);
    cout<<abhishek.id<<endl;
    cout<<kundan.id<<endl;
    cout<<abhishek.salary<<endl;
    Programmer anurag;
    Programmer thakur(4);
    cout<<anurag.languagecode<<endl;
    cout<<anurag.salary<<endl;
    cout<<thakur.id<<endl;
    thakur.get_data();
    thakur.get_salary();
    return 0;
}