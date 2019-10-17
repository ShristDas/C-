#include<iostream>
using namespace std;
class bill
{
    int qty;
    float price,amt;
public:
    void get()
    {
        cout<<"Enter Qty,Price"<<endl;
        cin>>qty>>price;
        amt=qty*price;
    }
    void display()
    {
        cout<<qty<<"\t"<<price<<"\t"<<amt<<endl;
    }
};
int main()
{
    bill *b1;
    b1=new bill[10];
    int i;
    for(i=0;i<3;i++)
    {
        b1[i].get();
    }
    cout<<"Qty"<<"\t"<<"Price"<<"\t"<<"Amount"<<endl;
    for(i=0;i<3;i++)
    {
        b1[i].display();
    }
}
