#include <iostream>
using namespace std;

int maximumElementOfArray(int* arr, const int& size);
int main()
{
    int arr[5] = {10, 5, 18, 7, 3};
    int max = maximumElementOfArray(arr, 5);
    cout << max << endl;
    return 0;
}
int maximumElementOfArray(int* arr, const int& size)
{
    if(size == 1)
    {
        return arr[0];
    }
        int max = maximumElementOfArray(arr, size - 1);
        if(arr[size - 1] > max)
        {
            return arr[size - 1];
        }
        else
            return max;
 }