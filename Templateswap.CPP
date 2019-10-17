/*WAP to create a template function to swap two numeric variables*/
#include<iostream>

using namespace std;

template<typename T>

void sw(T &x, T&y)
{
  T temp=x;
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
  cout<<"The values of a and b before swapping"<<"a="<<a<<"b="<<b<<"\n";
  sw(a,b);
  cout<<"The values of a and b after swapping"<<"a="<<a<<"b="<<b<<"\n";
  cout<<"The values of c and d before swapping"<<"c="<<c<<"d="<<d<<"\n";
  sw(c,d);
  cout<<"The values of c and d after swapping"<<"c="<<c<<"d="<<d<<"\n";
  return 0;
}
