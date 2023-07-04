#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    try{
        if(a==0){
            throw 1;
        }
        if(a==1){
            throw 2;
        }
        if(a==2){
            throw 3;
        }
    }   
    catch(int i){
        throw;
    }
    return 0;
}