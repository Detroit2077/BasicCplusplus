#include<iostream>
using namespace std;
/*case1:
class b : class a{
    //order of execution of constructor->first a() then b()
};

case2:
class a: public b, public c{
    //order of execution of constructor->first b() then c() and then a()
};
case3:
class a: public b, virtual public c{
    //oroder of execution of constructor -> first c() then b() and then a()
};;
}*/
class base1{
    int data1;
    public:
        base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printdatabase1(void){
            cout<<"The value of data is "<<data1<<endl;
        }
};
class base2{
    int data2;
    public:
        base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printdatabase2(void){
            cout<<"The value of data is "<<data2<<endl;
        }
};
class derived : public base1, public base2{ //Change the order of base1 and base2 to see the change in the order of execution of constructor
    int derived1, derived2;
    public:
    derived(int a, int b, int c, int d): base1(a), base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor"<<endl;
    }
    void printdataderived(void){
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }
};
int main(int argc, char const *argv[])
{
    derived obj(1, 2, 3, 4);
    obj.printdatabase1();
    obj.printdatabase2();
    obj.printdataderived();
    return 0;
}