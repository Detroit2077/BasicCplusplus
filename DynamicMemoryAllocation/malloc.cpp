#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int*ptr = (int*)malloc(10*sizeof(int));
    cout<<"Enter the numbers in the array:"<<endl;

    for (int i = 0; i < 10; i++)
    {
        cout<<i<<": ";
        cin>>ptr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<*(ptr+i)<<", ";
    }
    
    return 0;
}