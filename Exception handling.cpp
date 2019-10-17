#include<iostream>
using namespace std;
int main()
{
    try
    {
       try
       {
           throw 20;
       }
       catch(int)
       {
           cout<<"Int type Exception In the INNER CATCH"<<endl;
           cout<<"Rethrowing"<<endl;
           throw "Generic";
       }
    }
    catch(int)
    {
        cout<<"Int type Exception in the OUTER CATCH"<<endl;
    }
    catch(...)
    {
        cout<<"Generic Exception in the OUTER CATCH"<<endl;
    }
}

