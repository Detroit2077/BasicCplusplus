#include <iostream>
using namespace std;
class MyClass {
    int value;

public:
    MyClass(int val) : value(val) {}

    // Overloading << operator as a friend function for output
    friend ostream& operator<<(ostream& os, const MyClass& obj) {
        os << "Value: " << obj.value;
        return os;
    }

    // Overloading >> operator as a friend function for input
    friend istream& operator>>(istream& is, MyClass& obj) {
        is >> obj.value;
        return is;
    }
};

int main() {
    MyClass obj(42);

    // Output using overloaded << operator
    cout << obj << endl;

    // Input using overloaded >> operator
    cout << "Enter a value: ";
    cin >> obj;

    // Output the updated value
    cout << obj << endl;

    return 0;
}