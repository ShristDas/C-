//program to overload unary operator
#include<iostream>

using namespace std;

class unary
{
  int x;
  int y;
  int z;
  public:
  void getdata(int,int,int);
  void display();
  friend void operator-(unary &);
};

void operator-(unary &c1)
{
 c1.x=-c1.x;
 c1.y=-c1.y;
 c1.z=-c1.z;
}
void unary :: getdata(int a,int b,int c)
{
  x=a;
  y=b;
  z=c;
}

 void unary :: display()
 {
   cout<<"The values are:";
   cout<<x<<" "<<y<<" "<<z;
 }

 int main()
 {
   unary u;
   int a1,b1,c1;
   cout<<"Enter three values"<<"\n";
   cin>>a1>>b1>>c1;
   u.getdata(a1,b1,c1);
   u.display();
   -u;
   u.display();
   return 0;
 }
