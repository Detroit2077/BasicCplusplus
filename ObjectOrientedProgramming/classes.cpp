#include<iostream>
using namespace std;

class employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1);
        void getData()
        {
            cout << "The value of a is "<< a <<endl;
            cout << "The value of b is "<< b <<endl;
            cout << "The value of c is "<< c <<endl;
            cout << "The value of d is "<< d <<endl;
            cout << "The value of e is "<< e <<endl;
        }
};
void employee :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee abhishek;
    // abhishek.a = 78; CAN'T ACCESS THIS BECAUSE OF THE PRIVATE DATA
    // abhishek.d = 56; IT CAN BE ACCESS BECAUSE OF IT IS PUBLIC DATA
    abhishek.e = 34;
    abhishek.setData(4, 5, 6);
    abhishek.getData();
    return 0;
}