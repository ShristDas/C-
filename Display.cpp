#include <iostream>

using namespace std;

class sample
{
	int a,b;

	public:

	sample()
	{
		a = 0;
		b = 0;
	}

	sample(int x, int y)
	{
		a = x;
		b = y;
	}

	display()
	{
		cout<<"\nValue of a: "<<a<<" b: "<<b;
	}
};

int main()
{
	sample A;
	A.display();
    A = sample(4,5);
	A.display();
	return 1;
}
