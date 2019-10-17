/*WAP to create a virtual destructor*/

#include<iostream>

using namespace std;


class base
{
  public:
  base()
  {
    cout<<"Constructing base\n";
  }
  virtual ~base()//virtual destructor
  {
    cout<<"Destructing base\n";
  }
};

class derived : public base
{
  public:
  derived()
  {
    cout<<"Constructing derived\n";
  }
  ~derived()
  {
    cout<<"Destructing derived\n";
  }
};

int main()
{
  derived *d= new derived();
  base *b=d;
  delete b;
  return 0;
}
