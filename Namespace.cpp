#include<iostream>
using namespace std;
namespace one
{
    int x;
    void use()
    {
        cout<<"Enter x"<<endl;
        cin>>x;
        cout<<"X: "<<x<<endl;
    }
}
int main()
{
    using namespace one;
    use();
    return 0;
}
