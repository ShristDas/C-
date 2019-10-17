#include<iostream>

using namespace std;

template<typename A>

void sw(A &x, A&y)
{
    A temp=x;
    x=y;
    y=temp;
}

int main()
{
  int a,b;
  float c,d;
  cout<<"Enter the two integer values\n";
  cin>>a>>b;
  cout<<"Enter two float values\n";
  cin>>c>>d;
  cout<<"Before swapping"<<"\t"<<"a="<<a<<"\t"<<"b="<<b<<endl;
  sw(a,b);
  cout<<"After swapping"<<"\t"<<"a="<<a<<"\t"<<"b="<<b<<endl;
  cout<<"Before swapping"<<"\t"<<"c="<<c<<"\t"<<"d="<<d<<endl;
  sw(c,d);
  cout<<"After swapping"<<"\t"<<"c="<<c<<"\t"<<"d="<<d<<endl;
  return 0;
}

