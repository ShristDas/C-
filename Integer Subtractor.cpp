#include <iostream>
using namespace std;

class A
{
	int a;
	int b;

	public:

		void Read()
		{
			cout << "Enter the value of first integer- ";
			cin >> a;
			cout << "Enter the value of second integer- ";
			cin >> b;
		}

		void Sub(A x)
		{
			cout << "\nThe difference between the two entered integers is- " << x.a - x.b;
			cout << endl;
		}
};

int main()
{
	A i;

	i.Read();
	i.Sub(i);

	return 0;
}
