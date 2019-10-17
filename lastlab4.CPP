/*WAP to use pointer for both base and derived classes and call the member function.
  Use virtual keyword.*/
#include<iostream>

using namespace std;

class A
{
  public:
  int a=100;
  virtual void show()
  {
    cout<<"The pointer of the base class:"<<a<<"\n";
  }
 };
 class B:public A
 {
   public:
   int d=200;
   void show()
   {
     cout<<"The derived class pointer:"<<a<<" "<<d<<"\n";
   }
 };

  int main()
  {
    A a;
    A *bptr=&a;
    bptr->show();
    B b;
    bptr=&b;
    bptr->show();
    return 0;
  }
