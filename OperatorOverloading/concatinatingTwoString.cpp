// However, there is an error in your code that can cause a program crash. In the operator+ function, you use the strcat function to concatenate the name strings. However, the name member of a MyClass object is of type string, not a null-terminated character array. Therefore, you should use the + operator or the append function of the std::string class to concatenate the name strings instead.

#include<iostream>
#include<string>
using namespace std;
class MyClass{
    public:
        string name;
        void setName(string x){
            name = x;
        }
        void displayName(void){
            cout<<name<<endl;
        }
        MyClass operator+(MyClass& z){
            MyClass obj;
            obj.name = name + z.name;
            return obj;
        }
};
int main(int argc, char const *argv[])
{
    MyClass o1, o2, o3;
    o1.setName("Abhishek");
    o2.setName(" Raj");
    o3 = o1 + o2;
    o3.displayName();
    return 0;
}