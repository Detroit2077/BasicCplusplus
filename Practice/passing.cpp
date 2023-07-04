#include<iostream>
using namespace std;
class complex {
    int real, imaginary;
    public:
    friend void sumComplex();
    void set(int x, int y) {
        real =x;
        imaginary = y;
    }
    void display(){
        cout<<real<<" + i"<<imaginary<<endl;
    }
};
void sumComplex(){
    int b = real + m

}
int main(int argc, char const *argv[])
{
    complex c1, c2, c3;
    c1.set(9, 8);
    c1.display();
    c2.set(5, 7);
    c2.display();
    sumComplex(c1, c2);
    return 0;
}