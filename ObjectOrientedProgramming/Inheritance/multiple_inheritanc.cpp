#include<iostream>
using namespace std;
class base1{
    protected:
        int a;
    public:
        void set_number(int r){
            a = r;
        }
};
class base2{
    protected:
        int b;
    public:
        void set_num2(int u){
            b = u;
        }
};
class derived: public base1, public base2{
    public:
        void show(){
            cout<<"The value of base1 is "<<a<<endl;
            cout<<"The value of base2 is "<<b<<endl;
            cout<<"The sum of both is "<<a+b<<endl;
        }
};
int main(int argc, char const *argv[])
{
    derived now;
    now.set_number(5);
    now.set_num2(6);
    now.show();
    return 0;
}