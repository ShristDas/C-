#include<iostream>

using namespace std;

template<class A>

A maximum(A a1[],int n)
{
  A max=a1[0];
  for(int i=0;i<n;i++)
  {
    if(a1[i]>max)
    max=a1[i];
  }
  return max;
}

int main()
{
  int a[]={1,5,4,8,99,100};
  float b[]={18.5,10.5,70.5,8.0,44.99};
  cout<<"The maximum value in array 1 is:"<<maximum(a,5)<<"\n";
  cout<<"The maximum value in array 2 is:"<<maximum(b,5)<<"\n";
  return 0;
}
