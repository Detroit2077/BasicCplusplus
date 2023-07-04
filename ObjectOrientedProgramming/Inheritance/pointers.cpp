#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int *p = new int(23);
    // delete p;
    cout << *p << endl;

    int *arr = new int[5];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;
    cout<<"Enter numbers in array:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<i<<": ";
        cin>>arr[i];
    }
    
    // delete[] arr;
    cout << *arr <<endl;
    cout << (arr) <<endl;
    cout << (arr+1) <<endl;
    return 0;
}