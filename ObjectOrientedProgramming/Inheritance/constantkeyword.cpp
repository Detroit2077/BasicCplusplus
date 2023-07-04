#include<iostream>
using namespace std;
void printNumber(const int num){
    cout <<"The value of num is "<<num<<endl;
    ++num;
    cout <<"The value of num is "<<num<<endl;
}
int main(int argc, char const *argv[]){
    printNumber(4);
    return 0;
}