#include<iostream>
using namespace std;
class base{
    int data1;
    public:
    int data2;
    void set_data()
    {
        data1 = 10;
        data2 = 20;
    }
    int get_data1(){
        return data1;
    }
    int get_data2(){
        return data2;
    }
};
class derived : public base{
    int data3;
    public:
    void process();
    void display();
};
void derived :: process(){
    data3 = get_data1() * data2;
}
void derived :: display(){
    cout<<"Value of data1 = "<<get_data1()<<endl;
    cout<<"Value of data2 = "<<data2<<endl;
    cout<<"Value of data3 = "<<data3<<endl;
}
int main(int argc, char const *argv[])
{
    derived obj1;
    obj1.set_data();
    obj1.process();
    obj1.display();
    return 0;
}