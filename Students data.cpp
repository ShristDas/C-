#include<iostream>
#include<string>

using namespace std;

struct stud{
	int roll,marks;
	char name[50];
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
		cout<<"Enter ID = ";
		cin>>e[i].roll;
		cout<<endl;
		
		cout<<"Enter name  = ";
		cin>>e[i].name;
		cout<<endl;
		
		cout<<"Enter marks = ";
		cin>>e[i].marks;
		cout<<endl;
	}
	
	cout<<"ID			"<<"Name			"<<"Marks"<<endl<<endl;
	
	for(j=1;j<=n;j++)
	{
		cout<<e[j].roll<<"			"<<e[j].name<<"			"<<e[j].marks<<endl;
	}
	
}
