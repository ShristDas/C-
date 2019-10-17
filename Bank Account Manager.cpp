/*WAP to define a class to represent a bank account
  which includes name of depositor,bank account,type of account,balance amount
  and functions like withdraw,deposit,display name and balance*/
#include <iostream>
using namespace std;

class bank_account
{
    string depositer_name;
    unsigned long int account_no;
    string account_type;
    unsigned long int balance_amount;

    public:

        void deposit(unsigned long int, unsigned long int);
        void withdraw(unsigned long int, unsigned long int);
        void display();
};

void bank_account :: deposit(unsigned long int balance_amount, unsigned long int deposit_amount)
{
    balance_amount += deposit_amount;
}

void bank_account :: withdraw(unsigned long int balance_amount, unsigned long int withdraw_amount)
{
    balance_amount -= withdraw_amount;
}

void bank_account :: display()
{
    cout<<depositer_name;
    cout<<balance_amount;
}
