#include<iostream>
#include<exception>
#include<new>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    cout<<"Enter two number:";
    cin>>a>>b;
    try{
        if (b==0)
        {
            throw exception("Attempted to divide by zero");
        }       
        int c = a/b;
    }
    catch(exception& e){
        cerr<<"Exception occured: "<<e.what()<<endl;
    }
    return 0;
}