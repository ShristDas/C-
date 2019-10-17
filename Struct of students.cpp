#include<iostream>

using namespace std;

struct student
{
	int id;
	char name[25];
	int age;
};

int main()
{
	student s[5];
    char n[25];
	for(int i=0;i<5;i++)
	{
		cout<<"\nEnter the id of student: ";
		cin>>s[i].id;
		cout<<"\nEnter the name of the student: ";
		cin>>s[i].name;
		cout<<"\nEnter the age of student: ";
		cin>>s[i].age;
	}
	for(int i=0;i<5;i++)
	{
		cout<<"\nName: "<<s[i].name;
		cout<<"\nId: "<<s[i].id;
		cout<<"\nAge: "<<s[i].age;
	}

	return 0;
}
