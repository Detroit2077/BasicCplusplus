#include<iostream>
using namespace std;
void swap(const int& a, const int& b){
    int temp = a;
    a = b;
    b = temp;
}
int main(int argc, char const *argv[])
{
    int x, y;
    x = 45;
    y = 67;
    swap(x, y);
    cout<<"The value of x and y is :"<<x<<"and"<<y<<endl;
    return 0;
}