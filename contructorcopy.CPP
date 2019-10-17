/*WAP to pass an object to constructor and carry out copy
  constructor.Display contents of all the objects.*/
#include<iostream>

using namespace std;

class abc
{
  public:
   int a;
   int b;
   abc(void)
  {
   a=0;
   b=0;
  }
  abc(abc &);
};

 abc::abc(abc &a3)
{
    a3.a=2;
    a3.b=3;
}

int main()
{
  abc a1;
  cout<<"Value before coping\n";
  cout<<a1.a<<"\n";
  cout<<a1.b<<"\n";
  abc a2(a1);
  cout<<"Value after copying\n";
  cout<<a1.a<<"\n";
  cout<<a1.b<<"\n";
  return 0;
}
