#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b;

public:
    void setdata(void);
    void displaydata(void);
};

void Employee :: setdata()
{
    cout << "Enter the age: " << endl;
    cin >> a;
    cout << "Enter the salary: " << endl;
    cin >> b;
}

void Employee :: displaydata() 
{
    cout << "The age of the employee is : " << a << endl;
    cout << "The salary of the employee is: " << b << endl;
}

int main()
{
    Employee aadmi;
    Employee human;

    cout << "The size of the object is: " << sizeof(aadmi) << endl;
    cout << "The size of the object is: " << sizeof(human) << endl;
    cout << "The size of the class" ;
    return 0;
}