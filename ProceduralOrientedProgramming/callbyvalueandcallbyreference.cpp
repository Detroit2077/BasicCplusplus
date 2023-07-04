#include<iostream>
using namespace std;
void swapPointer(int *a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference by using pointers
void swap(int a , int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping the value of variable are " << a << " and " << b << endl;
}

// call by reference using ++ reference variables 
int & swapPointerReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    return b;
}
int main()
{
    int x = 34, y = 56;
    cout << "The value of x and y are " << x <<" and "<< y <<" respectively "<<endl;
    swapPointer(&x, &y);
    cout<<"After swap the value of x and y are " << x <<" and "<< y <<" respectively "<<endl;


    // swap(34, 67); only works when the some integers value are given to the parameters


    swapPointerReference(x, y) = 766;
    cout << "After swapping the value of x and y are " << x << " and " << y << endl;

    return 0;
}