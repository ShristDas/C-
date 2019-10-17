#include <iostream>
using namespace std;

class A
{
	int x;
	int y;
	int z;

	public:

		int add(int x )
		{
			return x;
		}

		int add(int x, int y)
		{
			return (x + y);
		}

		int add(int x , int y , int z )
		{
			return (x + y + z);
		}
};

int main()
{
    int a, b, c;

    A obj;

    cout << obj.add(1) << "\n";
    cout << obj.add(1,2) << "\n";
    cout << obj.add(1,2,3) <<"\n";

    return 0;
}
