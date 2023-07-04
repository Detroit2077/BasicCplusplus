#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}
inline int volume(float r, float h){
    return 3.14 * (r*r) * h;
}
inline int volume(float r){
    return (r*r) * r;
}
int main()
{
    cout << add(4,5)<< endl;
    cout << add(4, 5, 6)<< endl;

    cout << volume(2, 7)<< endl;
    cout << volume(4);
    return 0;
}