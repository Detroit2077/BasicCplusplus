#include<iostream>
using namespace std;
class Number{
    int a, b;
    public:
        Number(){
            a = 0;
            b = 7;
        }
        Number(int x, int y)
        {
            a = x;
            // cout<<&a<<" and "<<&b<<endl;
            b = y;
        }
        // Complier stablises a default copy constructor if user has not constructed any
        Number(Number &obj){
            cout<<"copy constructor called:"<<endl;
            a = obj.a;
            b = obj.b;
            // cout<<&a<<" and "<<&b<<endl;
        }
        void display(){
            cout<<a<<" and "<<b<<endl;
        }
};
int main()
{
    Number o(4, 5), o1;
    // Number y;
    o.display();
    Number y = Number(o); //copy constructor called
    y.display();

    o1 = o;//copy constructor not called
    o1.display();

    Number o2 = o;//copy constructor called
    o2.display();
    return 0;
}