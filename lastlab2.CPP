/*Program to create a class number which takes an integer
  and create a function max to find the greater object value
  between two objects.Use pointers to access the data members
  and returning the object*/
#include<iostream>

using namespace std;

class number
{
  int a;
  public:
  number(int c)
  {
    a=c;
  }
  number max(number d)
  {
    if(a>d.a)
    return *this;
    else
    return d;
  }
  void print()
  {
   cout<<"The greater object is:"<<a;
  }
};

  int main()
  {
    int a1,a2;
    cout<<"Enter the values of two objects:";
    cin>>a1>>a2;
    number c1(a1),c2(a2);
    number c3=c1.max(c2);
    c3.print();
    return 0;
  }
