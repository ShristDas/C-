#include<iostream>
using namespace std;
class num
{

public:
    int x=0;
    void get()
    {
        cout<<"Enter x"<<endl;
        cin>>x;
    }
     int max1(int, int)
{
    num a,b;
    if(a.x>b.x)
      {
          b.x=a.x;
        return this->x;
    }
    else
    {a.x=b.x;
        return this->x;}
}
    void display()
{
    cout<<this->x<<endl;;
}
};

int main()
{
    num n1,n2,n3;
    n1.get();
    n2.get();
    n3.x=n3.max1(n1.x,n2.x);
    n3.display();
}


