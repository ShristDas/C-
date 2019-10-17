#include <iostream>

using namespace std;

class sample
{
	int a;

	public:

	sample()
	{
	 	cout<<"Enter the value of a: "<<endl;
	 	cin>>a;
	}
	~ sample()
	{
		cout<<"The value of a: "<<a<<endl;
	}
};

int main()
{
	sample A;
	return 1;
}
