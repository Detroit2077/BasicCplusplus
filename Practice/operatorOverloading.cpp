#include<iostream>
using namespace std;
class number {
    private:
    public:
    int a;
    void set(int a) {
        this->a=a;
    }
    void display(void) {
        cout<<"The value of a is "<<a<<endl;
    }
    number operator+(number &obj) {
        number u;
        u.a = a + obj.a;
        return u; 
    }
    number& operator++() {
        ++a;
        return *this;
    }
    number &operator++(int) {
        a++;
        return *this;
    }
};
int main(int argc, char const *argv[])
{
    number e, t, y;
    e.set(10);
    y.set(10);
    t = e + y;
    t.display();
    t++;
    t.display();
    ++t;
    t.display();
    // t.a++;
    // t.display();
    return 0;
}