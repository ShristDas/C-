#include <iostream>
using namespace std;

class factorial
{
    long int fact;

    public:

        factorial(int x)
        {
            fact = 1;
            cout << "Factorial of the entered number is- " << Fact(x);
        }

        long int Fact(int x)
        {
            for(int i = 1; i <= x; ++i)
                fact *= i;

 			return fact;
        }
};

int main()
{
 	int n;

 	cout << "Enter the integer whose factorial is to be computed- ";
    cin >> n;

    factorial f(n);

    return 0;
}
