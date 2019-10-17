/*WAP to overload ++ and -- operator for prefix and postfix use.*/
#include<iostream>

using namespace std;

class compute
{
  int a;
  public:
  compute()
  {
    a=0;
  }
  compute(int c)
  {
    a=c;
  }
  void operator--()
  {
    a=--a;
  }
  void operator++()
  {
    a=++a;
  }
  void display()
  {
    cout<<a<<"\n";
  }
};

int main()
{
  int d;
  cout<<"Enter a number\n";
  cin>>d;
  compute c3(d),c4(d);
  --c3;
  ++c4;
  cout<<"The result of prefix -- is:";
  c3.display();
  cout<<"The result of prefix ++ is:";
  c4.display();
  return 0;
}
