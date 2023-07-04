#include<iostream>
using namespace std;
class simple
{
    private:
        int a, b, c;
    public:
        simple(int x, int y = 8)
        {
            a = x;
            b = y;
        }
        simple(int x, int y, int z){
            a = x;
            b = y;
            c = z;
        }
        void printnumber();
};
void simple :: printnumber()
{
    cout << "The value of the a and b is " <<a<<" and "<<b<<endl;
}
int main()
{
    simple o1(3);
    o1.printnumber();
    return 0;
}