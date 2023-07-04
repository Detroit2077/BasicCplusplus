#include<iostream>
using namespace std;
class myClass{
    int a;
    int b;
    public:
        myClass(int x, int y):a(x+b),b(y){
            cout<<a<<endl<<b<<endl;
        }
};
int main(int argc, char const *argv[]){
    myClass obj(1, 2);
    return 0;
}