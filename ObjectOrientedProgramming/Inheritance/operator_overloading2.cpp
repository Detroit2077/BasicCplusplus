#include<iostream>
using namespace std;
class demo{
    int x;
    public:
    void set(int a){
        x = a;
    }
    void display(){
        cout<<"The value of a is :"<<x<<endl;
    }
    void operator++(int){
        x = x + 1;
    }
};
int main(int argc, char const *argv[])
{
    demo aa;
    aa.set(4);
    aa++;
    aa.display();
    return 0;
}