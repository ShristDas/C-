/*Create a function to swap the values of two integers
  using reference variables.*/
#include<iostream>

using namespace std;

void swap(int &,int &);
int main()
{
  int a,b;
  cout<<"Enter the value of a and b"<<"\n";
  cin>>a>>b;
  swap(a,b);
  cout<<"The value of after swapping is:"<<"\n";
  cout<<"a="<<a<<"b="<<b<<"\n";
  return 0;
}

  void swap(int &x,int &y)
  {
    int temp;
    temp=x;
    x=y;
    y=temp;
  }

