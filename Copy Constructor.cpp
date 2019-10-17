#include <iostream>

using namespace std;

class A
{
    int id;

	public:

	A()
	{
	    id=6;
	}

	A(A &x)
	{
		id = x.id;
	}

	display()
	{
		cout<<"The id is: "<<id<<endl;
	}
};

int main()
{
	A a;
	A b = a;

	a.display();
	b.display();
	return 1;
}
