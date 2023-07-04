#include<iostream>
using namespace std;
/*
syntax for initialization list in constructor:
constructor(argument-list): initilization-section
{
    assigment + other code;
}
class test{
    int a;
    int b;
    public:
        test(int i, int j) : a(i), b(j)
}*/
class test{
    int a;
    int b;
    public:
        // test(int i, int j) : a(i), b(j){
        // test(int i, int j) : a(i), b(i+j){
        // test(int i, int j) : a(i), b(2*j){
        // test(int i, int j) : a(i), b(a+j){
        test(int i, int j) : b(j), a(i){    //!Red flag this throw an error........
            cout << "Constructor executed" << endl;
            cout << "Value of a is " << a << endl;
            cout << "Value of b is " << b << endl;
        }
};
int main(int argc, char const *argv[])
{
    test obj(1, 2);
    return 0;
}