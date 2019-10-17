#include <iostream>

using namespace std;

int counter()
{
    static int count;
    for(int i=0; i<50; i++)
        count++;
    return count;
}

class item{
    int p;
};

int main()
{
    item i[50];
    int number = counter();
    cout<<"The number of objects are: "<<number;
    return 0;
}
