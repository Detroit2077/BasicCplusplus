#include<iostream>
using namespace std;
class Complex {
    int a;
    public:
    friend Complex sum_of_number(Complex &n, Complex &m);
    void setdata(int b) {
        a = b;
    }
    void display(void) {
        cout<<"The value is "<<a<<endl;
    }

};
// class complex2 {
//     int c;
//     public:
//     friend Complex sum_of_number(Complex &n, complex2 &m);
//     void setData(int c) {
//         this->c=c;
//     }
//     void display(void){
//         cout<<"The value is"<<c<<endl;
//     }

// };
Complex sum_of_number(Complex &o1, Complex &o2) {
    Complex c1;
    c1.a = o1.a + o2.a;
    return c1;
}
int main(int argc, char const *argv[])
{
    Complex n;
    Complex m, u;
    n.setdata(4);
    m.setdata(6);
    // sum_of_number(n, m);
    u = sum_of_number(n, m);
    u.display();

    return 0;
}