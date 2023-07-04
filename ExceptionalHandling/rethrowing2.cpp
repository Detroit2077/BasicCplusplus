#include<iostream>
using namespace std;
void foo(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    try{
        if(a==0){
            throw 2;
        }
        else if(a==1){
            throw (float)3.4;
        }
        else if(a==2){
            throw 'a';
        }
    }
    catch(...){
        throw;
    }

}
int main(int argc, char const *argv[])
{
    try{
        foo();
    }
    catch(...){
        cout<<"Exception Occured: "<<endl;
    }
    return 0;
}