#include<iostream>
using namespace std;
void fun(){
    class base{
            int a, b;
        public:
            void show(){
            cout<<"Enter Two values: ";
            cin>>a>>b;
            cout<<a<<" and "<<b<<endl;
        }
    };
    base obj;  
    obj.show();
}
int main(int argc, char const *argv[])
{
    fun();
    return 0;
}