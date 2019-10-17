#include <iostream>

using namespace std;

class sample
{
	int a,b,c;

	public:

	sample()
	{
		a = 0;
		b = 0;
		c = 0;
	}

	sample(int x)
	{
		a = x;
		b = 0;
		c = 0;
	}

	sample(int x, int y)
	{
		a = x;
		b = y;
		c = 0;
	}

	sample(int x,int y,int z)
	{
		a = x;
		b = y;
		c = z;
	}

	void display()
	{
		cout<<"\nValue of a: "<<a<<" b: "<<b<<" c: "<<c;
	}

	~sample()
	{
	    cout<<"\nObject Destructed!";
	}
};

int main()
{
	sample t1;
	sample t2(5);
	sample t3(5,6);
	sample t4(5,6,7);

	t1.display();
	t2.display();
	t3.display();
	t4.display();
	return 1;
}
