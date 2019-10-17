/*WAP to declare a class with private data members.
  Accept data through constructor and display data
  with destructor.*/

#include<iostream>

using namespace std;


class abc
{
  int a;
  int b;
  int c;
  public:
  abc(int,int,int);
  ~abc();
};

abc::abc(int c1,int c2,int c3)
{
  a=c1;
  b=c2;
  c=c3;
}
abc::~abc()
{
  cout<<"a="<<a<<"\n";
  cout<<"b="<<b<<"\n";
  cout<<"c="<<c<<"\n";
}
int main()
{
  abc x(10,20,30);
  return 0;
}
