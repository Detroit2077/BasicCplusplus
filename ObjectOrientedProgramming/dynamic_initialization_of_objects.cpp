#include<iostream>
using namespace std;
class BankDeposit{
        int principle, time;
        float rate;
        float simple_interest;
        float return_value;
    public:
        BankDeposit();
        BankDeposit(int p, double r, int t);
        BankDeposit(int p, int r, int t);
};
BankDeposit :: BankDeposit(int p, double r, int t){
    principle = p;
    time = t;
    rate = r;
    cout<<"it's me"<<endl;
    simple_interest = (p*r*t);
    cout<<simple_interest<<endl;
    return_value = simple_interest + principle;
    cout<<return_value;
}
BankDeposit :: BankDeposit(int p, int r, int t){
    principle = p;
    time = t;
    rate = r;
    // cout<<simple_interest<<endl;
    cout<<"it's me 2"<<endl;
    return_value = principle;
    for (int i = 1; i <= t; i++)
    {
        simple_interest = (return_value*r)/100;
        return_value = return_value + simple_interest;
    }
    cout << return_value;
}
int main()
{
    BankDeposit o1(100, 3, 2);
    return 0;
}