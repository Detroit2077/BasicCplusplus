#include<iostream>
using namespace std;
int main()
{
    int marks[4] = {23, 56 ,78, 92};
    int* p = &marks[0];
    for (int i = 0; i < 4; i++)
    {
        cout<<"The address of marks["<<i<<"] is "<<p+i<<endl;
        cout<<"The value of marks["<<i<<"] is "<<*(p+i)<<endl;
    }


    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    
    return 0;
}