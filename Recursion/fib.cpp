/*
Input: n = 6
Output: 8
(0, 1, 1, 2, 3, 5, 8)
*/
#include <iostream>
using namespace std;

int fib(const int& value);
int main()
{
    int value = 10;
    cout << "Fibonacci of " << value << " is " << fib (10) << endl;
    return 0;
}
int fib(const int& value)
{
    if(value <= 2)
    {
        return 1;
    }
    else
    return fib(value - 1) + fib (value - 2);
}