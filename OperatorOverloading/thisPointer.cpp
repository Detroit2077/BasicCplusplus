#include<iostream>
using namespace std;
class MyClass{
    public:
    int a;
        MyClass(int x){
            a = x;
        }
        MyClass& operator=(const MyClass& z){
            a = z.a;
            return *this;
        }
        void display(void){
            cout<<a<<endl;
        }
};
int main(int argc, char const *argv[])
{
    return 0;
}