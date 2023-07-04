#include<iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
    void set_data(int r, int i){
        real = r;
        imaginary = i;
    }
    void display_data(){
        cout<<"The Real part is "<<real<<endl;
        cout<<"The Imaginary part is "<<imaginary<<endl;
    }
};
int main(int argc, char const *argv[]){
    // complex obj;
    // complex *ptr = &obj;
    complex *ptr = new complex;
    (*ptr).set_data(5, 6);
    ptr->display_data();
    return 0;
}