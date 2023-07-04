#include<iostream>
using namespace std;
class base{
    public:
        virtual void fun(){
            cout<<"Abhishek"<<endl;
        }
};
class derived: public base{
    public:
        void fun(){
            cout<<"Kundan"<<endl;
        }
};
int main(int argc, char const *argv[])
{
    base *ptr; derived obj;
    ptr = &obj;
    ptr->fun();
    return 0;
} 