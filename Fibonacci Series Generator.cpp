/*Write a recursive function to display fibonacci series.*/
#include <iostream>
using namespace std;

void Fib_Series(int, int, int, int);

int main()
{
	int a, b, n;

	cout<<"Enter the total no. of numbers to be present in the Fibonacci series- ";
	cin>>n;

	cout<<"Enter the starting two integers of the required Fibonacci series:- \n"<<endl;

	cout<<"Enter the first integer- ";
	cin>>a;
	cout<<"Enter the second integer- ";
	cin>>b;

	cout<<"\nThe required Fibonacci series is as follows- \n";
        cout<<endl;

	cout<<a<<", "<<b<<", ";

	Fib_Series(a, b, 2, n);

	return 0;
}

void Fib_Series(int First_Term, int Second_Term, int count, int total)
{
	int Third_Term;

	Third_Term= First_Term + Second_Term;
	First_Term= Second_Term;
	Second_Term= Third_Term;

	++count;

	cout<<Third_Term;

	if(count<total)
	{
		cout<<", ";
		Fib_Series(First_Term, Second_Term, count, total);
	}

	else
	{
		cout<<".";
		cout<<endl;
	}
}
