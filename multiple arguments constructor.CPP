/*WAP to declare a class with three data members. Declare
  overloaded constructors with no arguments,two arguments
  and three arguments.Pass values in the object declaration
  statement.Create four objects and pass values in such a way that the
  entire four constructors are executed.Write appropriate messages in constructor
  and destructor.*/
#include<iostream>

using namespace std;

int count=0;
class abc
{
  int a;
  int b;
  int c;
  public:
  abc()
  {
    a=0;
    b=0;
    c=0;
    count++;
  }
  abc(int);
  abc(int,int);
  abc(int,int,int);
  ~abc();
};

abc::abc(int a1)
{
  a=a1;
  cout<<a<<"\n";
  count++;
}
abc::abc(int a2,int b2)
{
  a=a2;
  b=b2;
  cout<<a<<"\n";
  cout<<b<<"\n";
  count++;
}
abc::abc(int a3,int b3,int c3)
{
  a=a3;
  b=b3;
  c=c3;
  cout<<a<<"\n";
  cout<<b<<"\n";
  cout<<c<<"\n";
  count++;
}
  abc::~abc()
  {
      count--;
     cout<<"The no of objects destroyed are:"<<count<<"\n";
  }
  int main()
  {
    cout<<"Consturctor called with no arguments\n";
    abc a1;
    cout<<"Constructor called with 1 argument"<<"\n";
    abc x(10);
    cout<<"Constructor called with 2 arguments\n";
    abc y(10,20);
    cout<<"Contuctor called with 3 arguments\n";
    abc z(10,20,30);
    return 0;
  }


