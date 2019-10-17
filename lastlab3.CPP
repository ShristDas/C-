//program to access the private members like public members using pointers
#include<iostream>

using namespace std;

class compute
{
  int a;
  public:
  int c=50;
  void getdata(int c)
  {
    a=c;
  }
  void putdata()
  {
    cout<<"The private members are:";
    cout<<a<<"\n";
  }
};

  int main()
  {
    int c1,c2;
    cout<<"Enter the values of two numbers";
    cin>>c1>>c2;
    compute c3,c4;
    compute *ptr1=&c3;
    compute *ptr2=&c4;
    ptr1->getdata(c1);
    ptr2->getdata(c2);
    ptr1->putdata();
    ptr2->putdata();
    return 0;
  }

