// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int x = 50;
//     int *ptr = &x;
//     int fuck = *ptr;
//     cout<<*ptr<<endl;
//     cout<<fuck;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int *ptr = new int[10];
    cout<<"Enter the numbers in the array:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<i<<": ";
        cin>>ptr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<ptr[i]<<;
    }
    
    return 0;
}