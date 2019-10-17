#include<iostream>

using namespace std;

class abc
{
  int a;
  public:
  abc(int c)
  {
    a=c;
  }
  void operator ==(abc const &obj)
  {
    if(a==obj.a)
    cout<<"Equal";
    else
    cout<<"Unequal";
  }
 };

  int main()
  {
    int c,d;
    cout<<"Enter the values"<<endl;
    cin>>c>>d;
    abc c1(c),c2(d);
    c1==c2;
    return 0;
  }
