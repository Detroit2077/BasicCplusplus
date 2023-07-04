#include<iostream>
using namespace std;

int sum(){
    static int c = 0;
    c = c + 1;
    return c;
}
int main(){
    cout << sum();
    cout << sum();
    cout << sum();
    return 0;
}