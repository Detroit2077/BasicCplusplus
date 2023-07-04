#include<iostream>
using namespace std;
int count = 0;
// Destructor never takes an argument nor does it return any value
// Destructor is a special member function of a class that is called automatically when an object of that class goes out of scope or is explicitly deleted.
class num{
    // int a = 9;
    public:
    num(){
        count++;
        cout<<"This is the time constructor is called "<<count<<endl;
    }
    ~num(){
        cout<<"This is the time destructor is called "<<count<<endl;
        // cout<<a+2<<endl;
        count--;
    }
};
int main()
{
    cout<<"We are in main function "<<endl;
    cout<<"Creating first object 1"<<endl;
    num o1;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Creating two objects:"<<endl;
        num o2, o3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}