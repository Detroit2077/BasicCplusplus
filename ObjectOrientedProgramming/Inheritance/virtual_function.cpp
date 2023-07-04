#include<iostream>
using namespace std;
class base{
    public:
        int var_base;
        virtual void display(){
            cout<<"Displaying Base Class variable var_base "<<var_base<<endl;
        }
};
class derived: public base{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Derived Class variable var_derived "<<var_derived<<endl;
        }
};
int main(int argc, char const *argv[])
{
    base *base_class_pointer;
    derived obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base = 90;
    base_class_pointer->display();
    return 0;
}