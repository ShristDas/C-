#include<iostream>

using namespace std;

class complex1
{
  int real;
  int imag;
  public:
  complex1()
  {
    real=0;
    imag=0;
  }
  complex1(int r , int i)
  {
    real=r;
    imag=i;
  }
  complex1 operator-(complex1 x)
  {
    complex1 x1;
    x1.real=real-x.real;
    x1.imag=imag-x.imag;
    return x1;
  }
  void display()
  {
    cout<<real<<"+"<<imag<<"j";
  }
 };

 int main()
 {
   int re1,im1,re2,im2;
   cout<<"Enter the real and imaginary part of first no\n";
   cin>>re1>>im1;
   cout<<"Enter the real and imaginary part of second no\n";
   cin>>re2>>im2;
   complex1 c1(re1,im1),c2(re2,im2);
   complex1 c3= c1-c2;
   c3.display();
   return 0;
 }

