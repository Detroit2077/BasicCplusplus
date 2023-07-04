#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int *ptr = new int[6];
    cout<<"Enter the number in array:";
    for (int i = 0; i < 6; i++)
    {
        cin>>ptr[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<*(ptr+i)<<endl;
    }
    delete[] ptr;
    return 0;
}