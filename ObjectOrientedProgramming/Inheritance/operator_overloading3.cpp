#include <iostream>
using namespace std;

class MyClass {
  int x;
public:
  MyClass() : x(0) {}
  MyClass(int val) : x(val) {}

  friend ostream& operator<<(ostream& os, const MyClass& obj) {
    os << obj.x;
    return os;
  }

  friend istream& operator>>(istream& is, MyClass& obj) {
    is >> obj.x;
    return is;
  }
};

int main() {
  MyClass obj1(42);
  cout << obj1 << endl;

  MyClass obj2;
  cin >> obj2;
  cout << obj2 << endl;

  return 0;
}
