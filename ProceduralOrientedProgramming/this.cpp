#include<iostream>
using namespace std;
class myClass{
    private:
    int x;
    public:
    void set(int x) {
        this->x=x;
    }
    void display() {
        cout<<x<<endl;
    }
};
int main(int argc, char const *argv[])
{
    myClass obj;
    obj.set(5);
    obj.display();
    return 0;
}