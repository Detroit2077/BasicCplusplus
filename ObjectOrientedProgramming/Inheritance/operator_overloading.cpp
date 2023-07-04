/*Exception of operator Overloading is:
1. Scope resolution ::
2. Class member access operator(.,*)
3. Size of operator (sizeof)
4. Conditional Operator(?:)
*/
#include<iostream>
using namespace std;
class demo{
    int a;
    public:
    void get_data(){
        cout<<"Enter a number: "; 
        cin>>a;
    }
    void displaydata(){cout<<"The number is : "<<a<<endl;}
    demo operator-(demo bb){
        demo cc;
        cc.a = a - bb.a;
        return cc;
    }
};
int main(int argc, char const *argv[])
{
    demo a, b;
    a.get_data();//a.displaydata();
    b.get_data();//b.displaydata();
    demo c = a - b;
    c.displaydata();
    return 0;
}