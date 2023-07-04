//write a program to show an application of vector in c++

#include<iostream>
#include<vector>
using namespace std;

int main() {    
    vector<int> v; //creating vector of integer type    

    v.push_back(10); //pushing elements into vector    
    v.push_back(20);    
    v.push_back(30);    
    v.push_back(40);    
    v.push_back(50);    
    //using iterator to print the values    
    vector<int>::iterator itr=v.begin();

    while(itr!=v.end()) {    
        cout<<*itr<<" ";    
        itr++;    
    }

    return 0;
}