#include<iostream>
using namespace std;

int main()
{
    enum Meal{Breakfast, Lunch, Dinner};
    Meal m1 = Lunch;
    cout << m1<<endl;

    cout<<(m1==1)<<endl;
    cout << Breakfast<< endl;
    cout << Lunch<< endl;
    cout << Dinner<< endl;
    
    return 0;
}