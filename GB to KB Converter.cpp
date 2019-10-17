/*WAP to convert GB to KB*/
#include <iostream>
using namespace std;

int main()
{
	unsigned long int GB, KB_1, KB_2;

	cout<<"Enter the size in GB- ";
	cin>>GB;

	KB_1= GB * 1000000;
	KB_2= GB * 1048576;

	cout<<"\nThe equivalent KB size 'in decimal' is- "<<KB_1<<" KB.";
	cout<<"\nThe equivalent KB size 'in binary' is- "<<KB_2<<" KB.";

	cout<<endl;

	return 0;
}
