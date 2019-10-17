#include<iostream>
using namespace std;
class abc
{
public:
     virtual void getx()
    {
        cout<<"abc : "<<endl;
    }
};
class def: public abc
{
public:
    void getx()
    {
        cout<<"def : "<<endl;
    }
};
int main()
{
    abc *j=new abc;
    def *k=new def;
    k->getx();
    j->getx();
    j=k;
    j->getx();
}

