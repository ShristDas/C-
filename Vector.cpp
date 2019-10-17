#include<iostream>
using namespace std;
class vec
{
    int a,b,c;
public:
    void create()
    {
        cout<<"Enter a,b,c in ai+bj+ck"<<endl;
        cin>>a>>b>>c;
    }
    void display()
    {
        cout<<"The vector is: "<<a<<"i + "<<b<<"j + "<<c<<"k "<<endl;
    }
    void modify()
    {
        char x;
        cout<<"Enter the element you want to modify: \n a, b or c? "<<endl;
        cin>>x;
        if(x=='a')
        {
            cout<<"Enter modified a: "<<endl;
            cin>>a;
        }
        else if(x=='b')
        {
            cout<<"Enter modified a: "<<endl;
            cin>>b;
        }
        else if(x=='c')
        {
            cout<<"Enter modified a: "<<endl;
            cin>>c;
        }
        else
        {
            cout<<"Wrong entry"<<endl;
        }
    }
    void scalar()
    {
        int k;
        cout<<"Enter the scalar multiplication factor: "<<endl;
        cin>>k;
        a=k*a;
        b=b*k;
        c=c*k;
    }
};
int main()
{
    vec v1;
    v1.create();
    v1.display();
    v1.modify();
    v1.display();
    v1.scalar();
    v1.display();
}
