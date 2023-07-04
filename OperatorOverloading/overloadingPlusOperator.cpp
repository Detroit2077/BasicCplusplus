#include<iostream>
using namespace std;
class Myclass{
    public:
        int x, y;
        void setData(int a, int b){
            x = a;
            y = b;
        }
        Myclass operator+(Myclass& c){
            Myclass temp;
            temp.x = x + c.x;
            temp.y = y + c.y;
            return temp;
        }
};
int main(int argc, char const *argv[])
{
    Myclass o1, o2, o3;
    o1.setData(3, 4);
    o2.setData(5, 6);
    o3 = o1 + o2;
    cout<<o3.x<<endl;
    cout<<o3.y<<endl;
    return 0;
}