#include <iostream>
using namespace std;

class SHOP
{
    int itemPrice[100];
    int itemID[100];
    int counter;

public:
    void initPrice(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void SHOP ::setPrice()
{
    cout << "Enter the item ID: " << endl;
    cin >> itemID[counter];
    cout << "Enter the item Price: " << endl;
    cin >> itemPrice[counter];
    counter ++ ;
}

void SHOP ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The item ID number is " << itemID[i] << " and the price of that item is " << itemPrice[i] << endl;
    }
}

int main()
{
    SHOP dukaan;
    dukaan.initPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}