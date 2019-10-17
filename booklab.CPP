/*Create a class book with two variables name and price.
  Define function to take the data from the user and
  display the data for the three books*/
#include<iostream>

using namespace std;

class book
{
  char name[15];
  float price;
  public:
       void getdata(void);
       void putdata(int);
};

 void book:: getdata(void)
{
  cout<<"Enter the name"<<"\n";
  cin>>name;
  cout<<"Enter the price"<<"\n";
  cin>>price;
}
 void book:: putdata(int j)
{
  cout<<"The price of"<<j<<"book is:"<<price<<"\n";
  cout<<"The name of the"<<j<<" book is:"<<name<<"\n";
}
int main()
{
  book b[3];
  int i;
  cout<<"Enter the details"<<"\n";
  for(i=0;i<3;i++)
  b[i].getdata();
  cout<<"The details are"<<"\n";
  for(i=0;i<3;i++)
  b[i].putdata(i+1);
  return 0;
}


