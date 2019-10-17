#include <iostream>

using namespace std;

class item
{
	int num;

	int function()
	{
		return num;
	}

	public:

	item()
	{
		num = 50;
	}

	int getnum()
	{
		int number;
		number = function();
		return number;
	}
};

int main()
{
	int amount;
	item i1;
	amount = i1.getnum();
	cout<<"The number was: "<<amount;
}
