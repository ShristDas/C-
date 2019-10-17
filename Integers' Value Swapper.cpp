#include <iostream>
using namespace std;

void swap(int &, int &);

int main()
{
    int a, b;

    cout<<"Enter values of the two integers:- \n";
    cout<<endl;

    cout<<"First integer- ";
    cin>>a;

    cout<<"Second integer- ";
    cin>>b;

    cout<<"\nThe initial values of the two integers as entered are:- \n";
    cout<<endl;

    cout<<"a= "<<a<<"\n";
    cout<<"b= "<<b<<"\n";

    swap(a, b);

    cout<<"\nThe values of the two integers after swapping are as follows:- \n";
    cout<<endl;

    cout<<"a= "<<a<<"\n";
    cout<<"b= "<<b<<"\n";

    return 0;
}

void swap(int &x, int &y)
{
    x= x+y;
    y= x-y;
    x= x-y;
}
