#include <iostream>
using namespace std;

int factorial(const int& n);

int main()
{
    int x = 0;
    cout << "Enter the value of x: ";
    cin >> x;

    //calling factorial function
    cout << "The factorial of " << x << " is = " << factorial(x) << endl;

    return 0;
}

int factorial(const int& n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial (n - 1);
    }
}