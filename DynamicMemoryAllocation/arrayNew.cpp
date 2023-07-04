#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the size of array you want:";
    cin>>n;
    int *ptr = new int[n];
    cout<<"Enter the number in the array:"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<i<<": ";
        cin>>ptr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<*(ptr+i)<<", ";
    }
    cout<<endl<<sizeof(ptr);//this line will not work as expected
    delete [] ptr;
    return 0;
}