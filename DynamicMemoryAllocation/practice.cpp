#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int *arr[5];
    *arr[0] = 10;
    *arr[1] = 20;
    *arr[2] = 30;
    cout<<*arr[0]<<endl;
    return 0;
}