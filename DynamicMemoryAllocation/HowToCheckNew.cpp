// cerr is similar to cout, but it is used specifically for error messages and is typically used for outputting diagnostic information during program execution. The main difference between cerr and cout is that cerr is not buffered, which means that the output is immediately written to the console, whereas cout is buffered, which means that the output is stored in a buffer until it is flushed.
#include<iostream>
#include<exception>
#include<new>
using namespace std;
int main(int argc, char const *argv[])
{
    int *arr;
    int a;
    try{
        arr = new int[10];
    }
    catch(exception& ba){
        cerr<<"Error: "<<ba.what()<<endl;
        return 1;
    }
    for (int i = 0; i < 10; i++){
        arr[i] = i + 1;
    }
    delete[] arr;
    return 0;
}