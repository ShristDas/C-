#include<iostream>
using namespace std;
int main()
{
    try
    {
        int k;
        cout<<"Enter the type of Exception you want to throw:\n 1. Integer\n 2. Generic"<<endl;
        cin>>k;
        if(k==1)
        {
            throw 20;
        }
        else
        {
            throw 30.98;
        }
    }
    catch(int)
    {
        cout<<"Int type Exception"<<endl;
    }
    catch(...)
    {
        cout<<"Generic Exception"<<endl;
    }
}
