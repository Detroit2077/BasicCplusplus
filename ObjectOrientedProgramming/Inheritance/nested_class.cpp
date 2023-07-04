#include<iostream>
using namespace std;
class unreal{
    public:
        class engine{
                int a;
            public:
                void set_number(int y){
                    a = y;
                }
                void show(){
                    cout<<a<<endl;
                }
        };
};
int main(int argc, char const *argv[])
{
    unreal::engine obj;
    obj.set_number(5);
    obj.show();
    return 0;
}