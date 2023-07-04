#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    try{
        if(a==0){
            throw 6;
        }
        else if(a==1){
            throw 7;
        }
        else if(a==2){
            throw 5;
        }
    }
    catch(int e){
        cout<<"Exception Occured1:"<<e<<endl;
    }
    catch(int f){
        cout<<"Exception Occured2:"<<f<<endl;
    }
    return 0;
}