#include<iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the ID of employee: ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The ID of employee is: " << id << " and the salary is " << salary << endl;
    }
};
int main()
{

    Employee Google[4];
    for (int  i = 0; i < 4; i++)
    {
        Google[i].setId();
        Google[i].getId();
    }
    
    return 0;
}