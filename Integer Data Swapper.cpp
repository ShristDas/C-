/*WAP to swap two integer data of different class using
  friend function.*/
#include <iostream>
using namespace std;

class B;

class A
{
	int x;

	public:

		A(int p)
		{
			x = p;
		}

		friend void swap(A *i, B *j);

		void display()
		{
			cout << x;
		}
};

class B
{
	int y;

	public:

		B(int q)
		{
			y = q;
		}

		friend void swap(A *i, B *j);

		void display()
		{
			cout << y;
		}
};

void swap(A *i, B *j)
{
	i->x = i->x + j->y;
	j->y = i->x - j->y;
	i->x = i->x - j->y;
}

int main()
{
	int m, n;

	cout << "Enter the value of the first integer- ";
	cin >> m;
	cout << "Enter the value of the second integer- ";
	cin >> n;

	A a(m);
	B b(n);

	cout << "\nThe initial values of the entered integers are:-";
	cout << "\nx = "<<m;
	cout << "\ny = "<<n;

	swap(&a, &b);

	cout << "\n\nThe final values of the integers after swapping are:-";
	cout << "\nx = ";
	a.display();
	cout << "\ny = ";
	b.display();

	cout << endl;

	return 0;
}
