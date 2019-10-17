#include <iostream>
#include <string>

using namespace std;

class bank
{
	char name[50];
	long accno;
	float balance;

	public:

	bank()
	{
		balance = 0;
		accno = 0;
	}

	float return_balance()
	{
	    return balance;
	}

	void getdata()
	{
		cout<<"\nEnter the name of the account holder: ";
        cin>>name;
		accno = 1;
	}

	void deposit(int amt)
	{
		balance += amt;
		cout<<"\nBalance in account: "<<return_balance();
	}

	void withdraw(int amt)
	{
		if(balance>amt)
        {
            balance -= amt;
            cout<<"\nRemaining balance is: "<<return_balance();
        }
		else
			cout<<"\nInsufficient balance!!";
	}

	void display()
	{
		cout<<"\nYour account details are as follows: \n";
		cout<<"\nName: "<<name;
		cout<<"\nBalance: "<<return_balance();
	}
};

int main()
{
	bank b1;
	float amount;

	b1.getdata();
	cout<<"\nEnter the amount to be deposited: ";
	cin>>amount;
	b1.deposit(amount);
	cout<<"\nEnter the amount to be withdrawn: ";
	cin>>amount;
	b1.withdraw(amount);
	b1.display();

	return 0;
}
