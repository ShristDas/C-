/*Write a function to show the arithmetic operation using
  two variable*/
#include <iostream>
using namespace std;

void calc(int, int);

int main()
{
	int a, b;

	cout<<"Enter any two integers:- \n"<<endl;

	cout<<"First integer- ";
	cin>>a;
	cout<<"Second integer- ";
	cin>>b;

	cout<<"\nThe various simple arithmetic operations possible on the two integers with entered values are:- \n";
	cout<<endl;

	calc(a, b);

	return 0;
}

void calc(int x, int y)
{
	cout<<"1.	Addition (a+b) = "<<x+y<<endl;

	cout<<"2.	Subtraction (a-b) = "<<x-y<<endl;

	cout<<"3.	Multiplication (a*b) = "<<x*y<<endl;

	cout<<"4.	Division (a/b) = "<<x/y<<endl;

	cout<<"5.	Modular Division (a%b) = "<<x%y<<endl;
}
