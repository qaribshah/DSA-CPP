#include <iostream>
using namespace std;

int sum(const int& value);

int main()
{
    int x = 0;
    cout << "Enter the value of x: ";
    cin >> x;

    //calling sum function
    cout << "The sum of " << x << " till 0 is = " << sum(x) << endl;
    return 0;
}

int sum(const int& value)
{
    if(value == 0)
    {
        return 0;
    }
    else
        return value + sum(value - 1);
}