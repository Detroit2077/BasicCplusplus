#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count; // = 1000  is not permitted
    // cout is the static member data of class Employee

public:
    void setData()
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
};

int Employee ::count = 1000; // Default value is 0

int main()
{
    Employee abhishek, kundan, ankit;
    abhishek.setData();
    abhishek.getData();

    kundan.setData();
    kundan.getData();

    ankit.setData();
    ankit.getData();

    return 0;
}