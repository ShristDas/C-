/*WAP to overload binary - operator and display the result
  of two complex type objects.*/
#include<iostream>

using namespace std;

class complex
{
  int real;
  int imag;
  public:
  complex()
  {
    real=0;
    imag=0;
  }
  complex(int r , int i)
  {
    real=r;
    imag=i;
  }
  complex operator-(complex x)
  {
    complex x1;
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
   complex c1(re1,im1),c2(re2,im2);
   complex c3= c1-c2;
   c3.display();
   return 0;
 }
