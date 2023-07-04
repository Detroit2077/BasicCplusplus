#include<iostream>
using namespace std;
class myclass {
public:
    int a;
    myclass() {
        a = 0;
    }
    myclass(int b) {
        a = b;
    }
    void display() {
        cout<<"The value is "<<a<<endl;
    }
    // myclass operator+(myclass &uj) {
    //     t.a = a + uj.a;
    // }
    myclass operator-() {
        a = -a;
        return myclass(a);
    }

};

int main(int argc, char const *argv[])
{
    myclass o1, o2, o3;

    o1.a = 9;
    myclass o4 = -o1;
    o4.display();

    return 0;
}