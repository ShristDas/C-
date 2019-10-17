/*Create structure student and display records of
  5 students.*/
#include <iostream>
using namespace std;

struct student
{
	int roll;
	string name;
    float marks;
	char grade;
} A[5];

int main()
{
	int i;

	cout<<"Enter details of the 5 students:- \n"<<endl;

	for(i=0;i<5;i++)
	{
		cout<<"Student No. "<<i+1<<"- \n";

		cout<<"Roll No.- ";
		cin>>A[i].roll;

		cout<<"Name- ";
		cin>>A[i].name;

		cout<<"Marks- ";
		cin>>A[i].marks;

		cout<<"Grade- ";
		cin>>A[i].grade;

		cout<<endl;
	}

	cout<<"The details of the 5 students as entered are as follows:- \n"<<endl;

	cout<<"Student No.      Roll No.      Name        Marks     Grade \n";

	for(i=0;i<5;i++)
    {
        cout<<"     "<<i+1<<"              ";

        cout<<A[i].roll<<"          ";

        cout<<A[i].name<<"        ";

        cout<<A[i].marks<<"	       ";

        cout<<A[i].grade;

        cout<<endl;
    }

	return 0;
}
