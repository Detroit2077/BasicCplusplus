#include<iostream>
using namespace std;
class myClass{
    public:
        int a;
        myClass(int a){
            this->a = a;
            cout<<"myClass constructor"<<endl;
        }
};
class myClass2{
    public:
        int b;
        myClass2(int b){
            this->b = b;
            cout<<"myClass2 constructor"<<endl;
        }
};
class derived: public myClass, public myClass2{
    public:
        int d;
        derived(int x, int y, int d): myClass(x), myClass2(y){
            this->d = d;
            cout<<"Derived class constructor"<<endl;
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<d<<endl;
        }
};
int main(int argc, char const *argv[])
{
    derived(1, 2, 3);
    return 0;
}