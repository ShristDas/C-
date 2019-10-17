/*WAP to call a nested function.The function has a exception
  Include essential exception handling statements.*/
#include<iostream>

using namespace std;

void divide(double,double);
void compute(double,double);

void compute(double x1,double y1)
{
  divide(x1,y1);
  cout<<"End of outer function\n";
}

 void divide(double x, double y)
 {
   try
   {
     if(y!=0)
     {
       cout<<"Division x/y = "<<x/y<<"\n";
     }
     else
     {
       throw y;
     }
   }
   catch(double)
   {
     cout<<"Exception  double caught\n";
   }
   cout<<"End of inner nested function\n";
 }

  int main()
  {
    compute(10.5,20.5);
    compute(10.5,0);
    return 0;
  }
