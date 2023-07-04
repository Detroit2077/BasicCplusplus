#include<iostream>
#include<cmath>
using namespace std;

class pointer
{
    int a, b, c, d;
    public:
        // pointer(){};
        pointer(int x, int y, int r, int w)
        {
            a = x;
            b = y;
            c = r;
            d = w;
        }
        void print_points();
        float distance_between_points();
};
void pointer :: print_points()
{
    cout << "The points are ("<< a<<"," <<b<<")" << " and " << "(" << c << "," << d << ")" <<endl;
}
float pointer :: distance_between_points()
{
    int w = pow(c-a, 2);
    int r = pow(d-b, 2);
    int t = w + r;
    return pow(t, 0.5);
}
int main()
{
    pointer o1(2, 3, 1, 2);
    o1.print_points();
    cout << o1.distance_between_points();
    return 0;
}