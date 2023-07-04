#include<iostream>
using namespace std;

typedef struct Employee
{
    int eID;
    char favChar;
    float salary;
} e1;

int main()
{
    e1 Kundan;
    struct Employee Abhishek;
    Abhishek.eID = 22;
    Abhishek.favChar = 'c';
    Abhishek.salary = 12000000000000;

    cout << Abhishek.eID<<endl;
    cout << Abhishek.salary<<endl;
    cout << Abhishek.favChar<<endl;

    cout << sizeof(Abhishek)<<endl;



    Kundan.salary = 700000000000;

    cout<<Kundan.salary; 
    return 0;
}