#include <iostream>

using namespace std;

class num
{
	public:
	int arr[10],size=0,positive=0,negative=0;

	void getdata()
	{
		cout<<"\nEnter the number of integers: ";
		cin>>size;
		cout<<"\nEnter the integers: ";
		for(int i=0; i<size; i++)
		{
			cin>>arr[i];
		}
	}

	void display()
	{
		for(int i=0; i<size; i++)
		{
			if(arr[i]<0)
				negative++;
			else if(arr[i]==0)
				positive++;
			else
				positive++;
		}

		cout<<"\nPositive numbers: "<<positive;
		cout<<"\nNegative numbers: "<<negative;
	}
};

int main()
{
	num num1;
	num1.getdata();
	num1.display();
	return 0;
}