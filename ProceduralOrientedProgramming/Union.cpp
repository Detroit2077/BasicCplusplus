#include<iostream>
using namespace std;
union Abhishek
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    union Abhishek e1;
    cout<<sizeof(Abhishek)<<endl;
    // e1.rice = 45;
    e1.pounds = 34.098898;
    e1.car = 's';

    cout<<e1.car<<endl;
    cout<<e1.pounds<<endl;
    // cout<<e1.rice<<endl;
    
    return 0;
}