#include <iostream>

using namespace std;

class data
{
	int num1=8, num2=5;

	public:

    void getdata()
    {
        cout<<"Enter value for number 1: ";
        cin>>num1;
        cout<<"Enter value for number 2: ";
        cin>>num2;
    }

	void read()
	{
		cout<<"\nNumber 1: "<<num1;
		cout<<"\nNumber 2: "<<num2;
	}

	void mani(data d)
	{
        cout<<"\nDifference between first numbers: "<<num1-d.num1;
	    cout<<"\nDifference between second numbers: "<<num2-d.num2;
	}
};

int main()
{
	data d1,d2;
	d2.getdata();
    d1.read();
    d2.read();
    d2.mani(d1);
}
