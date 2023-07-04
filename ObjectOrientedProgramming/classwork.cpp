#include<iostream>
#include<cstring>
using namespace std;
class Staff
{
    public:
    string name;
    int code;
    string subject;
    string publication;
    int grade, speed, dailywage;
};
class Teacher : public Staff
{
    public:
    void setData()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the code: ";
        cin >> code;
        cout << "Enter the subject:";
        cin >> subject;
        cout << "Enter the publication: ";
        cin >> publication;
    }
    void displaydata()
    {
        cout << "The name of the teacher is " << name << endl;
        cout << "The subject of the teacher is " << subject << endl;
        cout << "The publication is " << publication << endl;
    }
};

class office : public Staff
{
    public:
    void set(){
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the code: ";
        cin >> code;
        cout << "Enter the grade: ";
        cin >> grade;
    }
    void display()
    {
        cout << "The name of the teacher is " << name << endl;
        cout << "The code is " << code << endl;
        cout << "The grade is " << grade << endl;
    }
};

class typical : public Staff
{
    public:
    void setdata()
    {
        cout << "Enter the speed:";
        cin >> speed;
        cout << "Enter the daily wages:";
        cin >> dailywage;
    }
    void displaydata()
    {
        cout << "The speed is: " << speed << endl;
        cout << "Daily wages is " <<  dailywage << endl;
    }
};
int main()
{
    Teacher obj1;
    obj1.setData();
    obj1.displaydata();
    // office obj2;
    // obj2.set();
    // obj2.display();
    // typical obj3;
    // obj3.setdata();
    // obj3.displaydata();
    // return 0;

}