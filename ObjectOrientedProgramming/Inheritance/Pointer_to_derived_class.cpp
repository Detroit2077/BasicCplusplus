#include<iostream>
using namespace std;
class base{
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base Class variable var_base "<<var_base<<endl;
        }
};
class derived: public base{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base Class variable var_base "<<var_base<<endl;
            cout<<"Displaying Derived Class variable var_derived "<<var_derived<<endl;
        }
};
int main(int argc, char const *argv[])
{
    base *base_class_pointer;
    base obj_base;
    derived obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base = 78;
    // base_class_pointer->var_derived = 134; //Will throw an error//pointer of base class pointing to derived class can only access base class member data and functions
    base_class_pointer->display();


    derived *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 45;
    derived_class_pointer->display();  
    derived_class_pointer->var_base = 65;//Pointer of derived class pointing to derived class can access all the member data and member function of class base and class derived
    base_class_pointer->display();
    return 0;
}