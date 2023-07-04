#include<iostream>
using namespace std;
class MyClass{
    int x;
    public:
        MyClass(int x){
            this->x = x;
        }
        int getX(){
            return x;
        }
        virtual void print(){
            cout<<"MyClass"<<endl;
        }
};
class MyChildClass: public MyClass{
    int y;
    public:
        MyChildClass(int x, int y):MyClass(x){
            this->y = y;
        }
        int getY(){
            return y;
        }
        void print(){
            cout<<"MyChildClass"<<endl;
        }
};
int main(int argc, char const *argv[])
{
    MyClass *ptr[2];
    MyClass c(10);
    MyChildClass d(20, 30);
    ptr[0] = &c;
    ptr[1] = &d;
    ptr[0]->print();
    ptr[1]->print();
    return 0;
}