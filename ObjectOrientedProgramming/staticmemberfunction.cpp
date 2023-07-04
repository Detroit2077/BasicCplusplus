#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count; // = 1000  is not permitted
    // count is the static member data of class Employee

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void displayData(void)
    {
        cout << count << endl;
        // cout<<id<<endl;
        // cout << id; will throw an error as variable id is not an static data member
    }
};

int Employee :: count; // Default value is 0

int main()
{
    Employee abhishek, kundan, ankit;
    abhishek.setData();
    abhishek.getData();
    Employee ::displayData();
    // Employee :: setData(); This will throw an error The reason behind this is u can't access the member funtion without initializing an object of it.

    kundan.setData();
    kundan.getData();
    Employee ::displayData();

    ankit.setData();
    ankit.getData();
    Employee ::displayData();

    return 0;
}

// What is a memory leak, and how can it be prevented?
// What are some common pitfalls to avoid when using dynamic memory allocation in C++?