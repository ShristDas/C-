#include<iostream>

using namespace std;

class item
{
  int c=0;
  public:
       void count(void);
       void display(void);
};
  void item::count(void)
 {
    c=c+1;
 }
 void item::display(void)
 {
     cout<<"The no of objects created are:"<<c;
 }
 int main()
 {
   item ob;
   ob.count();
   ob.count();
   ob.count();
   ob.display();
   return 0;
 }
