#include<iostream>
using namespace std;
class ShopItem{
        int ID;
        float price;
    public:
        void setData(int a, float b);
        void displayData(void);
};
void ShopItem::setData(int a, float b){
    ID = a;
    price = b;
}
void ShopItem::displayData(){
    cout<<"The ID and Price of Item is "<<ID<<" and "<<price<<endl;
}
int main(int argc, char const *argv[])
{
    int size = 3;
    int p;
    float q;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrItem = ptr; // ptrItem is a pointer to the first element of the array of objects
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the ID and Price of Item "<<i+1<<": ";
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
        cout<<"Item number "<<j+1<<endl;
        ptrItem->displayData();
        ptrItem++;
    }
    return 0;
}