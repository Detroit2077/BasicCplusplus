#include<iostream>
using namespace std;
class base{
    public:
        int a;
        // void set(int a){
        //     this->a=a;
        // }
        void display(void){
            cout<<"The value of a is: "<<a<<endl;
        }
};
class derived: public base{
    public:
        int b;
        // void set(int a, int b):base(a){
        
        // }
        void display(void){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
        }
};
int main(int argc, char const *argv[])
{
    base o1;
    derived o2;
    base* ptr = &o2;//A pointer of base class type in pointed towards derived class object it can only access the base class belongings
    // ptr->a = 78;
    // ptr->display();

    derived* ptrDerived = &o2; // Here i am trying to point a derived type pointer towards derived class object it can access both base and derived class belongings
    ptrDerived->b=56;
    ptr->a=75;
    ptrDerived->display();
    return 0;
}