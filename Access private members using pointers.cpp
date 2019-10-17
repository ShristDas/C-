#include<iostream>
using namespace std;
class abc
{
    int x;
public:
    void get(int x)
    {
        this->x=x;
    }
    void display()
    {
        cout<<"X is: "<<this->x<<endl;
    }
};
int main()
{
    int z;
    abc *d=new abc;
    cout<<"Enter value of x"<<endl;
    cin>>z;
    d->get(z);
    d->display();
}
