#include<iostream>
using namespace std;
class base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};
class base2{
    public:
        void greet(){
            cout<<"Kaise ho?"<<endl;
        }
};
class derived : public base1, public base2{
    int a;
    public:
        void greet(){
            base1::greet(); // This is how we resolve ambiguity
        }

};
class b{
    public:
        void say(){
            cout<<"Hello"<<endl;
        }
};
class c: public b{
    public:
        void say(){
            cout<<"human"<<endl; //If this statement was not here then it would have printed Hello
        }
};
int main(int argc, char const *argv[])
{
    base1 obj1;
    base2 obj2;
    obj1.greet();
    obj2.greet();
    derived obj3;
    obj3.greet();
    b obj4;
    // obj4.say();
    c obj5;
    obj5.say();
    return 0;
}