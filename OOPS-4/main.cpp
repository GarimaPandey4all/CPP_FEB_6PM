#include <iostream>

using namespace std;
//
//Encapsulation: Wrap all the variables and methods into a single unit.
//e.g: class

//Good / Secure Encapsulation: Encapsulation + Data Hiding

class Account {

private: // Data security or Data Hiding
    int accBalance, accPin;

public:
//    int accBalance, int accPin : Local variables
    void setData(int accBalance, int accPin) // parameterized method
    {
//        instance variable = local variable
        this->accBalance = accBalance;
        this->accPin = accPin;
    }

    void getData()
    {
        cout<<accBalance<<" "<<accPin<<endl;
    }
};

//this = account
//this keyword: it can hold current object's address

int main()
{
    Account account;

    account.setData(1200, 45);
    account.getData();

    return 0;
}
