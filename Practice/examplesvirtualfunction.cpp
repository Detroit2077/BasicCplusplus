#include<iostream>
using namespace std;
class base{
    public:
        int a;
        // void set(int a){
        //     this->a=a;
        // }
        virtual void display(void){
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
    base* ptr = &o2;
    (*ptr).a = 78;
    (*ptr).display();
    return 0;
}