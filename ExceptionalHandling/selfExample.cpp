#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    try{
        if(b!=0){
            c = a/b;
            cout<<"Result: "<<c<<endl;
        }
        else{
            throw b;
        }
    }
    catch(int b){
        cout<<"Division by "<<b<<endl;
    }
    return 0;
}