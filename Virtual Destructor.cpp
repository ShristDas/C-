#include<iostream>
using namespace std;
class abc
{
public:
    abc()
    {
        cout<<"Base Constructor"<<endl;
    }
    virtual ~abc()
    {
        cout<<"Base Destructor"<<endl;
    }
};
class def : public abc
{
public:
    def()
    {
        cout<<"Derived Constructor"<<endl;
    }
    ~def()
    {
        cout<<"Derived Destructor"<<endl;
    }
};
int main()
{
    def *d = new def;
    abc *b = d;
    delete b;
    return 0;
}
