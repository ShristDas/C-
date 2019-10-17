/*WAP to overload < operator and display the smallest number out of two
  objects.*/
#include<iostream>

using namespace std;

class small
{
  int a;
  public:
  small()
  {
     a=0;
  }
  small(int c)
  {
     a=c;
  }
  small operator <(small &obj1)
  {
    small res;
    if(a<obj1.a)
    res.a=a;
    else
    res.a=obj1.a;
    return res;
  }
  void print()
  {
    cout<<a;
  }
};

int main()
{
  int c,d;
  cout<<"Enter the values";
  cin>>c>>d;
  small c1(c),c2(d);
  small c3=c1<c2;
  c3.print();
  return 0;
}
