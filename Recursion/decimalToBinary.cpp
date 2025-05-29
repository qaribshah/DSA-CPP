#include <iostream>
using namespace std;

void decimalToBinary(const int& value);

int main()
{
    cout << "Enter the number which you want to convert into Binary: ";
    int val = 0;
    cin >> val;
    cout <<"After conversion: ";
    //calling decToBnr function
    decimalToBinary(val);

    return 0;
}

void decimalToBinary(const int& value)
{
    if(value == 0)
    {
        return;
    }
    else
    {
        decimalToBinary(value/2);
        cout << value % 2;
    }
}
/*
How it will be called/executed!
Stack trays of decimalToBinary:
↓ Call stack grows ↓

| decimalToBinary(13) |  
| decimalToBinary(6)  |  
| decimalToBinary(3)  |  
| decimalToBinary(1)  |  
| decimalToBinary(0)  |  <- base case, returns

↑ Stack unwinds ↑

Prints: 1 (from decimalToBinary(1))
Prints: 1 (from decimalToBinary(3))
Prints: 0 (from decimalToBinary(6))
Prints: 1 (from decimalToBinary(13))

*/