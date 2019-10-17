#include<iostream>
using namespace std;
class DM
{
public:
    float dm,dcm;
    void read()
    {
        cout<<"Enter distance in metres"<<endl;
        cin>>dm;
        cout<<"Enter distance in centimetres"<<endl;
        cin>>dcm;
    }
    void display()
    {
        cout<<"In meteres: "<<dm<<"\t"<<"In Centimetres: "<<dcm<<endl;
    }
    friend void add();
};
class DB
{
public:
    float di,df;
    void read()
    {
        cout<<"Enter distance in feet"<<endl;
        cin>>df;
        cout<<"Enter distance in inch"<<endl;
        cin>>di;
    }
    void display()
    {
        cout<<"In feet: "<<df<<"\t"<<"In inches: "<<di<<endl;
    }
    friend void add();
};
void add(DM &a, DB &b)
{
    int k;
    cout<<"Press 1 to display in metres or centimetres"<<endl;
    cout<<"Press 2 to display in feet or inches"<<endl;
    cin>>k;
    if(k==1)
    {
        cout<<"Adding DM and DF"<<endl;
        a.dm=a.dm+b.df*0.312;
        a.dcm=a.dm*100;
        a.display();
        cout<<"Adding DCM and DF"<<endl;
        a.dcm=a.dcm + b.df*30.48;
        a.dm=a.dcm/100;
        a.display();
        cout<<"Adding DM and DI"<<endl;
        a.dm=a.dm+b.di*0.025;
        a.dcm=a.dm*100;
        a.display();
        cout<<"Adding DCM and DI"<<endl;
        a.dcm=a.dcm + b.di*2.54;
        a.dm=a.dcm/100;
        a.display();
    }
    else if(k==2)
    {
        cout<<"Adding DM and DF"<<endl;
        b.df=a.dm*3.2 + b.df;
        b.di=b.df/12;
        b.display();
        cout<<"Adding DCM and DF"<<endl;
        b.df=a.dcm*0.032 + b.df;
        b.di=b.df/12;
        b.display();
        cout<<"Adding DM and DI"<<endl;
        b.di=a.dm*39.37 + b.di;
        b.df=b.di*12;
        b.display();
        cout<<"Adding DCM and DI"<<endl;
        b.di=a.dcm*0.0393 + b.di;
        b.df=b.di*12;
        b.display();
    }
}
int main()
{
    DM j;DB k;
    j.read();
    k.read();
    j.display();
    k.display();
    add(j,k);
}
