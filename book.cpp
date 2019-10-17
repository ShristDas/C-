#include <iostream>

using namespace std;

class book{
    char name[25];
    float price;

    public:

    void getdata()
    {
        cout<<"Enter name of book: ";
        cin>>name;
        cout<<"Enter the price of the book: ";
        cin>>price;
    }
    void putdata()
    {
        cout<<"Name: "<<name;
        cout<<"Price: "<<price;
    }
};

int main()
{
    book b[3];

    for(int i=0; i<3; i++)
    {
        b[i].getdata();
    }

    for(int i=0; i<3; i++)
    {
        b[i].putdata();
    }
    return 0;
}
