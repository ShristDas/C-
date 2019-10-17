/*WAP to declare a function in the private part and create an object
  to use the function*/
#include <iostream>
using namespace std;

class user
{
    void func_1()
    {
        cout<<"Function accessed!!!";
    }

    public:

        void func_2()
        {
            func_1();
        }
} a;

int main()
{
    a.func_2();

    return 0;
}
