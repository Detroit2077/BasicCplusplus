#include<iostream>
using namespace std;
class A {
public:
    A() { cout << "Constructing A" << endl; }
};

class B {
public:
    B() { cout << "Constructing B" << endl; }
};

class C : public B, public A {
public:
    C() { cout << "Constructing C" << endl; }
};

int main() {
    C c;
    return 0;
}