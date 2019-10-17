/*Write a class to represent a vector(a series of float values).Include member functions
  to perform the following tasks:
  1.To create the vector.
  2.to modify the value of the given element.
  3.To multiply by scalar value.
  4.To display the vector in the form(10,20,30...).*/
#include <iostream>
using namespace std;

class vector
{
	float arr[80];
	int n;

	public:

		void create();
		void modify();
		void multiply();
		void display();
};

void vector :: create()
{
	int i;

	cout << "Enter the total no. of elements you want in the array- ";
	cin >> n;
	cout << "Enter the elements of the array- ";

	for(i = 0; i < n; ++i)
		cin >> arr[i];
}

void vector :: modify()
{
	int i;
	float temp, item;

	cout << "Enter the value of the element to be changed- ";
	cin >> temp;
	cout << "Enter the element to be replaced at its place- ";
	cin >> item;

	for(i = 0; i < n; ++i)
		if(arr[i] == temp)
			arr[i] = item;
}

void vector :: multiply()
{
	int i;
	float factor;

	cout << "Enter the scalar value by which the array is to be multiplied- ";
	cin >> factor;

	for(i = 0; i < n; ++i)
		arr[i] *= factor;
}

void vector :: display()
{
	int i;

	cout << "The array in listed form is- ";
	cout << "\n(";

	for(i = 0; i < (n-1); ++i)
		cout << arr[i] << " ,";

	cout << arr[n-1] << ")";
}

int main()
{
    vector v;

    v.create();
    v.modify();
    v.multiply();
    v.display();

    return 0;
}
