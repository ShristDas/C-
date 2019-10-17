#include<iostream>
using namespace std;

class Exp
{
    int a, b;

    public:

        void showdata()
        {
            cout << "a= " << a << "\n" << "b= " << b << "\n" ;
        }

        Exp(int x,int y)
        {
            a = x;
            b = y;
        }

};

int main()
{
    Exp A(1,2);

    A.showdata();
    Exp obj=Exp(5,6);
    obj.showdata();

    return 0;
}
