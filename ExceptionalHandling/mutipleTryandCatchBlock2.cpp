#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    try{
        if(a==1){
            throw 4;
        }
        if(a==2){
            throw (float)6.7;
        }
        if (a==3){
            throw 'a';
        }
    }
    catch(...){
        cout<<"Some Exception Occured: 'Error'"<<endl;
    }
    return 0;
}