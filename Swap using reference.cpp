#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x,y;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    swap(x,y);
    cout<<"Value of x: "<<x<<" y: "<<y;
    return 0;
}
