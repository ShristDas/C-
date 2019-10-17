/*Create a class item.Count and display the
  no of objects created*/
#include <iostream>
using namespace std;

int i=0;

class item
{
    public:

        item()
        {
            ++i;
        }
};

int main()
{
    char ch= 'Y';

    cout<<"On the keyboard, press key 'Y' to create objects and any other key to stop creating objects. \n";
    cout<<endl;

    cout<<"Start creating the objects! \n";
    cin>>ch;

    while(ch == 'Y' || ch == 'y')
    {
        item a;
        cin>>ch;
    }

    cout<<"\nThe total no. of objects created is- "<<i;

    return 0;
}
