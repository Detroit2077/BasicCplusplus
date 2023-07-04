#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[4];
    int *ptr = &arr[0];
    cout<<"Enter the numbers in the array: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<i<<": ";
        cin>>ptr[i];

    }

    for (int i = 0; i < 4; i++)
    {
        cout<<*(ptr+i)<<", ";
    }
    return 0;
}