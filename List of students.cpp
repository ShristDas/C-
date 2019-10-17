#include<iostream>

using namespace std;

class stud
{
	int roll,marks;
	char name[50];
	
	public:
		
		void get()
		{
		cout<<"Enter ID = ";
		cin>>roll;
		cout<<endl;
		
		cout<<"Enter name  = ";
		cin>>name;
		cout<<endl;
		
		cout<<"Enter marks = ";
		cin>>marks;
		cout<<endl;
		}
		
		void show()
		{
			cout<<roll<<"			"<<name<<"			"<<marks<<endl;
		}
};

main()
{
	int n,i,j;
	stud e[50];
	
	cout<<"Enter number of students = ";
	cin>>n;
	cout<<endl;
	
	for(i=1;i<=n;i++)
	{
		e[i].get();
	}
	
	cout<<"ID			"<<"Name			"<<"Marks"<<endl<<endl;
	
	for(j=1;j<=n;j++)
	{
		e[j].show();
	}
	return 0;
}
