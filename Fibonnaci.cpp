#include<iostream>

using namespace std;

fib(int n)
{
	if(n == 0)
	return 0;

	else if (n == 1)
	return 1;

	else
	return (fib(n-1)+fib(n-2));
}

main()
{
	int n,c,i=0;

	cout<<"Enter limit of fibonacci series = ";
	cin>>n;
	cout<<endl;

	cout<<"fibonacci Series = "<<endl;

	for(c=0;c<n;c++)
	{
		cout<<fib(c)<<endl;
	}
}
