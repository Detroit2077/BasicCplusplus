#include<iostream>
using namespace std;

float moneyRecived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}
int main()
{

    int money = 100000;
    cout << "If you have " << money << " you will recieve " << moneyRecived(money) << endl;
    cout << "For VIP: If you have " << money << " you will recieve " << moneyRecived(money, 1.1) << endl;

    return 0;
}