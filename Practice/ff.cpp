#include<iostream>
using namespace std;
class myclass {
    public:
    int a;
    void set(int x) {
        a = x;
    }
    void display() {
        cout<<a<<endl;
    }
    void add(myclass obj1, myclass obj2) {
        a = obj1.a + obj2.a;
    }
};
int main(int argc, char const *argv[])
{
    myclass q, w, y;
    q.set(9);
    w.set(5);
    y.add(q, w);
    y.display();

    return 0;
}