#include <iostream>

using namespace std;

class A
{
	public:
	int num;
	void display()
	{
		cout<<"\nObject A is: "<<num;
	}

	A operator < (A a)
	{
		A res;
		if(num < a.num)
		{
			res.num = num;
			return res;
		}
		else
		{
			res.num = a.num;
			return res;
		}
	} 
};

int main()
{
	A obj,obj1,result;
	obj.num = 2;
	obj1.num = 3;

	obj.display();
	obj1.display();

	result = (obj<obj1);
	cout<<"\nThe smaller among the two is: "<<result.num;
	return 1;
}

