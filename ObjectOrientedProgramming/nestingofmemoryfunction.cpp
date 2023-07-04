#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_Binary(void);

public:
    void getBinary(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::getBinary()
{
    cout << "Enter a Binary number" << endl;
    cin >> s;
}
void binary ::ones_compliment()
{
    chk_Binary();
    cout << "After the ones compliment binary is: -- " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::chk_Binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.getBinary();
    // b.display();
    // b.chk_Binary(); CANNOT BE ACCESSED BECAUSE OF FUNCTIOB EXIST IN PRIVATE
    b.ones_compliment();
    b.display();

    return 0;
}