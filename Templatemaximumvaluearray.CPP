/*WAP to create a template to find the maximum value stored
  in an array*/
#include<iostream>

using namespace std;

template<class T>

T maximum(T a1[],int n)
{
  T max=a1[0];
  int i;
  for(i=0;i<n;i++)
  {
    if(a1[i]>max)
    max=a1[i];
  }
  return max;
}

int main()
{
  int a[]={10,1,2,3,45};
  float b[]={10.5,20.5,9.5,8.0,100.99};
  cout<<"The maximum value in array 1 is:"<<maximum(a,5)<<"\n";
  cout<<"The maximum value in array 2 is:"<<maximum(b,5)<<"\n";
  return 0;
}
