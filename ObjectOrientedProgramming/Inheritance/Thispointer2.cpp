#include<iostream>
using namespace std;
class A{
    int a;
    public:;
    A & set(int a){
        this->a = a;
        return *this; // this is a pointer which points to the object which invokes the member function
    }
    void display(void){
        cout<<"The value of a is: "<<a<<endl;
    }
};
int main(int argc, char const *argv[])
{
    // this is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.set(4).display();
    a.display();
    return 0;
}