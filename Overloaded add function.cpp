#include<iostream>
using namespace std;
class num
{
    int x=0,y=0,z=0,sum=0;
public:
    void add()
    {
        sum=x+y+z;
        cout<<"Sum: "<<sum<<endl;
    }
    void add(int x)
    {
         sum=x+y+z;
        cout<<"Sum: "<<sum<<endl;
    }
    void add(int x,int y)
    {
         sum=x+y+z;
        cout<<"Sum: "<<sum<<endl;
    }
    void add(int x,int y,int z)
    {
         sum=x+y+z;
        cout<<"Sum: "<<sum<<endl;
    }
};
int main()
{
    num a;
    a.add();
    a.add(5);
    a.add(5,10);
    a.add(5,10,15);
}

