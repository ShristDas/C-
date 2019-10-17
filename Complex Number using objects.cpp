#include <iostream>

using namespace std;

class Complex
{
	int re, img;

	public:

	void getdata()
	{
		cout<<"Real part of Complex number: ";
		cin>>re;
		cout<<"Imaginary part of the Complex number: ";
		cin>>img;
	}

	void add(Complex num1,Complex num2)
	{
	    re = re.num1 + re.num2;
	    img = img.num1 + img.num2;
		cout<<"Sum of the  two given Complex number is: "<<re<<" + i"<<img;
	}
};

int main()
{
	Complex c1,c2,c3;

	c1.getdata();
	c2.getdata();

	c3.add(c1,c2);
	return 0;
}
