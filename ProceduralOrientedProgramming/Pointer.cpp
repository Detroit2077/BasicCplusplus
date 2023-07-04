#include<iostream>
using namespace std;
int main()
{
    // What is pointer? ----> data type which holds the address of other data.

    int a = 4;
    int* b = &a;

    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b<<endl;



    cout<<"The value at b is "<<*b<<endl;
    cout<<"The value at b is "<<a<<endl;


    // Pointer to pointer

    int** c = &b;
    cout<<"The value at c is "<<c<<endl;
    cout<<"The value at pointer which the pointer c is pointing is "<<**c<<endl;
    cout<<"The address which c is storing is "<<&b;
    return 0;
}