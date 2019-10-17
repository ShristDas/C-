/*Create two classes DM and DB which store the value of distances in
  meters and centimeters.and DB in feet and inches.WAP that can read
  values for the class objects and one object of DM to another object of DB*/

#include <iostream>
using namespace std;

class DB;

class DM
{
	float m;
	float cm;

	public:

		void read();
		friend void add(DM, DB);
		void display();
};

class DB
{
	float feet;
	float inch;

	public:

		void read();
		friend void add(DM, DB);
		void display();
};

void add(DM a, DB b)
{
	int ch;

	cout << "In what format is the result to be calculated?";
	cout << "\n1.	Meters and Centimeters";
	cout << "\n2.	Feets and Inches";
	cout << "\nEnter your choice (1/2)- ";
	cin >> ch;

	if(ch == 1)
	{
		DM A;

		int i = a.m * 100 + a.cm + b.feet * 30.48 + b.inch * 2.54;

		if(i >= 100)
		{
			A.m = i / 100;
			A.cm = i % 100;
		}

		else
		{
			A.m = 0;
			A.cm = i;
		}

		A.display();
	}

	else if(ch == 2)
	{
		DB B;

		int j = a.m * 39.37 + a.cm * 0.394 + b.feet * 12 + b.inch;

		if(j >= 12)
		{
			B.feet = j / 12;
			B.inch = j % 12;
		}

		else
		{
			B.feet = 0;
			B.inch = j;
		}

		B.display();
	}
}

void DM :: read()
{
	cout << "Enter the first distance in metres-centimeters- ";
	cin >> m >> cm;
}

void DB :: read()
{
	cout << "Enter the second distance in feets-inches- ";
	cin >> feet >> inch;
}

void DM :: display()
{
	cout << "The result of the addition is- ";
	cout << m << " m " << cm << " cm";
	cout << endl;
}

void DB :: display()
{
	cout << "The result of the addition is- ";
	cout << feet << " feet " << inch << " inch";
	cout << endl;
}

int main()
{
	DM x;
	DB y;

	x.read();
	y.read();

	add(x, y);

	return 0;
}
