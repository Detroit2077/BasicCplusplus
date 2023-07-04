#include<iostream>
using namespace std;
class myclass {
    public:
    virtual void show() {
        cout<<"i Dont know";
    }
};
class b : public myclass {
    public:
    void show() {
        cout<<"i know";
    }
};
int main(int argc, char const *argv[])
{
    b obj1;
    obj1.show();
    cout<<endl;
    myclass *ptr;
    ptr = &obj1;
    ptr->show();
    return 0;
}