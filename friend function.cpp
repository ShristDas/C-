#include<iostream>

using namespace std;

class calc
{
  int a;
  public:
  calc()
  {
    a=0;
  }
  calc(int c)
  {
    a=c;
  }
  friend calc operator *(calc ,int );

  void print()
  {
    cout<<a;
  }
};

calc operator *(calc c1,int c2)
 {
  calc res;
  res.a=c1.a*c2;
  return res;
 }

int main()
{
  int c;
  cout<<"Enter the  value of b";
  cin>>c;
  calc B(c);
  calc A = B*3;
  A.print();
  return 0;
}

