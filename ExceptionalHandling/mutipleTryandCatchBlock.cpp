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
        else if(a==1){
            throw (float)4.5;
        }
        else if(a==2){
            throw 'a';
        }
    }
    catch(int e){
        cout<<"Exception: "<<e<<endl;
    }
    catch(float e){
        cout<<"Exception: "<<e<<endl;
    }
    catch(char e){
        cout<<"Exception: "<<e<<endl;
    }
    
    return 0;
}